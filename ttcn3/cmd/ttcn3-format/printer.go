package main

import (
	"fmt"

	"github.com/nokia/ntt/ttcn3/syntax"
)

type whiteSpace string

const (
	ignore   = whiteSpace(0)
	blank    = whiteSpace(' ')
	tab      = whiteSpace('\t')
	nl       = whiteSpace('\n')
	indent   = whiteSpace('>')
	unindent = whiteSpace('<')
)

func PrettyPrint(nodes ...syntax.Node) {
	var p printer
	p.print(nodes)
}

type printer struct {
	indent         int
	indentRequired bool
}

func (p *printer) print(args ...interface{}) {

	for _, arg := range args {

		switch x := arg.(type) {
		case whiteSpace:
			switch x {
			case indent:
				p.indent++
			case unindent:
				p.indent--

			case nl:
				p.indentRequired = true
				fallthrough
			default:
				fmt.Print(x)
			}
		case syntax.Token:
			if x.IsValid() {
				if p.indentRequired {
					p.indentRequired = false
					for i := p.indent; i > 0; i-- {
						fmt.Print(tab)
					}
				}
				fmt.Print(x.String(), blank)
			}
		case *syntax.Field:
			if x == nil {
				continue
			}
			p.print(x.DefaultTok, x.Type, x.Name, x.ValueConstraint, x.LengthConstraint, x.Optional)
		case *syntax.RefSpec:
			if x == nil {
				continue
			}
			p.print(x.X)
		case *syntax.StructSpec:
			if x == nil {
				continue
			}
			p.print(x.Kind)
			p.print(x.LBrace)
			p.print(indent)
			for i := range x.Fields {
				p.print(x.Fields[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace)
		case *syntax.ListSpec:
			if x == nil {
				continue
			}
			p.print(x.Kind, x.Length, x.OfTok, x.ElemType)
		case *syntax.EnumSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok)
			p.print(x.LBrace)
			p.print(indent)
			for i := range x.Enums {
				p.print(x.Enums[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace)

		case *syntax.BehaviourSpec:
			if x == nil {
				continue
			}
			p.print(x.Kind, x.Params, x.RunsOn, x.System, x.Return)
		case *syntax.Module:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Name, x.Language, x.LBrace, nl)
			p.print(indent)
			for i := range x.Decls {
				p.print(x.Decls[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace)
			p.print(x.With)
		case *syntax.ModuleDef:
			if x == nil {
				continue
			}
			p.print(x.Visibility, x.Def)
		case *syntax.ControlPart:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Body, x.With)
		case *syntax.ImportDecl:
			if x == nil {
				continue
			}
			p.print(x.ImportTok, x.FromTok, x.Module, x.Language, x.LBrace)
			p.print(indent)
			for i := range x.List {
				p.print(x.List[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace)
			p.print(x.With)
		case *syntax.ExceptSpec:
			if x == nil {
				continue
			}
			panic("not implemented: ExceptSpec")
		case *syntax.GroupDecl:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Name, x.LBrace, indent)
			for i := range x.Defs {
				p.print(x.Defs[i], nl)
			}
			p.print(unindent, x.RBrace, x.With)
		case *syntax.FriendDecl:
			if x == nil {
				continue
			}
			p.print(x.FriendTok, x.ModuleTok, x.Module, x.With)
		case *syntax.LanguageSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok)
			for i := range x.List {
				p.print(x.List[i])
			}
		case *syntax.RestrictionSpec:
			if x == nil {
				continue
			}
			p.print(x.TemplateTok, x.LParen, x.Tok, x.RParen)
		case *syntax.RunsOnSpec:
			if x == nil {
				continue
			}
			p.print(x.RunsTok, x.OnTok, x.Comp)
		case *syntax.SystemSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Comp)
		case *syntax.MtcSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Comp)
		case *syntax.ReturnSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Restriction, x.Modif, x.Type)
		case *syntax.FormalPars:
			if x == nil {
				continue
			}
			p.print(x.LParen)
			for i := range x.List {
				p.print(x.List[i])
			}
			p.print(x.RParen)
		case *syntax.FormalPar:
			if x == nil {
				continue
			}
			p.print(x.Direction, x.TemplateRestriction, x.Modif, x.Type, x.Name)
		case *syntax.WithSpec:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.LBrace, indent)
			for i := range x.List {
				p.print(x.List[i], nl)
			}
			p.print(unindent, x.RBrace)
		case *syntax.WithStmt:
			if x == nil {
				continue
			}
			p.print(x.Kind, x.Override, x.LParen)
			for i := range x.List {
				p.print(x.List[i])
			}
			p.print(x.RParen, x.Value)
		case *syntax.Ident:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Tok2)
		case *syntax.ParametrizedIdent:
			if x == nil {
				continue
			}
			p.print(x.Ident, x.Params)
		case *syntax.ValueLiteral:
			if x == nil {
				continue
			}
			p.print(x.Tok)
		case *syntax.CompositeLiteral:
			if x == nil {
				continue
			}
			p.print(x.LBrace)
			p.print(indent)
			for i := range x.List {
				p.print(x.List[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace)
		case *syntax.UnaryExpr:
			p.print(x.Op, x.X)
		case *syntax.BinaryExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.Op, x.Y)
		case *syntax.ParenExpr:
			if x == nil {
				continue
			}
			p.print(x.LParen)
			for i := range x.List {
				p.print(x.List[i])
			}
			p.print(x.RParen)
		case *syntax.SelectorExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.Dot, x.Sel)
		case *syntax.IndexExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.LBrack, x.Index, x.RBrack)
		case *syntax.CallExpr:
			if x == nil {
				continue
			}
			p.print(x.Fun, x.Args)
		case *syntax.LengthExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.Len, x.Size)
		case *syntax.RedirectExpr:
			if x == nil {
				continue
			}
			panic("not implemented RedirectExpr")
		case *syntax.ValueExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.Tok, x.Y)
		case *syntax.ParamExpr:
			if x == nil {
				continue
			}
			p.print(x.X, x.Tok, x.Y)
		case *syntax.FromExpr:
			if x == nil {
				continue
			}
			p.print(x.Kind, x.FromTok, x.X)
		case *syntax.ModifiesExpr:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.X, x.Assign, x.Y)
		case *syntax.RegexpExpr:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.NoCase, x.X)
			if x == nil {
				continue
			}
		case *syntax.PatternExpr:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.NoCase, x.X)
			if x == nil {
				continue
			}
		case *syntax.DecmatchExpr:
			if x == nil {
				continue
			}
			panic("not implemented: DecmatchExpr")
		case *syntax.DecodedExpr:
			if x == nil {
				continue
			}
			panic("not implemented: DecodedExpr")
		case *syntax.DefSelectorExpr:
			if x == nil {
				continue
			}
			panic("not implemented: DefSelectorExpr")

		case *syntax.ValueDecl:
			if x == nil {
				continue
			}
			p.print(x.Kind, x.TemplateRestriction, x.Modif, x.Type)
			for i := range x.Decls {
				p.print(x.Decls[i])
			}
			p.print(x.With)
		case *syntax.ModuleParameterGroup:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.LBrace, indent)
			for i := range x.Decls {
				p.print(x.Decls[i], nl)
			}
			p.print(unindent, x.RBrace, x.With)
		case *syntax.FuncDecl:
			if x == nil {
				continue
			}
			p.print(x.External, x.Kind, x.Name, x.Modif, x.Params)
			p.print(x.RunsOn, x.Mtc, x.System, x.Return, x.Body, x.With)
		case *syntax.SignatureDecl:
			if x == nil {
				continue
			}
			panic("not implemented: SignatureDecl")
		case *syntax.SubTypeDecl:
			if x == nil {
				continue
			}
			p.print(x.TypeTok, x.Field, x.With)
		case *syntax.StructTypeDecl:
			if x == nil {
				continue
			}
			p.print(x.TypeTok, x.Kind, x.Name, x.LBrace)
			for i := range x.Fields {
				p.print(x.Fields[i])
			}
			p.print(x.RBrace, x.With)
		case *syntax.EnumTypeDecl:
			if x == nil {
				continue
			}
			p.print(x.TypeTok, x.EnumTok, x.Name, x.LBrace)
			for i := range x.Enums {
				p.print(x.Enums[i])
			}
			p.print(x.RBrace, x.With)
		case *syntax.BehaviourTypeDecl:
			if x == nil {
				continue
			}
			panic("not implemented: BehaviourTypeDecl")
		case *syntax.PortTypeDecl:
			if x == nil {
				continue
			}
			panic("not implemented: PortTypeDecl")
		case *syntax.PortAttribute:
			if x == nil {
				continue
			}
			panic("not implemented: PortAttribute")
		case *syntax.PortMapAttribute:
			if x == nil {
				continue
			}
			panic("not implemented: PortMapAttribute")
		case *syntax.ComponentTypeDecl:
			if x == nil {
				continue
			}
			panic("not implemented: ComponentTypeDecl")
		case *syntax.BlockStmt:
			if x == nil {
				continue
			}
			p.print(x.LBrace, nl)
			p.print(indent)
			for i := range x.Stmts {
				p.print(x.Stmts[i], nl)
			}
			p.print(unindent)
			p.print(x.RBrace, nl)
		case *syntax.DeclStmt:
			if x == nil {
				continue
			}
			p.print(x.Decl)
		case *syntax.ExprStmt:
			if x == nil {
				continue
			}
			p.print(x.Expr)
		case *syntax.BranchStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Label)
		case *syntax.ReturnStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Result)
		case *syntax.AltStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Body)
		case *syntax.CallStmt:
			if x == nil {
				continue
			}
			p.print(x.Stmt, x.Body)
		case *syntax.ForStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.LParen, x.Init, x.InitSemi, x.Cond, x.CondSemi, x.Post, x.RParen)
			p.print(x.Body)
		case *syntax.WhileStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Cond, x.Body)
		case *syntax.DoWhileStmt:
			if x == nil {
				continue
			}
			p.print(x.DoTok, x.Body, x.WhileTok, x.Cond)
		case *syntax.IfStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Cond, x.Then, x.ElseTok, x.Else)
		case *syntax.SelectStmt:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Union, x.Tag)
			p.print(x.LBrace)
			for i := range x.Body {
				p.print(x.Body[i], nl)
			}
			p.print(x.RBrace)
		case *syntax.CaseClause:
			if x == nil {
				continue
			}
			p.print(x.Tok, x.Case, x.Body)
			if x == nil {
				continue
			}
		case *syntax.CommClause:
			if x == nil {
				continue
			}
			p.print(x.LBrack, x.X, x.Else, x.RBrack, x.Comm, x.Body)
		}
	}
}
