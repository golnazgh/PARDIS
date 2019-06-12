
// Generated from C.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "CPNFParser.h"


namespace antlr_CPNF {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by CParser.
 */
class  CVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CParser.
   */
    virtual antlrcpp::Any visitAbstractDeclarator(CParser::AbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractDeclarator_suffix_2(CParser::AbstractDeclarator_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(CParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentSpecifier(CParser::AlignmentSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(CParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList(CParser::ArgumentExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList_block_1(CParser::ArgumentExpressionList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList_suffix_2(CParser::ArgumentExpressionList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitAsmName(CParser::AsmNameContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(CParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(CParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAtomicTypeSpecifier(CParser::AtomicTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(CParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(CParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression_suffix_1(CParser::CastExpression_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitCompilationUnit(CParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(CParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(CParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression_suffix_1(CParser::ConditionalExpression_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifier(CParser::DeclarationSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifier_suffix_1(CParser::DeclarationSpecifier_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers(CParser::DeclarationSpecifiersContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers2_suffix_1(CParser::DeclarationSpecifiers2_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers_suffix_1(CParser::DeclarationSpecifiers_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers_suffix_2(CParser::DeclarationSpecifiers_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers_suffix_3(CParser::DeclarationSpecifiers_suffix_3Context *context) = 0;

    virtual antlrcpp::Any visitDeclarator(CParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator_suffix_2(CParser::Declarator_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitDesignation(CParser::DesignationContext *context) = 0;

    virtual antlrcpp::Any visitDesignator(CParser::DesignatorContext *context) = 0;

    virtual antlrcpp::Any visitDesignator_block_1(CParser::Designator_block_1Context *context) = 0;

    virtual antlrcpp::Any visitDirectAbstractDeclarator(CParser::DirectAbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDirectAbstractDeclarator_suffix_1(CParser::DirectAbstractDeclarator_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitDirectAbstractDeclarator_suffix_11(CParser::DirectAbstractDeclarator_suffix_11Context *context) = 0;

    virtual antlrcpp::Any visitDirectAbstractDeclarator_suffix_6(CParser::DirectAbstractDeclarator_suffix_6Context *context) = 0;

    virtual antlrcpp::Any visitDirectDeclarator(CParser::DirectDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier(CParser::EnumSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier_suffix_1(CParser::EnumSpecifier_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier_suffix_2(CParser::EnumSpecifier_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitEnumerationConstant(CParser::EnumerationConstantContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(CParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList(CParser::EnumeratorListContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList_block_1(CParser::EnumeratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList_suffix_2(CParser::EnumeratorList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(CParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(CParser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(CParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitExternalDeclaration(CParser::ExternalDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitExternalDeclaration_suffix_1(CParser::ExternalDeclaration_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(CParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSpecifier(CParser::FunctionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSpecifier_block_1(CParser::FunctionSpecifier_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGccAttribute(CParser::GccAttributeContext *context) = 0;

    virtual antlrcpp::Any visitGccAttributeList(CParser::GccAttributeListContext *context) = 0;

    virtual antlrcpp::Any visitGccAttributeList_block_1(CParser::GccAttributeList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGccAttributeList_suffix_2(CParser::GccAttributeList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitGccAttributeSpecifier(CParser::GccAttributeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitGccAttribute_block_2(CParser::GccAttribute_block_2Context *context) = 0;

    virtual antlrcpp::Any visitGccDeclaratorExtension(CParser::GccDeclaratorExtensionContext *context) = 0;

    virtual antlrcpp::Any visitGenericAssocList(CParser::GenericAssocListContext *context) = 0;

    virtual antlrcpp::Any visitGenericAssocList_block_1(CParser::GenericAssocList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitGenericAssocList_suffix_2(CParser::GenericAssocList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitGenericAssociation(CParser::GenericAssociationContext *context) = 0;

    virtual antlrcpp::Any visitGenericSelection(CParser::GenericSelectionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(CParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList_block_1(CParser::IdentifierList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitIdentifierList_suffix_2(CParser::IdentifierList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(CParser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclarator(CParser::InitDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList(CParser::InitDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList_block_1(CParser::InitDeclaratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList_suffix_2(CParser::InitDeclaratorList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitInitializer(CParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(CParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList_block_3(CParser::InitializerList_block_3Context *context) = 0;

    virtual antlrcpp::Any visitInitializerList_suffix_4(CParser::InitializerList_suffix_4Context *context) = 0;

    virtual antlrcpp::Any visitInitializer_block_2(CParser::Initializer_block_2Context *context) = 0;

    virtual antlrcpp::Any visitInitializer_suffix_1(CParser::Initializer_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(CParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(CParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(CParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(CParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(CParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(CParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameterList_block_1(CParser::ParameterList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitParameterList_suffix_2(CParser::ParameterList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitParameterTypeList(CParser::ParameterTypeListContext *context) = 0;

    virtual antlrcpp::Any visitPnf_nonrecursive_castExpression_2(CParser::Pnf_nonrecursive_castExpression_2Context *context) = 0;

    virtual antlrcpp::Any visitPnf_nonrecursive_statement_2(CParser::Pnf_nonrecursive_statement_2Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_abstractDeclarator_133(CParser::Pnf_option_abstractDeclarator_133Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_abstractDeclarator_suffix_2_135(CParser::Pnf_option_abstractDeclarator_suffix_2_135Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_argumentExpressionList_42(CParser::Pnf_option_argumentExpressionList_42Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_castExpression_28(CParser::Pnf_option_castExpression_28Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_compilationUnit_187(CParser::Pnf_option_compilationUnit_187Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_compoundStatement_161(CParser::Pnf_option_compoundStatement_161Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_conditionalExpression_207(CParser::Pnf_option_conditionalExpression_207Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_conditionalExpression_40(CParser::Pnf_option_conditionalExpression_40Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_conditionalExpression_block_3_45(CParser::Pnf_option_conditionalExpression_block_3_45Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifier_47(CParser::Pnf_option_declarationSpecifier_47Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers2_suffix_1_65(CParser::Pnf_option_declarationSpecifiers2_suffix_1_65Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers_220(CParser::Pnf_option_declarationSpecifiers_220Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers_221(CParser::Pnf_option_declarationSpecifiers_221Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers_suffix_1_49(CParser::Pnf_option_declarationSpecifiers_suffix_1_49Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers_suffix_2_61(CParser::Pnf_option_declarationSpecifiers_suffix_2_61Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarationSpecifiers_suffix_3_63(CParser::Pnf_option_declarationSpecifiers_suffix_3_63Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declaration_51(CParser::Pnf_option_declaration_51Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarator_80(CParser::Pnf_option_declarator_80Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_declarator_suffix_2_96(CParser::Pnf_option_declarator_suffix_2_96Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_designator_139(CParser::Pnf_option_designator_139Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_116(CParser::Pnf_option_directAbstractDeclarator_116Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_117(CParser::Pnf_option_directAbstractDeclarator_117Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_119(CParser::Pnf_option_directAbstractDeclarator_119Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_121(CParser::Pnf_option_directAbstractDeclarator_121Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_123(CParser::Pnf_option_directAbstractDeclarator_123Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_directAbstractDeclarator_suffix_1_137(CParser::Pnf_option_directAbstractDeclarator_suffix_1_137Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumSpecifier_13(CParser::Pnf_option_enumSpecifier_13Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumSpecifier_15(CParser::Pnf_option_enumSpecifier_15Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumeratorList_suffix_2_92(CParser::Pnf_option_enumeratorList_suffix_2_92Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumerator_93(CParser::Pnf_option_enumerator_93Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_enumerator_94(CParser::Pnf_option_enumerator_94Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_expressionStatement_163(CParser::Pnf_option_expressionStatement_163Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_externalDeclaration_182(CParser::Pnf_option_externalDeclaration_182Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_externalDeclaration_183(CParser::Pnf_option_externalDeclaration_183Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_functionDefinition_179(CParser::Pnf_option_functionDefinition_179Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_functionDefinition_236(CParser::Pnf_option_functionDefinition_236Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttributeList_block_1_102(CParser::Pnf_option_gccAttributeList_block_1_102Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttributeList_suffix_2_104(CParser::Pnf_option_gccAttributeList_suffix_2_104Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttributeSpecifier_7(CParser::Pnf_option_gccAttributeSpecifier_7Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttribute_106(CParser::Pnf_option_gccAttribute_106Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_gccAttribute_block_2_108(CParser::Pnf_option_gccAttribute_block_2_108Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_genericAssocList_suffix_2_5(CParser::Pnf_option_genericAssocList_suffix_2_5Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_identifierList_100(CParser::Pnf_option_identifierList_100Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initDeclaratorList_suffix_2_67(CParser::Pnf_option_initDeclaratorList_suffix_2_67Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initDeclarator_81(CParser::Pnf_option_initDeclarator_81Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initDeclarator_82(CParser::Pnf_option_initDeclarator_82Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializerList_145(CParser::Pnf_option_initializerList_145Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializerList_block_3_149(CParser::Pnf_option_initializerList_block_3_149Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializerList_suffix_4_151(CParser::Pnf_option_initializerList_suffix_4_151Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializer_143(CParser::Pnf_option_initializer_143Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_initializer_block_2_147(CParser::Pnf_option_initializer_block_2_147Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_iterationStatement_167(CParser::Pnf_option_iterationStatement_167Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_iterationStatement_169(CParser::Pnf_option_iterationStatement_169Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_iterationStatement_229(CParser::Pnf_option_iterationStatement_229Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_iterationStatement_231(CParser::Pnf_option_iterationStatement_231Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_jumpStatement_171(CParser::Pnf_option_jumpStatement_171Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_parameterDeclaration_110(CParser::Pnf_option_parameterDeclaration_110Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_parameterList_112(CParser::Pnf_option_parameterList_112Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_parameterTypeList_113(CParser::Pnf_option_parameterTypeList_113Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_parameterTypeList_114(CParser::Pnf_option_parameterTypeList_114Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_nonrecursive_directAbstractDeclarator_1_125(CParser::Pnf_option_pnf_nonrecursive_directAbstractDeclarator_1_125Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_nonrecursive_directAbstractDeclarator_1_126(CParser::Pnf_option_pnf_nonrecursive_directAbstractDeclarator_1_126Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_nonrecursive_directAbstractDeclarator_1_127(CParser::Pnf_option_pnf_nonrecursive_directAbstractDeclarator_1_127Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_nonrecursive_directAbstractDeclarator_1_129(CParser::Pnf_option_pnf_nonrecursive_directAbstractDeclarator_1_129Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pnf_nonrecursive_directAbstractDeclarator_1_131(CParser::Pnf_option_pnf_nonrecursive_directAbstractDeclarator_1_131Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pointer_53(CParser::Pnf_option_pointer_53Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pointer_55(CParser::Pnf_option_pointer_55Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pointer_57(CParser::Pnf_option_pointer_57Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_pointer_59(CParser::Pnf_option_pointer_59Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_214(CParser::Pnf_option_postfixExpression_214Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_215(CParser::Pnf_option_postfixExpression_215Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_23(CParser::Pnf_option_postfixExpression_23Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_postfixExpression_24(CParser::Pnf_option_postfixExpression_24Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_primaryExpression_3(CParser::Pnf_option_primaryExpression_3Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_primaryExpression_suffix_1_1(CParser::Pnf_option_primaryExpression_suffix_1_1Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_selectionStatement_165(CParser::Pnf_option_selectionStatement_165Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_specifierQualifierList_17(CParser::Pnf_option_specifierQualifierList_17Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_specifierQualifierList_19(CParser::Pnf_option_specifierQualifierList_19Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_172(CParser::Pnf_option_statement_172Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_173(CParser::Pnf_option_statement_173Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_174(CParser::Pnf_option_statement_174Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_175(CParser::Pnf_option_statement_175Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_177(CParser::Pnf_option_statement_177Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_block_12_157(CParser::Pnf_option_statement_block_12_157Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_suffix_13_159(CParser::Pnf_option_statement_suffix_13_159Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_suffix_5_153(CParser::Pnf_option_statement_suffix_5_153Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_statement_suffix_9_155(CParser::Pnf_option_statement_suffix_9_155Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclarationList_suffix_1_86(CParser::Pnf_option_structDeclarationList_suffix_1_86Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclaration_84(CParser::Pnf_option_structDeclaration_84Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclaratorList_suffix_2_88(CParser::Pnf_option_structDeclaratorList_suffix_2_88Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclarator_224(CParser::Pnf_option_structDeclarator_224Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structDeclarator_90(CParser::Pnf_option_structDeclarator_90Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structOrUnionSpecifier_11(CParser::Pnf_option_structOrUnionSpecifier_11Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structOrUnionSpecifier_8(CParser::Pnf_option_structOrUnionSpecifier_8Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_structOrUnionSpecifier_9(CParser::Pnf_option_structOrUnionSpecifier_9Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_typeName_21(CParser::Pnf_option_typeName_21Context *context) = 0;

    virtual antlrcpp::Any visitPnf_option_typeName_213(CParser::Pnf_option_typeName_213Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_blockItemList_181(CParser::Pnf_plus_blockItemList_181Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_conditionalExpression_suffix_4_209(CParser::Pnf_plus_conditionalExpression_suffix_4_209Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_declarationList_189(CParser::Pnf_plus_declarationList_189Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_designatorList_141(CParser::Pnf_plus_designatorList_141Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_gccDeclaratorExtension_suffix_1_205(CParser::Pnf_plus_gccDeclaratorExtension_suffix_1_205Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_selectionStatement_234(CParser::Pnf_plus_selectionStatement_234Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_translationUnit_185(CParser::Pnf_plus_translationUnit_185Context *context) = 0;

    virtual antlrcpp::Any visitPnf_plus_typeQualifierList_98(CParser::Pnf_plus_typeQualifierList_98Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_additiveExpression_192(CParser::Pnf_separate_additiveExpression_192Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_andExpression_196(CParser::Pnf_separate_andExpression_196Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_assignmentExpression_238(CParser::Pnf_separate_assignmentExpression_238Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_castExpression_240(CParser::Pnf_separate_castExpression_240Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_directAbstractDeclarator_203(CParser::Pnf_separate_directAbstractDeclarator_203Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_directDeclarator_202(CParser::Pnf_separate_directDeclarator_202Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_equalityExpression_195(CParser::Pnf_separate_equalityExpression_195Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_exclusiveOrExpression_197(CParser::Pnf_separate_exclusiveOrExpression_197Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_expression_201(CParser::Pnf_separate_expression_201Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_inclusiveOrExpression_198(CParser::Pnf_separate_inclusiveOrExpression_198Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_logicalAndExpression_199(CParser::Pnf_separate_logicalAndExpression_199Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_logicalOrExpression_200(CParser::Pnf_separate_logicalOrExpression_200Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_multiplicativeExpression_191(CParser::Pnf_separate_multiplicativeExpression_191Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_pointer_239(CParser::Pnf_separate_pointer_239Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_postfixExpression_190(CParser::Pnf_separate_postfixExpression_190Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_relationalExpression_194(CParser::Pnf_separate_relationalExpression_194Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_selectionStatement_243(CParser::Pnf_separate_selectionStatement_243Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_shiftExpression_193(CParser::Pnf_separate_shiftExpression_193Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_statement_242(CParser::Pnf_separate_statement_242Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_staticAssertDeclaration_suffix_1_237(CParser::Pnf_separate_staticAssertDeclaration_suffix_1_237Context *context) = 0;

    virtual antlrcpp::Any visitPnf_separate_unaryExpression_241(CParser::Pnf_separate_unaryExpression_241Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_additiveExpression_30(CParser::Pnf_star_additiveExpression_30Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_andExpression_34(CParser::Pnf_star_andExpression_34Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_assignmentExpression_210(CParser::Pnf_star_assignmentExpression_210Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_castExpression_217(CParser::Pnf_star_castExpression_217Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_conditionalExpression_suffix_4_208(CParser::Pnf_star_conditionalExpression_suffix_4_208Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_directAbstractDeclarator_115(CParser::Pnf_star_directAbstractDeclarator_115Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_directDeclarator_68(CParser::Pnf_star_directDeclarator_68Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_equalityExpression_33(CParser::Pnf_star_equalityExpression_33Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_exclusiveOrExpression_35(CParser::Pnf_star_exclusiveOrExpression_35Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_expression_43(CParser::Pnf_star_expression_43Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_gccDeclaratorExtension_suffix_1_204(CParser::Pnf_star_gccDeclaratorExtension_suffix_1_204Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_inclusiveOrExpression_36(CParser::Pnf_star_inclusiveOrExpression_36Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_logicalAndExpression_37(CParser::Pnf_star_logicalAndExpression_37Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_logicalOrExpression_38(CParser::Pnf_star_logicalOrExpression_38Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_multiplicativeExpression_29(CParser::Pnf_star_multiplicativeExpression_29Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_pointer_211(CParser::Pnf_star_pointer_211Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_postfixExpression_22(CParser::Pnf_star_postfixExpression_22Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_relationalExpression_32(CParser::Pnf_star_relationalExpression_32Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_selectionStatement_233(CParser::Pnf_star_selectionStatement_233Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_shiftExpression_31(CParser::Pnf_star_shiftExpression_31Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_statement_232(CParser::Pnf_star_statement_232Context *context) = 0;

    virtual antlrcpp::Any visitPnf_star_unaryExpression_218(CParser::Pnf_star_unaryExpression_218Context *context) = 0;

    virtual antlrcpp::Any visitPnf_start(CParser::Pnf_startContext *context) = 0;

    virtual antlrcpp::Any visitPointer(CParser::PointerContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(CParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(CParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression_suffix_1(CParser::PrimaryExpression_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression_suffix_2(CParser::PrimaryExpression_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(CParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement(CParser::SelectionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement_block_1(CParser::SelectionStatement_block_1Context *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(CParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSpecifierQualifierList(CParser::SpecifierQualifierListContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_block_1(CParser::Statement_block_1Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_10(CParser::Statement_block_10Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_12(CParser::Statement_block_12Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_4(CParser::Statement_block_4Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_6(CParser::Statement_block_6Context *context) = 0;

    virtual antlrcpp::Any visitStatement_block_8(CParser::Statement_block_8Context *context) = 0;

    virtual antlrcpp::Any visitStatement_suffix_13(CParser::Statement_suffix_13Context *context) = 0;

    virtual antlrcpp::Any visitStatement_suffix_3(CParser::Statement_suffix_3Context *context) = 0;

    virtual antlrcpp::Any visitStatement_suffix_5(CParser::Statement_suffix_5Context *context) = 0;

    virtual antlrcpp::Any visitStatement_suffix_9(CParser::Statement_suffix_9Context *context) = 0;

    virtual antlrcpp::Any visitStaticAssertDeclaration(CParser::StaticAssertDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStaticAssertDeclaration_suffix_1(CParser::StaticAssertDeclaration_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitStorageClassSpecifier(CParser::StorageClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(CParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclarationList_suffix_1(CParser::StructDeclarationList_suffix_1Context *context) = 0;

    virtual antlrcpp::Any visitStructDeclarator(CParser::StructDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaratorList(CParser::StructDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaratorList_block_1(CParser::StructDeclaratorList_block_1Context *context) = 0;

    virtual antlrcpp::Any visitStructDeclaratorList_suffix_2(CParser::StructDeclaratorList_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitStructOrUnion(CParser::StructOrUnionContext *context) = 0;

    virtual antlrcpp::Any visitStructOrUnionSpecifier(CParser::StructOrUnionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStructOrUnionSpecifier_suffix_2(CParser::StructOrUnionSpecifier_suffix_2Context *context) = 0;

    virtual antlrcpp::Any visitTypeName(CParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(CParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(CParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier_block_1(CParser::TypeSpecifier_block_1Context *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier_block_2(CParser::TypeSpecifier_block_2Context *context) = 0;

    virtual antlrcpp::Any visitTypedefName(CParser::TypedefNameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(CParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_block_1(CParser::UnaryExpression_block_1Context *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression_block_2(CParser::UnaryExpression_block_2Context *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(CParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_0(CParser::Arborist_synthetic_question_0Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_1(CParser::Arborist_synthetic_question_1Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_2(CParser::Arborist_synthetic_question_2Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_3(CParser::Arborist_synthetic_question_3Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_4(CParser::Arborist_synthetic_question_4Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_5(CParser::Arborist_synthetic_question_5Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_6(CParser::Arborist_synthetic_question_6Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_7(CParser::Arborist_synthetic_question_7Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_8(CParser::Arborist_synthetic_question_8Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_9(CParser::Arborist_synthetic_question_9Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_10(CParser::Arborist_synthetic_question_10Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_11(CParser::Arborist_synthetic_question_11Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_12(CParser::Arborist_synthetic_question_12Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_13(CParser::Arborist_synthetic_question_13Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_14(CParser::Arborist_synthetic_question_14Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_15(CParser::Arborist_synthetic_question_15Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_16(CParser::Arborist_synthetic_question_16Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_17(CParser::Arborist_synthetic_question_17Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_18(CParser::Arborist_synthetic_question_18Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_19(CParser::Arborist_synthetic_question_19Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_20(CParser::Arborist_synthetic_question_20Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_21(CParser::Arborist_synthetic_question_21Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_22(CParser::Arborist_synthetic_question_22Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_23(CParser::Arborist_synthetic_question_23Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_24(CParser::Arborist_synthetic_question_24Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_25(CParser::Arborist_synthetic_question_25Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_26(CParser::Arborist_synthetic_question_26Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_27(CParser::Arborist_synthetic_question_27Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_28(CParser::Arborist_synthetic_question_28Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_29(CParser::Arborist_synthetic_question_29Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_30(CParser::Arborist_synthetic_question_30Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_31(CParser::Arborist_synthetic_question_31Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_32(CParser::Arborist_synthetic_question_32Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_33(CParser::Arborist_synthetic_question_33Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_34(CParser::Arborist_synthetic_question_34Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_35(CParser::Arborist_synthetic_question_35Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_36(CParser::Arborist_synthetic_question_36Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_37(CParser::Arborist_synthetic_question_37Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_38(CParser::Arborist_synthetic_question_38Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_39(CParser::Arborist_synthetic_question_39Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_40(CParser::Arborist_synthetic_question_40Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_41(CParser::Arborist_synthetic_question_41Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_42(CParser::Arborist_synthetic_question_42Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_43(CParser::Arborist_synthetic_question_43Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_44(CParser::Arborist_synthetic_question_44Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_45(CParser::Arborist_synthetic_question_45Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_46(CParser::Arborist_synthetic_question_46Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_47(CParser::Arborist_synthetic_question_47Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_48(CParser::Arborist_synthetic_question_48Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_49(CParser::Arborist_synthetic_question_49Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_50(CParser::Arborist_synthetic_question_50Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_51(CParser::Arborist_synthetic_question_51Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_52(CParser::Arborist_synthetic_question_52Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_53(CParser::Arborist_synthetic_question_53Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_54(CParser::Arborist_synthetic_question_54Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_55(CParser::Arborist_synthetic_question_55Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_56(CParser::Arborist_synthetic_question_56Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_57(CParser::Arborist_synthetic_question_57Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_58(CParser::Arborist_synthetic_question_58Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_59(CParser::Arborist_synthetic_question_59Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_60(CParser::Arborist_synthetic_question_60Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_61(CParser::Arborist_synthetic_question_61Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_62(CParser::Arborist_synthetic_question_62Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_63(CParser::Arborist_synthetic_question_63Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_64(CParser::Arborist_synthetic_question_64Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_65(CParser::Arborist_synthetic_question_65Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_question_66(CParser::Arborist_synthetic_question_66Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_67(CParser::Arborist_synthetic_plus_67Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_68(CParser::Arborist_synthetic_plus_68Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_69(CParser::Arborist_synthetic_plus_69Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_70(CParser::Arborist_synthetic_plus_70Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_71(CParser::Arborist_synthetic_plus_71Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_72(CParser::Arborist_synthetic_plus_72Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_73(CParser::Arborist_synthetic_plus_73Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_plus_74(CParser::Arborist_synthetic_plus_74Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_75(CParser::Arborist_synthetic_star_75Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_76(CParser::Arborist_synthetic_star_76Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_77(CParser::Arborist_synthetic_star_77Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_78(CParser::Arborist_synthetic_star_78Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_79(CParser::Arborist_synthetic_star_79Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_80(CParser::Arborist_synthetic_star_80Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_81(CParser::Arborist_synthetic_star_81Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_82(CParser::Arborist_synthetic_star_82Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_83(CParser::Arborist_synthetic_star_83Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_84(CParser::Arborist_synthetic_star_84Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_85(CParser::Arborist_synthetic_star_85Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_86(CParser::Arborist_synthetic_star_86Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_87(CParser::Arborist_synthetic_star_87Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_88(CParser::Arborist_synthetic_star_88Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_89(CParser::Arborist_synthetic_star_89Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_90(CParser::Arborist_synthetic_star_90Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_91(CParser::Arborist_synthetic_star_91Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_92(CParser::Arborist_synthetic_star_92Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_93(CParser::Arborist_synthetic_star_93Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_94(CParser::Arborist_synthetic_star_94Context *context) = 0;

    virtual antlrcpp::Any visitArborist_synthetic_star_95(CParser::Arborist_synthetic_star_95Context *context) = 0;


};

}  // namespace antlr_CPNF
