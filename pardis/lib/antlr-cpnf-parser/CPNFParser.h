
// Generated from C.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace antlr_CPNF {


class  CParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, Auto = 22, Break = 23, Case = 24, Char = 25, Const = 26, 
    Continue = 27, Default = 28, Do = 29, Double = 30, Else = 31, Enum = 32, 
    Extern = 33, Float = 34, For = 35, Goto = 36, If = 37, Inline = 38, 
    Int = 39, Long = 40, Register = 41, Restrict = 42, Return = 43, Short = 44, 
    Signed = 45, Sizeof = 46, Static = 47, Struct = 48, Switch = 49, Typedef = 50, 
    Union = 51, Unsigned = 52, Void = 53, Volatile = 54, While = 55, Alignas = 56, 
    Alignof = 57, Atomic = 58, Bool = 59, Complex = 60, Generic = 61, Imaginary = 62, 
    Noreturn = 63, StaticAssert = 64, ThreadLocal = 65, LeftParen = 66, 
    RightParen = 67, LeftBracket = 68, RightBracket = 69, LeftBrace = 70, 
    RightBrace = 71, Less = 72, LessEqual = 73, Greater = 74, GreaterEqual = 75, 
    LeftShift = 76, RightShift = 77, Plus = 78, PlusPlus = 79, Minus = 80, 
    MinusMinus = 81, Star = 82, Div = 83, Mod = 84, And = 85, Or = 86, AndAnd = 87, 
    OrOr = 88, Caret = 89, Not = 90, Tilde = 91, Question = 92, Colon = 93, 
    Semi = 94, Comma = 95, Assign = 96, StarAssign = 97, DivAssign = 98, 
    ModAssign = 99, PlusAssign = 100, MinusAssign = 101, LeftShiftAssign = 102, 
    RightShiftAssign = 103, AndAssign = 104, XorAssign = 105, OrAssign = 106, 
    Equal = 107, NotEqual = 108, Arrow = 109, Dot = 110, Ellipsis = 111, 
    RealPart = 112, ImaginaryPart = 113, Identifier = 114, Constant = 115, 
    StringLiteral = 116, ComplexDefine = 117, LineAfterPreprocessing = 118, 
    LineDirective = 119, IncludeDirective = 120, PragmaDirective = 121, 
    Whitespace = 122, Newline = 123, BlockComment = 124, LineComment = 125
  };

  enum {
    RuleAbstractDeclarator = 0, RuleAdditiveExpression = 1, RuleAlignmentSpecifier = 2, 
    RuleArgumentExpressionList_block_1 = 3, RuleAsmName = 4, RuleAssignmentExpression = 5, 
    RuleAssignmentOperator = 6, RuleAtomicTypeSpecifier = 7, RuleBlockItem = 8, 
    RuleCastExpression = 9, RuleCompilationUnit = 10, RuleCompoundStatement = 11, 
    RuleConditionalExpression = 12, RuleConditionalExpression_block_1 = 13, 
    RuleDeclaration = 14, RuleDeclarationSpecifier = 15, RuleDeclarationSpecifiers = 16, 
    RuleDeclarator = 17, RuleDesignation = 18, RuleDesignator = 19, RuleDesignator_block_1 = 20, 
    RuleDirectAbstractDeclarator = 21, RuleDirectDeclarator = 22, RuleEnumSpecifier = 23, 
    RuleEnumerationConstant = 24, RuleEnumerator = 25, RuleEnumeratorList_block_1 = 26, 
    RuleEqualityExpression = 27, RuleExpressionStatement = 28, RuleExternalDeclaration = 29, 
    RuleFunctionDefinition = 30, RuleFunctionSpecifier = 31, RuleFunctionSpecifier_block_1 = 32, 
    RuleGccAttribute = 33, RuleGccAttributeList_block_1 = 34, RuleGccAttributeSpecifier = 35, 
    RuleGccAttribute_block_1 = 36, RuleGccDeclaratorExtension = 37, RuleGenericAssocList_block_1 = 38, 
    RuleGenericAssociation = 39, RuleGenericSelection = 40, RuleIdentifierList_block_1 = 41, 
    RuleInitDeclarator = 42, RuleInitDeclaratorList_block_1 = 43, RuleInitializer = 44, 
    RuleInitializerList = 45, RuleInitializerList_block_1 = 46, RuleInitializer_block_1 = 47, 
    RuleJumpStatement = 48, RuleMultiplicativeExpression = 49, RuleParameterDeclaration = 50, 
    RuleParameterList_block_1 = 51, RuleParameterTypeList = 52, RulePnf_list_left_0 = 53, 
    RulePnf_list_left_1 = 54, RulePnf_list_left_10 = 55, RulePnf_list_left_11 = 56, 
    RulePnf_list_left_12 = 57, RulePnf_list_left_13 = 58, RulePnf_list_left_14 = 59, 
    RulePnf_list_left_15 = 60, RulePnf_list_left_2 = 61, RulePnf_list_left_3 = 62, 
    RulePnf_list_left_4 = 63, RulePnf_list_left_5 = 64, RulePnf_list_left_6 = 65, 
    RulePnf_list_left_7 = 66, RulePnf_list_left_8 = 67, RulePnf_list_left_9 = 68, 
    RulePnf_option_compilationUnit_98 = 69, RulePnf_option_compoundStatement_87 = 70, 
    RulePnf_option_conditionalExpression_46 = 71, RulePnf_option_conditionalExpression_block_1_34 = 72, 
    RulePnf_option_declaration_14 = 73, RulePnf_option_designator_83 = 74, 
    RulePnf_option_directAbstractDeclarator_79 = 75, RulePnf_option_enumerator_20 = 76, 
    RulePnf_option_externalDeclaration_31 = 77, RulePnf_option_functionDefinition_93 = 78, 
    RulePnf_option_functionDefinition_94 = 79, RulePnf_option_gccAttributeList_22 = 80, 
    RulePnf_option_gccAttributeSpecifier_15 = 81, RulePnf_option_gccAttribute_73 = 82, 
    RulePnf_option_gccAttribute_block_1_36 = 83, RulePnf_option_initDeclarator_17 = 84, 
    RulePnf_option_initializerList_block_1_38 = 85, RulePnf_option_initializer_82 = 86, 
    RulePnf_option_initializer_block_1_81 = 87, RulePnf_option_parameterTypeList_25 = 88, 
    RulePnf_option_pnf_part_directDeclarator_21_70 = 89, RulePnf_option_pnf_part_directDeclarator_21_71 = 90, 
    RulePnf_option_pnf_part_directDeclarator_21_72 = 91, RulePnf_option_pointer_26 = 92, 
    RulePnf_option_postfixExpression_102 = 93, RulePnf_option_postfixExpression_2 = 94, 
    RulePnf_option_primaryExpression_41 = 95, RulePnf_option_selectionStatement_88 = 96, 
    RulePnf_option_specifierQualifierList_65 = 97, RulePnf_option_statement_89 = 98, 
    RulePnf_option_statement_90 = 99, RulePnf_option_statement_91 = 100, 
    RulePnf_option_statement_block_6_39 = 101, RulePnf_option_structDeclaration_18 = 102, 
    RulePnf_option_structDeclarator_66 = 103, RulePnf_option_structOrUnionSpecifier_61 = 104, 
    RulePnf_option_structOrUnionSpecifier_62 = 105, RulePnf_option_typeName_42 = 106, 
    RulePnf_option_typeName_43 = 107, RulePnf_part_additiveExpression_4 = 108, 
    RulePnf_part_andExpression_8 = 109, RulePnf_part_assignmentExpression_99 = 110, 
    RulePnf_part_castExpression_103 = 111, RulePnf_part_directAbstractDeclarator_27 = 112, 
    RulePnf_part_directDeclarator_21 = 113, RulePnf_part_enumerator_19 = 114, 
    RulePnf_part_equalityExpression_7 = 115, RulePnf_part_exclusiveOrExpression_9 = 116, 
    RulePnf_part_expression_13 = 117, RulePnf_part_externalDeclaration_30 = 118, 
    RulePnf_part_inclusiveOrExpression_10 = 119, RulePnf_part_initDeclarator_16 = 120, 
    RulePnf_part_logicalAndExpression_11 = 121, RulePnf_part_logicalOrExpression_12 = 122, 
    RulePnf_part_multiplicativeExpression_3 = 123, RulePnf_part_parameterTypeList_24 = 124, 
    RulePnf_part_postfixExpression_0 = 125, RulePnf_part_postfixExpression_1 = 126, 
    RulePnf_part_postfixExpression_101 = 127, RulePnf_part_relationalExpression_6 = 128, 
    RulePnf_part_shiftExpression_5 = 129, RulePnf_part_statement_100 = 130, 
    RulePnf_part_unaryExpression_104 = 131, RulePnf_plus_blockItemList_29 = 132, 
    RulePnf_plus_declarationList_33 = 133, RulePnf_plus_declarationSpecifiers2_76 = 134, 
    RulePnf_plus_designatorList_28 = 135, RulePnf_plus_primaryExpression_40 = 136, 
    RulePnf_plus_translationUnit_32 = 137, RulePnf_plus_typeQualifierList_23 = 138, 
    RulePnf_star_additiveExpression_49 = 139, RulePnf_star_andExpression_53 = 140, 
    RulePnf_star_argumentExpressionList_47 = 141, RulePnf_star_assignmentExpression_105 = 142, 
    RulePnf_star_castExpression_107 = 143, RulePnf_star_declarationSpecifiers_59 = 144, 
    RulePnf_star_declarationSpecifiers_60 = 145, RulePnf_star_declarator_63 = 146, 
    RulePnf_star_directAbstractDeclarator_78 = 147, RulePnf_star_directDeclarator_69 = 148, 
    RulePnf_star_enumeratorList_68 = 149, RulePnf_star_equalityExpression_52 = 150, 
    RulePnf_star_exclusiveOrExpression_54 = 151, RulePnf_star_expression_58 = 152, 
    RulePnf_star_gccAttributeList_74 = 153, RulePnf_star_genericAssocList_44 = 154, 
    RulePnf_star_identifierList_37 = 155, RulePnf_star_inclusiveOrExpression_55 = 156, 
    RulePnf_star_initDeclaratorList_64 = 157, RulePnf_star_initializerList_80 = 158, 
    RulePnf_star_logicalAndExpression_56 = 159, RulePnf_star_logicalOrExpression_57 = 160, 
    RulePnf_star_multiplicativeExpression_48 = 161, RulePnf_star_parameterList_77 = 162, 
    RulePnf_star_postfixExpression_45 = 163, RulePnf_star_relationalExpression_51 = 164, 
    RulePnf_star_shiftExpression_50 = 165, RulePnf_star_statement_106 = 166, 
    RulePnf_star_statement_92 = 167, RulePnf_star_statement_block_3_85 = 168, 
    RulePnf_star_statement_block_5_86 = 169, RulePnf_star_structDeclarationList_35 = 170, 
    RulePnf_star_structDeclaratorList_67 = 171, RulePnf_star_unaryExpression_108 = 172, 
    RulePnf_start = 173, RulePointer = 174, RulePostfixExpression = 175, 
    RulePrimaryExpression = 176, RuleRelationalExpression = 177, RuleSelectionStatement_block_1 = 178, 
    RuleShiftExpression = 179, RuleSpecifierQualifierList = 180, RuleStatement = 181, 
    RuleStatement_block_1 = 182, RuleStatement_block_2 = 183, RuleStatement_block_4 = 184, 
    RuleStatement_block_6 = 185, RuleStaticAssertDeclaration = 186, RuleStorageClassSpecifier = 187, 
    RuleStructDeclaration = 188, RuleStructDeclarator = 189, RuleStructDeclaratorList_block_1 = 190, 
    RuleStructOrUnion = 191, RuleStructOrUnionSpecifier = 192, RuleTypeName = 193, 
    RuleTypeQualifier = 194, RuleTypeSpecifier = 195, RuleTypeSpecifier_block_1 = 196, 
    RuleTypeSpecifier_block_2 = 197, RuleTypedefName = 198, RuleUnaryExpression = 199, 
    RuleUnaryExpression_block_1 = 200, RuleUnaryExpression_block_2 = 201, 
    RuleUnaryOperator = 202
  };

  CParser(antlr4::TokenStream *input);
  ~CParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AbstractDeclaratorContext;
  class AdditiveExpressionContext;
  class AlignmentSpecifierContext;
  class ArgumentExpressionList_block_1Context;
  class AsmNameContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class AtomicTypeSpecifierContext;
  class BlockItemContext;
  class CastExpressionContext;
  class CompilationUnitContext;
  class CompoundStatementContext;
  class ConditionalExpressionContext;
  class ConditionalExpression_block_1Context;
  class DeclarationContext;
  class DeclarationSpecifierContext;
  class DeclarationSpecifiersContext;
  class DeclaratorContext;
  class DesignationContext;
  class DesignatorContext;
  class Designator_block_1Context;
  class DirectAbstractDeclaratorContext;
  class DirectDeclaratorContext;
  class EnumSpecifierContext;
  class EnumerationConstantContext;
  class EnumeratorContext;
  class EnumeratorList_block_1Context;
  class EqualityExpressionContext;
  class ExpressionStatementContext;
  class ExternalDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionSpecifierContext;
  class FunctionSpecifier_block_1Context;
  class GccAttributeContext;
  class GccAttributeList_block_1Context;
  class GccAttributeSpecifierContext;
  class GccAttribute_block_1Context;
  class GccDeclaratorExtensionContext;
  class GenericAssocList_block_1Context;
  class GenericAssociationContext;
  class GenericSelectionContext;
  class IdentifierList_block_1Context;
  class InitDeclaratorContext;
  class InitDeclaratorList_block_1Context;
  class InitializerContext;
  class InitializerListContext;
  class InitializerList_block_1Context;
  class Initializer_block_1Context;
  class JumpStatementContext;
  class MultiplicativeExpressionContext;
  class ParameterDeclarationContext;
  class ParameterList_block_1Context;
  class ParameterTypeListContext;
  class Pnf_list_left_0Context;
  class Pnf_list_left_1Context;
  class Pnf_list_left_10Context;
  class Pnf_list_left_11Context;
  class Pnf_list_left_12Context;
  class Pnf_list_left_13Context;
  class Pnf_list_left_14Context;
  class Pnf_list_left_15Context;
  class Pnf_list_left_2Context;
  class Pnf_list_left_3Context;
  class Pnf_list_left_4Context;
  class Pnf_list_left_5Context;
  class Pnf_list_left_6Context;
  class Pnf_list_left_7Context;
  class Pnf_list_left_8Context;
  class Pnf_list_left_9Context;
  class Pnf_option_compilationUnit_98Context;
  class Pnf_option_compoundStatement_87Context;
  class Pnf_option_conditionalExpression_46Context;
  class Pnf_option_conditionalExpression_block_1_34Context;
  class Pnf_option_declaration_14Context;
  class Pnf_option_designator_83Context;
  class Pnf_option_directAbstractDeclarator_79Context;
  class Pnf_option_enumerator_20Context;
  class Pnf_option_externalDeclaration_31Context;
  class Pnf_option_functionDefinition_93Context;
  class Pnf_option_functionDefinition_94Context;
  class Pnf_option_gccAttributeList_22Context;
  class Pnf_option_gccAttributeSpecifier_15Context;
  class Pnf_option_gccAttribute_73Context;
  class Pnf_option_gccAttribute_block_1_36Context;
  class Pnf_option_initDeclarator_17Context;
  class Pnf_option_initializerList_block_1_38Context;
  class Pnf_option_initializer_82Context;
  class Pnf_option_initializer_block_1_81Context;
  class Pnf_option_parameterTypeList_25Context;
  class Pnf_option_pnf_part_directDeclarator_21_70Context;
  class Pnf_option_pnf_part_directDeclarator_21_71Context;
  class Pnf_option_pnf_part_directDeclarator_21_72Context;
  class Pnf_option_pointer_26Context;
  class Pnf_option_postfixExpression_102Context;
  class Pnf_option_postfixExpression_2Context;
  class Pnf_option_primaryExpression_41Context;
  class Pnf_option_selectionStatement_88Context;
  class Pnf_option_specifierQualifierList_65Context;
  class Pnf_option_statement_89Context;
  class Pnf_option_statement_90Context;
  class Pnf_option_statement_91Context;
  class Pnf_option_statement_block_6_39Context;
  class Pnf_option_structDeclaration_18Context;
  class Pnf_option_structDeclarator_66Context;
  class Pnf_option_structOrUnionSpecifier_61Context;
  class Pnf_option_structOrUnionSpecifier_62Context;
  class Pnf_option_typeName_42Context;
  class Pnf_option_typeName_43Context;
  class Pnf_part_additiveExpression_4Context;
  class Pnf_part_andExpression_8Context;
  class Pnf_part_assignmentExpression_99Context;
  class Pnf_part_castExpression_103Context;
  class Pnf_part_directAbstractDeclarator_27Context;
  class Pnf_part_directDeclarator_21Context;
  class Pnf_part_enumerator_19Context;
  class Pnf_part_equalityExpression_7Context;
  class Pnf_part_exclusiveOrExpression_9Context;
  class Pnf_part_expression_13Context;
  class Pnf_part_externalDeclaration_30Context;
  class Pnf_part_inclusiveOrExpression_10Context;
  class Pnf_part_initDeclarator_16Context;
  class Pnf_part_logicalAndExpression_11Context;
  class Pnf_part_logicalOrExpression_12Context;
  class Pnf_part_multiplicativeExpression_3Context;
  class Pnf_part_parameterTypeList_24Context;
  class Pnf_part_postfixExpression_0Context;
  class Pnf_part_postfixExpression_1Context;
  class Pnf_part_postfixExpression_101Context;
  class Pnf_part_relationalExpression_6Context;
  class Pnf_part_shiftExpression_5Context;
  class Pnf_part_statement_100Context;
  class Pnf_part_unaryExpression_104Context;
  class Pnf_plus_blockItemList_29Context;
  class Pnf_plus_declarationList_33Context;
  class Pnf_plus_declarationSpecifiers2_76Context;
  class Pnf_plus_designatorList_28Context;
  class Pnf_plus_primaryExpression_40Context;
  class Pnf_plus_translationUnit_32Context;
  class Pnf_plus_typeQualifierList_23Context;
  class Pnf_star_additiveExpression_49Context;
  class Pnf_star_andExpression_53Context;
  class Pnf_star_argumentExpressionList_47Context;
  class Pnf_star_assignmentExpression_105Context;
  class Pnf_star_castExpression_107Context;
  class Pnf_star_declarationSpecifiers_59Context;
  class Pnf_star_declarationSpecifiers_60Context;
  class Pnf_star_declarator_63Context;
  class Pnf_star_directAbstractDeclarator_78Context;
  class Pnf_star_directDeclarator_69Context;
  class Pnf_star_enumeratorList_68Context;
  class Pnf_star_equalityExpression_52Context;
  class Pnf_star_exclusiveOrExpression_54Context;
  class Pnf_star_expression_58Context;
  class Pnf_star_gccAttributeList_74Context;
  class Pnf_star_genericAssocList_44Context;
  class Pnf_star_identifierList_37Context;
  class Pnf_star_inclusiveOrExpression_55Context;
  class Pnf_star_initDeclaratorList_64Context;
  class Pnf_star_initializerList_80Context;
  class Pnf_star_logicalAndExpression_56Context;
  class Pnf_star_logicalOrExpression_57Context;
  class Pnf_star_multiplicativeExpression_48Context;
  class Pnf_star_parameterList_77Context;
  class Pnf_star_postfixExpression_45Context;
  class Pnf_star_relationalExpression_51Context;
  class Pnf_star_shiftExpression_50Context;
  class Pnf_star_statement_106Context;
  class Pnf_star_statement_92Context;
  class Pnf_star_statement_block_3_85Context;
  class Pnf_star_statement_block_5_86Context;
  class Pnf_star_structDeclarationList_35Context;
  class Pnf_star_structDeclaratorList_67Context;
  class Pnf_star_unaryExpression_108Context;
  class Pnf_startContext;
  class PointerContext;
  class PostfixExpressionContext;
  class PrimaryExpressionContext;
  class RelationalExpressionContext;
  class SelectionStatement_block_1Context;
  class ShiftExpressionContext;
  class SpecifierQualifierListContext;
  class StatementContext;
  class Statement_block_1Context;
  class Statement_block_2Context;
  class Statement_block_4Context;
  class Statement_block_6Context;
  class StaticAssertDeclarationContext;
  class StorageClassSpecifierContext;
  class StructDeclarationContext;
  class StructDeclaratorContext;
  class StructDeclaratorList_block_1Context;
  class StructOrUnionContext;
  class StructOrUnionSpecifierContext;
  class TypeNameContext;
  class TypeQualifierContext;
  class TypeSpecifierContext;
  class TypeSpecifier_block_1Context;
  class TypeSpecifier_block_2Context;
  class TypedefNameContext;
  class UnaryExpressionContext;
  class UnaryExpression_block_1Context;
  class UnaryExpression_block_2Context;
  class UnaryOperatorContext; 

  class  AbstractDeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerContext *pointer();
    Pnf_option_pointer_26Context *pnf_option_pointer_26();
    DirectAbstractDeclaratorContext *directAbstractDeclarator();
    Pnf_star_declarator_63Context *pnf_star_declarator_63();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  AdditiveExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    Pnf_star_additiveExpression_49Context *pnf_star_additiveExpression_49();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  AlignmentSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    AlignmentSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentSpecifierContext* alignmentSpecifier();

  class  ArgumentExpressionList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    ArgumentExpressionList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentExpressionList_block_1Context* argumentExpressionList_block_1();

  class  AsmNameContext : public antlr4::RuleContextWithAltNum {
  public:
    AsmNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmNameContext* asmName();

  class  AssignmentExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_star_assignmentExpression_105Context *pnf_star_assignmentExpression_105();
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::RuleContextWithAltNum {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  AtomicTypeSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    AtomicTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomicTypeSpecifierContext* atomicTypeSpecifier();

  class  BlockItemContext : public antlr4::RuleContextWithAltNum {
  public:
    BlockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    StatementContext *statement();
    FunctionDefinitionContext *functionDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockItemContext* blockItem();

  class  CastExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_star_castExpression_107Context *pnf_star_castExpression_107();
    UnaryExpressionContext *unaryExpression();
    TypeNameContext *typeName();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  CompilationUnitContext : public antlr4::RuleContextWithAltNum {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_compilationUnit_98Context *pnf_option_compilationUnit_98();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  CompoundStatementContext : public antlr4::RuleContextWithAltNum {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_compoundStatement_87Context *pnf_option_compoundStatement_87();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  ConditionalExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_primaryExpression_41Context *pnf_option_primaryExpression_41();
    Pnf_list_left_1Context *pnf_list_left_1();
    Pnf_option_conditionalExpression_46Context *pnf_option_conditionalExpression_46();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  ConditionalExpression_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    ConditionalExpression_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_conditionalExpression_block_1_34Context *pnf_option_conditionalExpression_block_1_34();
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpression_block_1Context* conditionalExpression_block_1();

  class  DeclarationContext : public antlr4::RuleContextWithAltNum {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    Pnf_option_declaration_14Context *pnf_option_declaration_14();
    StaticAssertDeclarationContext *staticAssertDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  DeclarationSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    DeclarationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageClassSpecifierContext *storageClassSpecifier();
    TypeSpecifierContext *typeSpecifier();
    Pnf_star_declarationSpecifiers_60Context *pnf_star_declarationSpecifiers_60();
    TypeQualifierContext *typeQualifier();
    FunctionSpecifierContext *functionSpecifier();
    AlignmentSpecifierContext *alignmentSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSpecifierContext* declarationSpecifier();

  class  DeclarationSpecifiersContext : public antlr4::RuleContextWithAltNum {
  public:
    DeclarationSpecifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_star_declarationSpecifiers_59Context *> pnf_star_declarationSpecifiers_59();
    Pnf_star_declarationSpecifiers_59Context* pnf_star_declarationSpecifiers_59(size_t i);
    TypeSpecifierContext *typeSpecifier();
    Pnf_star_declarationSpecifiers_60Context *pnf_star_declarationSpecifiers_60();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSpecifiersContext* declarationSpecifiers();

  class  DeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_pointer_26Context *pnf_option_pointer_26();
    DirectDeclaratorContext *directDeclarator();
    Pnf_star_declarator_63Context *pnf_star_declarator_63();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  DesignationContext : public antlr4::RuleContextWithAltNum {
  public:
    DesignationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_plus_designatorList_28Context *pnf_plus_designatorList_28();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignationContext* designation();

  class  DesignatorContext : public antlr4::RuleContextWithAltNum {
  public:
    DesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    Pnf_option_designator_83Context *pnf_option_designator_83();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DesignatorContext* designator();

  class  Designator_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    Designator_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Designator_block_1Context* designator_block_1();

  class  DirectAbstractDeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    DirectAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AbstractDeclaratorContext *abstractDeclarator();
    Pnf_star_declarator_63Context *pnf_star_declarator_63();
    Pnf_star_directAbstractDeclarator_78Context *pnf_star_directAbstractDeclarator_78();
    Pnf_option_pnf_part_directDeclarator_21_70Context *pnf_option_pnf_part_directDeclarator_21_70();
    Pnf_option_pnf_part_directDeclarator_21_71Context *pnf_option_pnf_part_directDeclarator_21_71();
    AssignmentExpressionContext *assignmentExpression();
    Pnf_plus_typeQualifierList_23Context *pnf_plus_typeQualifierList_23();
    Pnf_option_directAbstractDeclarator_79Context *pnf_option_directAbstractDeclarator_79();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectAbstractDeclaratorContext* directAbstractDeclarator();

  class  DirectDeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    DirectDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    Pnf_star_directDeclarator_69Context *pnf_star_directDeclarator_69();
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectDeclaratorContext* directDeclarator();

  class  EnumSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_structOrUnionSpecifier_62Context *pnf_option_structOrUnionSpecifier_62();
    Pnf_list_left_11Context *pnf_list_left_11();
    Pnf_option_postfixExpression_2Context *pnf_option_postfixExpression_2();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumerationConstantContext : public antlr4::RuleContextWithAltNum {
  public:
    EnumerationConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationConstantContext* enumerationConstant();

  class  EnumeratorContext : public antlr4::RuleContextWithAltNum {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumerationConstantContext *enumerationConstant();
    Pnf_option_enumerator_20Context *pnf_option_enumerator_20();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  EnumeratorList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    EnumeratorList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorList_block_1Context* enumeratorList_block_1();

  class  EqualityExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    Pnf_star_equalityExpression_52Context *pnf_star_equalityExpression_52();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  ExpressionStatementContext : public antlr4::RuleContextWithAltNum {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_conditionalExpression_block_1_34Context *pnf_option_conditionalExpression_block_1_34();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  ExternalDeclarationContext : public antlr4::RuleContextWithAltNum {
  public:
    ExternalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IncludeDirective();
    antlr4::tree::TerminalNode *PragmaDirective();
    FunctionDefinitionContext *functionDefinition();
    DeclarationContext *declaration();
    Pnf_option_externalDeclaration_31Context *pnf_option_externalDeclaration_31();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalDeclarationContext* externalDeclaration();

  class  FunctionDefinitionContext : public antlr4::RuleContextWithAltNum {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_functionDefinition_93Context *pnf_option_functionDefinition_93();
    DeclaratorContext *declarator();
    Pnf_option_functionDefinition_94Context *pnf_option_functionDefinition_94();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionSpecifier_block_1Context *functionSpecifier_block_1();
    GccAttributeSpecifierContext *gccAttributeSpecifier();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  FunctionSpecifier_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    FunctionSpecifier_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifier_block_1Context* functionSpecifier_block_1();

  class  GccAttributeContext : public antlr4::RuleContextWithAltNum {
  public:
    GccAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_gccAttribute_73Context *pnf_option_gccAttribute_73();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GccAttributeContext* gccAttribute();

  class  GccAttributeList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    GccAttributeList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_gccAttributeList_22Context *pnf_option_gccAttributeList_22();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GccAttributeList_block_1Context* gccAttributeList_block_1();

  class  GccAttributeSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    GccAttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_gccAttributeSpecifier_15Context *pnf_option_gccAttributeSpecifier_15();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GccAttributeSpecifierContext* gccAttributeSpecifier();

  class  GccAttribute_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    GccAttribute_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_gccAttribute_block_1_36Context *pnf_option_gccAttribute_block_1_36();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GccAttribute_block_1Context* gccAttribute_block_1();

  class  GccDeclaratorExtensionContext : public antlr4::RuleContextWithAltNum {
  public:
    GccDeclaratorExtensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsmNameContext *asmName();
    Pnf_plus_primaryExpression_40Context *pnf_plus_primaryExpression_40();
    GccAttributeSpecifierContext *gccAttributeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GccDeclaratorExtensionContext* gccDeclaratorExtension();

  class  GenericAssocList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    GenericAssocList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericAssociationContext *genericAssociation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericAssocList_block_1Context* genericAssocList_block_1();

  class  GenericAssociationContext : public antlr4::RuleContextWithAltNum {
  public:
    GenericAssociationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericAssociationContext* genericAssociation();

  class  GenericSelectionContext : public antlr4::RuleContextWithAltNum {
  public:
    GenericSelectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    Pnf_list_left_2Context *pnf_list_left_2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GenericSelectionContext* genericSelection();

  class  IdentifierList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    IdentifierList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierList_block_1Context* identifierList_block_1();

  class  InitDeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    Pnf_option_initDeclarator_17Context *pnf_option_initDeclarator_17();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorContext* initDeclarator();

  class  InitDeclaratorList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    InitDeclaratorList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitDeclaratorContext *initDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitDeclaratorList_block_1Context* initDeclaratorList_block_1();

  class  InitializerContext : public antlr4::RuleContextWithAltNum {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    Pnf_option_initializer_82Context *pnf_option_initializer_82();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  InitializerListContext : public antlr4::RuleContextWithAltNum {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_initializerList_block_1_38Context *pnf_option_initializerList_block_1_38();
    InitializerContext *initializer();
    Pnf_star_initializerList_80Context *pnf_star_initializerList_80();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();

  class  InitializerList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    InitializerList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_initializerList_block_1_38Context *pnf_option_initializerList_block_1_38();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerList_block_1Context* initializerList_block_1();

  class  Initializer_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    Initializer_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerListContext *initializerList();
    Pnf_option_initializer_block_1_81Context *pnf_option_initializer_block_1_81();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_block_1Context* initializer_block_1();

  class  JumpStatementContext : public antlr4::RuleContextWithAltNum {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    Pnf_option_conditionalExpression_block_1_34Context *pnf_option_conditionalExpression_block_1_34();
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  MultiplicativeExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastExpressionContext *castExpression();
    Pnf_star_multiplicativeExpression_48Context *pnf_star_multiplicativeExpression_48();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  ParameterDeclarationContext : public antlr4::RuleContextWithAltNum {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();
    DeclaratorContext *declarator();
    Pnf_plus_declarationSpecifiers2_76Context *pnf_plus_declarationSpecifiers2_76();
    Pnf_option_typeName_43Context *pnf_option_typeName_43();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  ParameterList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    ParameterList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationContext *parameterDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterList_block_1Context* parameterList_block_1();

  class  ParameterTypeListContext : public antlr4::RuleContextWithAltNum {
  public:
    ParameterTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_13Context *pnf_list_left_13();
    Pnf_option_parameterTypeList_25Context *pnf_option_parameterTypeList_25();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterTypeListContext* parameterTypeList();

  class  Pnf_list_left_0Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    Pnf_star_identifierList_37Context *pnf_star_identifierList_37();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_0Context* pnf_list_left_0();

  class  Pnf_list_left_1Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_7Context *pnf_list_left_7();
    Pnf_star_logicalOrExpression_57Context *pnf_star_logicalOrExpression_57();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_1Context* pnf_list_left_1();

  class  Pnf_list_left_10Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_10Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDeclaratorContext *structDeclarator();
    Pnf_star_structDeclaratorList_67Context *pnf_star_structDeclaratorList_67();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_10Context* pnf_list_left_10();

  class  Pnf_list_left_11Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_11Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    Pnf_star_enumeratorList_68Context *pnf_star_enumeratorList_68();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_11Context* pnf_list_left_11();

  class  Pnf_list_left_12Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_12Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_gccAttributeList_22Context *pnf_option_gccAttributeList_22();
    Pnf_star_gccAttributeList_74Context *pnf_star_gccAttributeList_74();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_12Context* pnf_list_left_12();

  class  Pnf_list_left_13Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_13Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationContext *parameterDeclaration();
    Pnf_star_parameterList_77Context *pnf_star_parameterList_77();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_13Context* pnf_list_left_13();

  class  Pnf_list_left_14Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_14Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_1Context *pnf_list_left_1();
    Pnf_star_statement_block_3_85Context *pnf_star_statement_block_3_85();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_14Context* pnf_list_left_14();

  class  Pnf_list_left_15Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_15Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_1Context *pnf_list_left_1();
    Pnf_star_statement_block_5_86Context *pnf_star_statement_block_5_86();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_15Context* pnf_list_left_15();

  class  Pnf_list_left_2Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericAssociationContext *genericAssociation();
    Pnf_star_genericAssocList_44Context *pnf_star_genericAssocList_44();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_2Context* pnf_list_left_2();

  class  Pnf_list_left_3Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    Pnf_star_argumentExpressionList_47Context *pnf_star_argumentExpressionList_47();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_3Context* pnf_list_left_3();

  class  Pnf_list_left_4Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    Pnf_star_andExpression_53Context *pnf_star_andExpression_53();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_4Context* pnf_list_left_4();

  class  Pnf_list_left_5Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_4Context *pnf_list_left_4();
    Pnf_star_exclusiveOrExpression_54Context *pnf_star_exclusiveOrExpression_54();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_5Context* pnf_list_left_5();

  class  Pnf_list_left_6Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_5Context *pnf_list_left_5();
    Pnf_star_inclusiveOrExpression_55Context *pnf_star_inclusiveOrExpression_55();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_6Context* pnf_list_left_6();

  class  Pnf_list_left_7Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_7Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_6Context *pnf_list_left_6();
    Pnf_star_logicalAndExpression_56Context *pnf_star_logicalAndExpression_56();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_7Context* pnf_list_left_7();

  class  Pnf_list_left_8Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_8Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    Pnf_star_expression_58Context *pnf_star_expression_58();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_8Context* pnf_list_left_8();

  class  Pnf_list_left_9Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_list_left_9Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitDeclaratorContext *initDeclarator();
    Pnf_star_initDeclaratorList_64Context *pnf_star_initDeclaratorList_64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_list_left_9Context* pnf_list_left_9();

  class  Pnf_option_compilationUnit_98Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_compilationUnit_98Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_plus_translationUnit_32Context *pnf_plus_translationUnit_32();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_compilationUnit_98Context* pnf_option_compilationUnit_98();

  class  Pnf_option_compoundStatement_87Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_compoundStatement_87Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_plus_blockItemList_29Context *pnf_plus_blockItemList_29();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_compoundStatement_87Context* pnf_option_compoundStatement_87();

  class  Pnf_option_conditionalExpression_46Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_conditionalExpression_46Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpression_block_1Context *conditionalExpression_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_conditionalExpression_46Context* pnf_option_conditionalExpression_46();

  class  Pnf_option_conditionalExpression_block_1_34Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_conditionalExpression_block_1_34Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_8Context *pnf_list_left_8();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_conditionalExpression_block_1_34Context* pnf_option_conditionalExpression_block_1_34();

  class  Pnf_option_declaration_14Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_declaration_14Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_9Context *pnf_list_left_9();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_declaration_14Context* pnf_option_declaration_14();

  class  Pnf_option_designator_83Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_designator_83Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Designator_block_1Context *designator_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_designator_83Context* pnf_option_designator_83();

  class  Pnf_option_directAbstractDeclarator_79Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_directAbstractDeclarator_79Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterTypeListContext *parameterTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_directAbstractDeclarator_79Context* pnf_option_directAbstractDeclarator_79();

  class  Pnf_option_enumerator_20Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_enumerator_20Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_enumerator_19Context *pnf_part_enumerator_19();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_enumerator_20Context* pnf_option_enumerator_20();

  class  Pnf_option_externalDeclaration_31Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_externalDeclaration_31Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_externalDeclaration_30Context *pnf_part_externalDeclaration_30();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_externalDeclaration_31Context* pnf_option_externalDeclaration_31();

  class  Pnf_option_functionDefinition_93Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_functionDefinition_93Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifiersContext *declarationSpecifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_functionDefinition_93Context* pnf_option_functionDefinition_93();

  class  Pnf_option_functionDefinition_94Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_functionDefinition_94Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_plus_declarationList_33Context *pnf_plus_declarationList_33();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_functionDefinition_94Context* pnf_option_functionDefinition_94();

  class  Pnf_option_gccAttributeList_22Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_gccAttributeList_22Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GccAttributeContext *gccAttribute();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_gccAttributeList_22Context* pnf_option_gccAttributeList_22();

  class  Pnf_option_gccAttributeSpecifier_15Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_gccAttributeSpecifier_15Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_12Context *pnf_list_left_12();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_gccAttributeSpecifier_15Context* pnf_option_gccAttributeSpecifier_15();

  class  Pnf_option_gccAttribute_73Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_gccAttribute_73Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GccAttribute_block_1Context *gccAttribute_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_gccAttribute_73Context* pnf_option_gccAttribute_73();

  class  Pnf_option_gccAttribute_block_1_36Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_gccAttribute_block_1_36Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_3Context *pnf_list_left_3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_gccAttribute_block_1_36Context* pnf_option_gccAttribute_block_1_36();

  class  Pnf_option_initDeclarator_17Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_initDeclarator_17Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_initDeclarator_16Context *pnf_part_initDeclarator_16();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_initDeclarator_17Context* pnf_option_initDeclarator_17();

  class  Pnf_option_initializerList_block_1_38Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_initializerList_block_1_38Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DesignationContext *designation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_initializerList_block_1_38Context* pnf_option_initializerList_block_1_38();

  class  Pnf_option_initializer_82Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_initializer_82Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_block_1Context *initializer_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_initializer_82Context* pnf_option_initializer_82();

  class  Pnf_option_initializer_block_1_81Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_initializer_block_1_81Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_initializer_block_1_81Context* pnf_option_initializer_block_1_81();

  class  Pnf_option_parameterTypeList_25Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_parameterTypeList_25Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_parameterTypeList_24Context *pnf_part_parameterTypeList_24();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_parameterTypeList_25Context* pnf_option_parameterTypeList_25();

  class  Pnf_option_pnf_part_directDeclarator_21_70Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_pnf_part_directDeclarator_21_70Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_plus_typeQualifierList_23Context *pnf_plus_typeQualifierList_23();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_pnf_part_directDeclarator_21_70Context* pnf_option_pnf_part_directDeclarator_21_70();

  class  Pnf_option_pnf_part_directDeclarator_21_71Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_pnf_part_directDeclarator_21_71Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_pnf_part_directDeclarator_21_71Context* pnf_option_pnf_part_directDeclarator_21_71();

  class  Pnf_option_pnf_part_directDeclarator_21_72Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_pnf_part_directDeclarator_21_72Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_0Context *pnf_list_left_0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_pnf_part_directDeclarator_21_72Context* pnf_option_pnf_part_directDeclarator_21_72();

  class  Pnf_option_pointer_26Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_pointer_26Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerContext *pointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_pointer_26Context* pnf_option_pointer_26();

  class  Pnf_option_postfixExpression_102Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_postfixExpression_102Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_postfixExpression_101Context *pnf_part_postfixExpression_101();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_postfixExpression_102Context* pnf_option_postfixExpression_102();

  class  Pnf_option_postfixExpression_2Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_postfixExpression_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_part_postfixExpression_1Context *pnf_part_postfixExpression_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_postfixExpression_2Context* pnf_option_postfixExpression_2();

  class  Pnf_option_primaryExpression_41Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_primaryExpression_41Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_primaryExpression_41Context* pnf_option_primaryExpression_41();

  class  Pnf_option_selectionStatement_88Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_selectionStatement_88Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectionStatement_block_1Context *selectionStatement_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_selectionStatement_88Context* pnf_option_selectionStatement_88();

  class  Pnf_option_specifierQualifierList_65Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_specifierQualifierList_65Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecifierQualifierListContext *specifierQualifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_specifierQualifierList_65Context* pnf_option_specifierQualifierList_65();

  class  Pnf_option_statement_89Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_statement_89Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_block_1Context *statement_block_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_statement_89Context* pnf_option_statement_89();

  class  Pnf_option_statement_90Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_statement_90Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_statement_90Context* pnf_option_statement_90();

  class  Pnf_option_statement_91Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_statement_91Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_14Context *pnf_list_left_14();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_statement_91Context* pnf_option_statement_91();

  class  Pnf_option_statement_block_6_39Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_statement_block_6_39Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_15Context *pnf_list_left_15();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_statement_block_6_39Context* pnf_option_statement_block_6_39();

  class  Pnf_option_structDeclaration_18Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_structDeclaration_18Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_10Context *pnf_list_left_10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_structDeclaration_18Context* pnf_option_structDeclaration_18();

  class  Pnf_option_structDeclarator_66Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_structDeclarator_66Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_structDeclarator_66Context* pnf_option_structDeclarator_66();

  class  Pnf_option_structOrUnionSpecifier_61Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_structOrUnionSpecifier_61Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GccAttributeSpecifierContext *gccAttributeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_structOrUnionSpecifier_61Context* pnf_option_structOrUnionSpecifier_61();

  class  Pnf_option_structOrUnionSpecifier_62Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_structOrUnionSpecifier_62Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_structOrUnionSpecifier_62Context* pnf_option_structOrUnionSpecifier_62();

  class  Pnf_option_typeName_42Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_typeName_42Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GccDeclaratorExtensionContext *gccDeclaratorExtension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_typeName_42Context* pnf_option_typeName_42();

  class  Pnf_option_typeName_43Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_option_typeName_43Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AbstractDeclaratorContext *abstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_option_typeName_43Context* pnf_option_typeName_43();

  class  Pnf_part_additiveExpression_4Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_additiveExpression_4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_additiveExpression_4Context* pnf_part_additiveExpression_4();

  class  Pnf_part_andExpression_8Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_andExpression_8Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_andExpression_8Context* pnf_part_andExpression_8();

  class  Pnf_part_assignmentExpression_99Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_assignmentExpression_99Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    AssignmentOperatorContext *assignmentOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_assignmentExpression_99Context* pnf_part_assignmentExpression_99();

  class  Pnf_part_castExpression_103Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_castExpression_103Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_primaryExpression_41Context *pnf_option_primaryExpression_41();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_castExpression_103Context* pnf_part_castExpression_103();

  class  Pnf_part_directAbstractDeclarator_27Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_directAbstractDeclarator_27Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_pnf_part_directDeclarator_21_70Context *pnf_option_pnf_part_directDeclarator_21_70();
    Pnf_option_pnf_part_directDeclarator_21_71Context *pnf_option_pnf_part_directDeclarator_21_71();
    AssignmentExpressionContext *assignmentExpression();
    Pnf_plus_typeQualifierList_23Context *pnf_plus_typeQualifierList_23();
    Pnf_option_directAbstractDeclarator_79Context *pnf_option_directAbstractDeclarator_79();
    Pnf_star_declarator_63Context *pnf_star_declarator_63();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_directAbstractDeclarator_27Context* pnf_part_directAbstractDeclarator_27();

  class  Pnf_part_directDeclarator_21Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_directDeclarator_21Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_pnf_part_directDeclarator_21_70Context *pnf_option_pnf_part_directDeclarator_21_70();
    Pnf_option_pnf_part_directDeclarator_21_71Context *pnf_option_pnf_part_directDeclarator_21_71();
    AssignmentExpressionContext *assignmentExpression();
    Pnf_plus_typeQualifierList_23Context *pnf_plus_typeQualifierList_23();
    ParameterTypeListContext *parameterTypeList();
    Pnf_option_pnf_part_directDeclarator_21_72Context *pnf_option_pnf_part_directDeclarator_21_72();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_directDeclarator_21Context* pnf_part_directDeclarator_21();

  class  Pnf_part_enumerator_19Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_enumerator_19Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_enumerator_19Context* pnf_part_enumerator_19();

  class  Pnf_part_equalityExpression_7Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_equalityExpression_7Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_equalityExpression_7Context* pnf_part_equalityExpression_7();

  class  Pnf_part_exclusiveOrExpression_9Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_exclusiveOrExpression_9Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_4Context *pnf_list_left_4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_exclusiveOrExpression_9Context* pnf_part_exclusiveOrExpression_9();

  class  Pnf_part_expression_13Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_expression_13Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_expression_13Context* pnf_part_expression_13();

  class  Pnf_part_externalDeclaration_30Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_externalDeclaration_30Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsmNameContext *asmName();
    Pnf_plus_primaryExpression_40Context *pnf_plus_primaryExpression_40();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_externalDeclaration_30Context* pnf_part_externalDeclaration_30();

  class  Pnf_part_inclusiveOrExpression_10Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_inclusiveOrExpression_10Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_5Context *pnf_list_left_5();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_inclusiveOrExpression_10Context* pnf_part_inclusiveOrExpression_10();

  class  Pnf_part_initDeclarator_16Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_initDeclarator_16Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_initDeclarator_16Context* pnf_part_initDeclarator_16();

  class  Pnf_part_logicalAndExpression_11Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_logicalAndExpression_11Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_6Context *pnf_list_left_6();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_logicalAndExpression_11Context* pnf_part_logicalAndExpression_11();

  class  Pnf_part_logicalOrExpression_12Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_logicalOrExpression_12Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_7Context *pnf_list_left_7();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_logicalOrExpression_12Context* pnf_part_logicalOrExpression_12();

  class  Pnf_part_multiplicativeExpression_3Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_multiplicativeExpression_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastExpressionContext *castExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_multiplicativeExpression_3Context* pnf_part_multiplicativeExpression_3();

  class  Pnf_part_parameterTypeList_24Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_parameterTypeList_24Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_parameterTypeList_24Context* pnf_part_parameterTypeList_24();

  class  Pnf_part_postfixExpression_0Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_postfixExpression_0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_8Context *pnf_list_left_8();
    Pnf_option_gccAttribute_block_1_36Context *pnf_option_gccAttribute_block_1_36();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_postfixExpression_0Context* pnf_part_postfixExpression_0();

  class  Pnf_part_postfixExpression_1Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_postfixExpression_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_postfixExpression_1Context* pnf_part_postfixExpression_1();

  class  Pnf_part_postfixExpression_101Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_postfixExpression_101Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_postfixExpression_101Context* pnf_part_postfixExpression_101();

  class  Pnf_part_relationalExpression_6Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_relationalExpression_6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftExpressionContext *shiftExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_relationalExpression_6Context* pnf_part_relationalExpression_6();

  class  Pnf_part_shiftExpression_5Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_shiftExpression_5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_shiftExpression_5Context* pnf_part_shiftExpression_5();

  class  Pnf_part_statement_100Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_statement_100Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ConditionalExpressionContext *conditionalExpression();
    Pnf_list_left_8Context *pnf_list_left_8();
    std::vector<Pnf_option_conditionalExpression_block_1_34Context *> pnf_option_conditionalExpression_block_1_34();
    Pnf_option_conditionalExpression_block_1_34Context* pnf_option_conditionalExpression_block_1_34(size_t i);
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_statement_100Context* pnf_part_statement_100();

  class  Pnf_part_unaryExpression_104Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_part_unaryExpression_104Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryOperatorContext *unaryOperator();
    Pnf_star_castExpression_107Context *pnf_star_castExpression_107();
    UnaryExpression_block_2Context *unaryExpression_block_2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_part_unaryExpression_104Context* pnf_part_unaryExpression_104();

  class  Pnf_plus_blockItemList_29Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_blockItemList_29Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockItemContext *> blockItem();
    BlockItemContext* blockItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_blockItemList_29Context* pnf_plus_blockItemList_29();

  class  Pnf_plus_declarationList_33Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_declarationList_33Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_declarationList_33Context* pnf_plus_declarationList_33();

  class  Pnf_plus_declarationSpecifiers2_76Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_declarationSpecifiers2_76Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationSpecifierContext *> declarationSpecifier();
    DeclarationSpecifierContext* declarationSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_declarationSpecifiers2_76Context* pnf_plus_declarationSpecifiers2_76();

  class  Pnf_plus_designatorList_28Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_designatorList_28Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DesignatorContext *> designator();
    DesignatorContext* designator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_designatorList_28Context* pnf_plus_designatorList_28();

  class  Pnf_plus_primaryExpression_40Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_primaryExpression_40Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_primaryExpression_40Context* pnf_plus_primaryExpression_40();

  class  Pnf_plus_translationUnit_32Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_translationUnit_32Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExternalDeclarationContext *> externalDeclaration();
    ExternalDeclarationContext* externalDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_translationUnit_32Context* pnf_plus_translationUnit_32();

  class  Pnf_plus_typeQualifierList_23Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_plus_typeQualifierList_23Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_plus_typeQualifierList_23Context* pnf_plus_typeQualifierList_23();

  class  Pnf_star_additiveExpression_49Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_additiveExpression_49Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_additiveExpression_4Context *> pnf_part_additiveExpression_4();
    Pnf_part_additiveExpression_4Context* pnf_part_additiveExpression_4(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_additiveExpression_49Context* pnf_star_additiveExpression_49();

  class  Pnf_star_andExpression_53Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_andExpression_53Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_andExpression_8Context *> pnf_part_andExpression_8();
    Pnf_part_andExpression_8Context* pnf_part_andExpression_8(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_andExpression_53Context* pnf_star_andExpression_53();

  class  Pnf_star_argumentExpressionList_47Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_argumentExpressionList_47Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentExpressionList_block_1Context *> argumentExpressionList_block_1();
    ArgumentExpressionList_block_1Context* argumentExpressionList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_argumentExpressionList_47Context* pnf_star_argumentExpressionList_47();

  class  Pnf_star_assignmentExpression_105Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_assignmentExpression_105Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_assignmentExpression_99Context *> pnf_part_assignmentExpression_99();
    Pnf_part_assignmentExpression_99Context* pnf_part_assignmentExpression_99(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_assignmentExpression_105Context* pnf_star_assignmentExpression_105();

  class  Pnf_star_castExpression_107Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_castExpression_107Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_castExpression_103Context *> pnf_part_castExpression_103();
    Pnf_part_castExpression_103Context* pnf_part_castExpression_103(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_castExpression_107Context* pnf_star_castExpression_107();

  class  Pnf_star_declarationSpecifiers_59Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_declarationSpecifiers_59Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationSpecifierContext *> declarationSpecifier();
    DeclarationSpecifierContext* declarationSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_declarationSpecifiers_59Context* pnf_star_declarationSpecifiers_59();

  class  Pnf_star_declarationSpecifiers_60Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_declarationSpecifiers_60Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerContext *> pointer();
    PointerContext* pointer(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_declarationSpecifiers_60Context* pnf_star_declarationSpecifiers_60();

  class  Pnf_star_declarator_63Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_declarator_63Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GccDeclaratorExtensionContext *> gccDeclaratorExtension();
    GccDeclaratorExtensionContext* gccDeclaratorExtension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_declarator_63Context* pnf_star_declarator_63();

  class  Pnf_star_directAbstractDeclarator_78Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_directAbstractDeclarator_78Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_directAbstractDeclarator_27Context *> pnf_part_directAbstractDeclarator_27();
    Pnf_part_directAbstractDeclarator_27Context* pnf_part_directAbstractDeclarator_27(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_directAbstractDeclarator_78Context* pnf_star_directAbstractDeclarator_78();

  class  Pnf_star_directDeclarator_69Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_directDeclarator_69Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_directDeclarator_21Context *> pnf_part_directDeclarator_21();
    Pnf_part_directDeclarator_21Context* pnf_part_directDeclarator_21(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_directDeclarator_69Context* pnf_star_directDeclarator_69();

  class  Pnf_star_enumeratorList_68Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_enumeratorList_68Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorList_block_1Context *> enumeratorList_block_1();
    EnumeratorList_block_1Context* enumeratorList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_enumeratorList_68Context* pnf_star_enumeratorList_68();

  class  Pnf_star_equalityExpression_52Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_equalityExpression_52Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_equalityExpression_7Context *> pnf_part_equalityExpression_7();
    Pnf_part_equalityExpression_7Context* pnf_part_equalityExpression_7(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_equalityExpression_52Context* pnf_star_equalityExpression_52();

  class  Pnf_star_exclusiveOrExpression_54Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_exclusiveOrExpression_54Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_exclusiveOrExpression_9Context *> pnf_part_exclusiveOrExpression_9();
    Pnf_part_exclusiveOrExpression_9Context* pnf_part_exclusiveOrExpression_9(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_exclusiveOrExpression_54Context* pnf_star_exclusiveOrExpression_54();

  class  Pnf_star_expression_58Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_expression_58Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_expression_13Context *> pnf_part_expression_13();
    Pnf_part_expression_13Context* pnf_part_expression_13(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_expression_58Context* pnf_star_expression_58();

  class  Pnf_star_gccAttributeList_74Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_gccAttributeList_74Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GccAttributeList_block_1Context *> gccAttributeList_block_1();
    GccAttributeList_block_1Context* gccAttributeList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_gccAttributeList_74Context* pnf_star_gccAttributeList_74();

  class  Pnf_star_genericAssocList_44Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_genericAssocList_44Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GenericAssocList_block_1Context *> genericAssocList_block_1();
    GenericAssocList_block_1Context* genericAssocList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_genericAssocList_44Context* pnf_star_genericAssocList_44();

  class  Pnf_star_identifierList_37Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_identifierList_37Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierList_block_1Context *> identifierList_block_1();
    IdentifierList_block_1Context* identifierList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_identifierList_37Context* pnf_star_identifierList_37();

  class  Pnf_star_inclusiveOrExpression_55Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_inclusiveOrExpression_55Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_inclusiveOrExpression_10Context *> pnf_part_inclusiveOrExpression_10();
    Pnf_part_inclusiveOrExpression_10Context* pnf_part_inclusiveOrExpression_10(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_inclusiveOrExpression_55Context* pnf_star_inclusiveOrExpression_55();

  class  Pnf_star_initDeclaratorList_64Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_initDeclaratorList_64Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorList_block_1Context *> initDeclaratorList_block_1();
    InitDeclaratorList_block_1Context* initDeclaratorList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_initDeclaratorList_64Context* pnf_star_initDeclaratorList_64();

  class  Pnf_star_initializerList_80Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_initializerList_80Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerList_block_1Context *> initializerList_block_1();
    InitializerList_block_1Context* initializerList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_initializerList_80Context* pnf_star_initializerList_80();

  class  Pnf_star_logicalAndExpression_56Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_logicalAndExpression_56Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_logicalAndExpression_11Context *> pnf_part_logicalAndExpression_11();
    Pnf_part_logicalAndExpression_11Context* pnf_part_logicalAndExpression_11(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_logicalAndExpression_56Context* pnf_star_logicalAndExpression_56();

  class  Pnf_star_logicalOrExpression_57Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_logicalOrExpression_57Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_logicalOrExpression_12Context *> pnf_part_logicalOrExpression_12();
    Pnf_part_logicalOrExpression_12Context* pnf_part_logicalOrExpression_12(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_logicalOrExpression_57Context* pnf_star_logicalOrExpression_57();

  class  Pnf_star_multiplicativeExpression_48Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_multiplicativeExpression_48Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_multiplicativeExpression_3Context *> pnf_part_multiplicativeExpression_3();
    Pnf_part_multiplicativeExpression_3Context* pnf_part_multiplicativeExpression_3(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_multiplicativeExpression_48Context* pnf_star_multiplicativeExpression_48();

  class  Pnf_star_parameterList_77Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_parameterList_77Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterList_block_1Context *> parameterList_block_1();
    ParameterList_block_1Context* parameterList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_parameterList_77Context* pnf_star_parameterList_77();

  class  Pnf_star_postfixExpression_45Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_postfixExpression_45Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_postfixExpression_0Context *> pnf_part_postfixExpression_0();
    Pnf_part_postfixExpression_0Context* pnf_part_postfixExpression_0(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_postfixExpression_45Context* pnf_star_postfixExpression_45();

  class  Pnf_star_relationalExpression_51Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_relationalExpression_51Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_relationalExpression_6Context *> pnf_part_relationalExpression_6();
    Pnf_part_relationalExpression_6Context* pnf_part_relationalExpression_6(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_relationalExpression_51Context* pnf_star_relationalExpression_51();

  class  Pnf_star_shiftExpression_50Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_shiftExpression_50Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_shiftExpression_5Context *> pnf_part_shiftExpression_5();
    Pnf_part_shiftExpression_5Context* pnf_part_shiftExpression_5(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_shiftExpression_50Context* pnf_star_shiftExpression_50();

  class  Pnf_star_statement_106Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_statement_106Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_statement_100Context *> pnf_part_statement_100();
    Pnf_part_statement_100Context* pnf_part_statement_100(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_statement_106Context* pnf_star_statement_106();

  class  Pnf_star_statement_92Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_statement_92Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_block_6Context *> statement_block_6();
    Statement_block_6Context* statement_block_6(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_statement_92Context* pnf_star_statement_92();

  class  Pnf_star_statement_block_3_85Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_statement_block_3_85Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_block_2Context *> statement_block_2();
    Statement_block_2Context* statement_block_2(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_statement_block_3_85Context* pnf_star_statement_block_3_85();

  class  Pnf_star_statement_block_5_86Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_statement_block_5_86Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_block_4Context *> statement_block_4();
    Statement_block_4Context* statement_block_4(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_statement_block_5_86Context* pnf_star_statement_block_5_86();

  class  Pnf_star_structDeclarationList_35Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_structDeclarationList_35Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructDeclarationContext *> structDeclaration();
    StructDeclarationContext* structDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_structDeclarationList_35Context* pnf_star_structDeclarationList_35();

  class  Pnf_star_structDeclaratorList_67Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_structDeclaratorList_67Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructDeclaratorList_block_1Context *> structDeclaratorList_block_1();
    StructDeclaratorList_block_1Context* structDeclaratorList_block_1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_structDeclaratorList_67Context* pnf_star_structDeclaratorList_67();

  class  Pnf_star_unaryExpression_108Context : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_star_unaryExpression_108Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pnf_part_unaryExpression_104Context *> pnf_part_unaryExpression_104();
    Pnf_part_unaryExpression_104Context* pnf_part_unaryExpression_104(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_star_unaryExpression_108Context* pnf_star_unaryExpression_108();

  class  Pnf_startContext : public antlr4::RuleContextWithAltNum {
  public:
    Pnf_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompilationUnitContext *compilationUnit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pnf_startContext* pnf_start();

  class  PointerContext : public antlr4::RuleContextWithAltNum {
  public:
    PointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_pnf_part_directDeclarator_21_70Context *pnf_option_pnf_part_directDeclarator_21_70();
    Pnf_option_pointer_26Context *pnf_option_pointer_26();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerContext* pointer();

  class  PostfixExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    Pnf_star_postfixExpression_45Context *pnf_star_postfixExpression_45();
    Pnf_option_postfixExpression_102Context *pnf_option_postfixExpression_102();
    TypeNameContext *typeName();
    InitializerListContext *initializerList();
    Pnf_option_postfixExpression_2Context *pnf_option_postfixExpression_2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();

  class  PrimaryExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Constant();
    Pnf_plus_primaryExpression_40Context *pnf_plus_primaryExpression_40();
    Pnf_list_left_8Context *pnf_list_left_8();
    GenericSelectionContext *genericSelection();
    Pnf_option_primaryExpression_41Context *pnf_option_primaryExpression_41();
    CompoundStatementContext *compoundStatement();
    UnaryExpressionContext *unaryExpression();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  RelationalExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftExpressionContext *shiftExpression();
    Pnf_star_relationalExpression_51Context *pnf_star_relationalExpression_51();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  SelectionStatement_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    SelectionStatement_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatement_block_1Context* selectionStatement_block_1();

  class  ShiftExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    Pnf_star_shiftExpression_50Context *pnf_star_shiftExpression_50();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  SpecifierQualifierListContext : public antlr4::RuleContextWithAltNum {
  public:
    SpecifierQualifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    Pnf_option_specifierQualifierList_65Context *pnf_option_specifierQualifierList_65();
    TypeQualifierContext *typeQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecifierQualifierListContext* specifierQualifierList();

  class  StatementContext : public antlr4::RuleContextWithAltNum {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_star_statement_106Context *pnf_star_statement_106();
    CompoundStatementContext *compoundStatement();
    ExpressionStatementContext *expressionStatement();
    Pnf_list_left_8Context *pnf_list_left_8();
    StatementContext *statement();
    Pnf_option_selectionStatement_88Context *pnf_option_selectionStatement_88();
    JumpStatementContext *jumpStatement();
    AsmNameContext *asmName();
    Pnf_option_statement_89Context *pnf_option_statement_89();
    Pnf_option_statement_90Context *pnf_option_statement_90();
    Pnf_option_statement_91Context *pnf_option_statement_91();
    Pnf_star_statement_92Context *pnf_star_statement_92();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Statement_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    Statement_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_block_1Context* statement_block_1();

  class  Statement_block_2Context : public antlr4::RuleContextWithAltNum {
  public:
    Statement_block_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_1Context *pnf_list_left_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_block_2Context* statement_block_2();

  class  Statement_block_4Context : public antlr4::RuleContextWithAltNum {
  public:
    Statement_block_4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_list_left_1Context *pnf_list_left_1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_block_4Context* statement_block_4();

  class  Statement_block_6Context : public antlr4::RuleContextWithAltNum {
  public:
    Statement_block_6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_statement_block_6_39Context *pnf_option_statement_block_6_39();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_block_6Context* statement_block_6();

  class  StaticAssertDeclarationContext : public antlr4::RuleContextWithAltNum {
  public:
    StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    Pnf_plus_primaryExpression_40Context *pnf_plus_primaryExpression_40();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticAssertDeclarationContext* staticAssertDeclaration();

  class  StorageClassSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageClassSpecifierContext* storageClassSpecifier();

  class  StructDeclarationContext : public antlr4::RuleContextWithAltNum {
  public:
    StructDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_typeName_42Context *pnf_option_typeName_42();
    SpecifierQualifierListContext *specifierQualifierList();
    Pnf_option_structDeclaration_18Context *pnf_option_structDeclaration_18();
    StaticAssertDeclarationContext *staticAssertDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclarationContext* structDeclaration();

  class  StructDeclaratorContext : public antlr4::RuleContextWithAltNum {
  public:
    StructDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    Pnf_option_structDeclarator_66Context *pnf_option_structDeclarator_66();
    ConditionalExpressionContext *conditionalExpression();
    Pnf_option_structOrUnionSpecifier_61Context *pnf_option_structOrUnionSpecifier_61();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclaratorContext* structDeclarator();

  class  StructDeclaratorList_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    StructDeclaratorList_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDeclaratorContext *structDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclaratorList_block_1Context* structDeclaratorList_block_1();

  class  StructOrUnionContext : public antlr4::RuleContextWithAltNum {
  public:
    StructOrUnionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructOrUnionContext* structOrUnion();

  class  StructOrUnionSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    StructOrUnionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructOrUnionContext *structOrUnion();
    Pnf_option_structOrUnionSpecifier_61Context *pnf_option_structOrUnionSpecifier_61();
    Pnf_option_structOrUnionSpecifier_62Context *pnf_option_structOrUnionSpecifier_62();
    Pnf_star_structDeclarationList_35Context *pnf_star_structDeclarationList_35();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructOrUnionSpecifierContext* structOrUnionSpecifier();

  class  TypeNameContext : public antlr4::RuleContextWithAltNum {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_option_typeName_42Context *pnf_option_typeName_42();
    SpecifierQualifierListContext *specifierQualifierList();
    Pnf_option_typeName_43Context *pnf_option_typeName_43();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  TypeQualifierContext : public antlr4::RuleContextWithAltNum {
  public:
    TypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQualifierContext* typeQualifier();

  class  TypeSpecifierContext : public antlr4::RuleContextWithAltNum {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifier_block_1Context *typeSpecifier_block_1();
    TypeSpecifier_block_2Context *typeSpecifier_block_2();
    AtomicTypeSpecifierContext *atomicTypeSpecifier();
    StructOrUnionSpecifierContext *structOrUnionSpecifier();
    EnumSpecifierContext *enumSpecifier();
    TypedefNameContext *typedefName();
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TypeSpecifier_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    TypeSpecifier_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Imaginary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifier_block_1Context* typeSpecifier_block_1();

  class  TypeSpecifier_block_2Context : public antlr4::RuleContextWithAltNum {
  public:
    TypeSpecifier_block_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifier_block_2Context* typeSpecifier_block_2();

  class  TypedefNameContext : public antlr4::RuleContextWithAltNum {
  public:
    TypedefNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefNameContext* typedefName();

  class  UnaryExpressionContext : public antlr4::RuleContextWithAltNum {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pnf_star_unaryExpression_108Context *pnf_star_unaryExpression_108();
    PostfixExpressionContext *postfixExpression();
    UnaryOperatorContext *unaryOperator();
    Pnf_star_castExpression_107Context *pnf_star_castExpression_107();
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    InitializerContext *initializer();
    UnaryExpression_block_1Context *unaryExpression_block_1();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryExpression_block_1Context : public antlr4::RuleContextWithAltNum {
  public:
    UnaryExpression_block_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_block_1Context* unaryExpression_block_1();

  class  UnaryExpression_block_2Context : public antlr4::RuleContextWithAltNum {
  public:
    UnaryExpression_block_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RealPart();
    antlr4::tree::TerminalNode *ImaginaryPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpression_block_2Context* unaryExpression_block_2();

  class  UnaryOperatorContext : public antlr4::RuleContextWithAltNum {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlr_CPNF
