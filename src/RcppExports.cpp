// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// testExpression
void testExpression(const std::string& expression);
RcppExport SEXP tensorflow_testExpression(SEXP expressionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type expression(expressionSEXP);
    testExpression(expression);
    return R_NilValue;
END_RCPP
}
// testFile
void testFile(const std::string& file);
RcppExport SEXP tensorflow_testFile(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    testFile(file);
    return R_NilValue;
END_RCPP
}