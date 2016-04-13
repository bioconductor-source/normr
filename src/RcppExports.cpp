// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// logRowSum
NumericVector logRowSum(const NumericMatrix& mat, int nthreads);
RcppExport SEXP normr_logRowSum(SEXP matSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    __result = Rcpp::wrap(logRowSum(mat, nthreads));
    return __result;
END_RCPP
}
// logSumVector
double logSumVector(const NumericVector& vec, int nthreads);
RcppExport SEXP normr_logSumVector(SEXP vecSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    __result = Rcpp::wrap(logSumVector(vec, nthreads));
    return __result;
END_RCPP
}
// mapToOriginal
NumericVector mapToOriginal(const NumericVector& vec, const List& m2u);
RcppExport SEXP normr_mapToOriginal(SEXP vecSEXP, SEXP m2uSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< const List& >::type m2u(m2uSEXP);
    __result = Rcpp::wrap(mapToOriginal(vec, m2u));
    return __result;
END_RCPP
}
// mapToUniqueWithMap
NumericVector mapToUniqueWithMap(const NumericVector& vec, const List& m2u);
RcppExport SEXP normr_mapToUniqueWithMap(SEXP vecSEXP, SEXP m2uSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< const List& >::type m2u(m2uSEXP);
    __result = Rcpp::wrap(mapToUniqueWithMap(vec, m2u));
    return __result;
END_RCPP
}
// computeEnrichment
NumericVector computeEnrichment(const IntegerVector& r, const IntegerVector& s, const NumericMatrix& lnPost, const NumericVector& theta, const int F, const int B, const bool diffCall, const int nthreads);
RcppExport SEXP normr_computeEnrichment(SEXP rSEXP, SEXP sSEXP, SEXP lnPostSEXP, SEXP thetaSEXP, SEXP FSEXP, SEXP BSEXP, SEXP diffCallSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type lnPost(lnPostSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type F(FSEXP);
    Rcpp::traits::input_parameter< const int >::type B(BSEXP);
    Rcpp::traits::input_parameter< const bool >::type diffCall(diffCallSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    __result = Rcpp::wrap(computeEnrichment(r, s, lnPost, theta, F, B, diffCall, nthreads));
    return __result;
END_RCPP
}
// normr_core
List normr_core(const IntegerVector& r, const IntegerVector& s, const int models, const double eps, const int iterations, const int bgIdx, const bool diffCall, const bool verbose, const int nthreads);
RcppExport SEXP normr_normr_core(SEXP rSEXP, SEXP sSEXP, SEXP modelsSEXP, SEXP epsSEXP, SEXP iterationsSEXP, SEXP bgIdxSEXP, SEXP diffCallSEXP, SEXP verboseSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const int >::type models(modelsSEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const int >::type bgIdx(bgIdxSEXP);
    Rcpp::traits::input_parameter< const bool >::type diffCall(diffCallSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const int >::type nthreads(nthreadsSEXP);
    __result = Rcpp::wrap(normr_core(r, s, models, eps, iterations, bgIdx, diffCall, verbose, nthreads));
    return __result;
END_RCPP
}
