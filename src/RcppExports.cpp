// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dmvnorm_arma
arma::vec dmvnorm_arma(arma::mat x, arma::rowvec mu, arma::mat sigma, bool logd);
RcppExport SEXP _TruncatedNormal_dmvnorm_arma(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_arma(x, mu, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dmvt_arma
arma::vec dmvt_arma(arma::mat x, arma::rowvec mu, arma::mat sigma, Rcpp::NumericVector df, bool logd);
RcppExport SEXP _TruncatedNormal_dmvt_arma(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP dfSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type df(dfSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvt_arma(x, mu, sigma, df, logd));
    return rcpp_result_gen;
END_RCPP
}
// lnNpr
NumericVector lnNpr(NumericVector a, NumericVector b, bool check);
RcppExport SEXP _TruncatedNormal_lnNpr(SEXP aSEXP, SEXP bSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(lnNpr(a, b, check));
    return rcpp_result_gen;
END_RCPP
}
// cholpermGB
List cholpermGB(arma::mat Sigma, NumericVector l, NumericVector u);
RcppExport SEXP _TruncatedNormal_cholpermGB(SEXP SigmaSEXP, SEXP lSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(cholpermGB(Sigma, l, u));
    return rcpp_result_gen;
END_RCPP
}
// cholperm
List cholperm(arma::mat Sigma, NumericVector l, NumericVector u);
RcppExport SEXP _TruncatedNormal_cholperm(SEXP SigmaSEXP, SEXP lSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(cholperm(Sigma, l, u));
    return rcpp_result_gen;
END_RCPP
}
// Phinv
NumericVector Phinv(NumericVector p, NumericVector l, NumericVector u);
RcppExport SEXP _TruncatedNormal_Phinv(SEXP pSEXP, SEXP lSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type l(lSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(Phinv(p, l, u));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TruncatedNormal_dmvnorm_arma", (DL_FUNC) &_TruncatedNormal_dmvnorm_arma, 4},
    {"_TruncatedNormal_dmvt_arma", (DL_FUNC) &_TruncatedNormal_dmvt_arma, 5},
    {"_TruncatedNormal_lnNpr", (DL_FUNC) &_TruncatedNormal_lnNpr, 3},
    {"_TruncatedNormal_cholpermGB", (DL_FUNC) &_TruncatedNormal_cholpermGB, 3},
    {"_TruncatedNormal_cholperm", (DL_FUNC) &_TruncatedNormal_cholperm, 3},
    {"_TruncatedNormal_Phinv", (DL_FUNC) &_TruncatedNormal_Phinv, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_TruncatedNormal(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
