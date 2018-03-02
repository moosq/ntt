/* 
 * This is a list reimplementation like in linux kernel.
 * Rationales for its design can be found at http://lwn.net/Articles/336255/
 */

#ifndef LIST_H
#define LIST_H

#include <stddef.h>

struct list {
    struct list *next;
    struct list *prev;
};

#define LIST_HEAD_INIT(name) \
	{ &(name), &(name) }

#define LIST_INIT_HEAD(name) \
	do { (name)->next = (name); (name)->prev=(name); } while(0);

#define LIST_ENTRY(ptr, type, member) \
	((type*) ( (char*)ptr - offsetof(type,member) ))

#define LIST_FIRST_ENTRY(ptr, type, member) \
        LIST_ENTRY((ptr)->next, type, member)

#define LIST_LAST_ENTRY(ptr, type, member) \
        LIST_ENTRY((ptr)->prev, type, member)

#define LIST_PREPARE_ENTRY(pos, head, member) \
        ((pos) ? : LIST_ENTRY(head, typeof(*pos), member))

#define LIST_FOR_EACH(item, head) \
	for (item = (head)->next; \
	     item != (head); \
	     item = item->next)

#define LIST_FOR_EACH_SAFE(item, tmp, head) \
	for (item = (head)->next, \
	     tmp  = item->next; \
	     item != (head); \
	     item = tmp, \
	     tmp = item->next)

#define LIST_FOR_EACH_ENTRY(item, head, member) \
	for (item = LIST_ENTRY( (head)->next, typeof(*item), member); \
	     &item->member != (head); \
	     item = LIST_ENTRY( item->member.next, typeof(*item), member))

#define LIST_FOR_EACH_ENTRY_CONTINUE(item, head, member) \
        for (item = LIST_ENTRY(item->member.next, typeof(*item), member); \
	     &item->member != (head); \
	     item = LIST_ENTRY( item->member.next, typeof(*item), member))

#define LIST_FOR_EACH_ENTRY_SAFE(item, tmp, head, member) \
	for (item = LIST_ENTRY( (head)->next, typeof(*item), member), \
	     tmp  = LIST_ENTRY( item->member.next, typeof(*item), member); \
	     &item->member != (head); \
	     item = tmp, \
	     tmp = LIST_ENTRY( tmp->member.next, typeof(*tmp), member))

#define LIST_EMPTY(head) \
	((head) == (head)->next)

static inline void list_add(struct list *hdr, struct list *item)
{
    /* link item */
    item->next = hdr->next;
    item->prev = hdr;

    /* link neighbours */
    hdr->next = item;
    item->next->prev = item;
}

static inline void list_add_tail(struct list *hdr, struct list *item)
{
    /* link item */
    item->next = hdr;
    item->prev = hdr->prev;

    /* link neughbours */
    hdr->prev = item;
    item->prev->next = item;

}

static inline void list_remove(struct list *item)
{
    item->prev->next = item->next;
    item->next->prev = item->prev;
    item->prev = (struct list *)0;
    item->next = (struct list *)0;
}

static inline int list_is_last(struct list *head, struct list *item)
{
    return head == item->next;
}

struct hlist_head {
    struct hlist_node *first;
};

struct hlist_node {
    struct hlist_node *next;
    struct hlist_node **pprev;
};

#define HLIST_INIT_HEAD(name) \
	do { (name)->first = NULL; } while(0);

#define HLIST_EMPTY(head) \
	(head->first == NULL)

#define HLIST_ENTRY(ptr, type, member) \
	((type*) ( (char*)ptr - offsetof(type,member) ))

#define HLIST_FOR_EACH(item, head) \
	for (item = (head)->first; item; item = item->next)

#define HLIST_FOR_EACH_SAFE(item, tmp, head) \
	for (item = (head)->first; item && (tmp=item->next, 1); item = tmp)

static inline void hlist_add_head(struct hlist_head *h, struct hlist_node *n)
{
    struct hlist_node *first = h->first;
    n->next = first;
    if (first)
        first->pprev = &n->next;
    h->first = n;
    n->pprev = &h->first;
}

static inline void hlist_add_before(struct hlist_node *n,
                                    struct hlist_node *next)
{
    n->next = next;
    *(next->pprev) = n;
    n->pprev = next->pprev;
    next->pprev = &n->next;
}

static inline void hlist_add_after(struct hlist_node *n,
                                   struct hlist_node *prev)
{
    n->next = prev->next;
    n->pprev = &prev->next;
    prev->next = n;

    if (n->next)
        n->next->pprev = &n->next;
}

static inline void hlist_remove(struct hlist_node *n)
{
    struct hlist_node *next = n->next;
    struct hlist_node **pprev = n->pprev;
    *pprev = next;
    if (next)
        next->pprev = pprev;
}
#endif
