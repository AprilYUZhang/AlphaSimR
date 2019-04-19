// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gebvRR
arma::mat gebvRR(const Rcpp::S4& sol, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_gebvRR(SEXP solSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type sol(solSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(gebvRR(sol, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// gegvRRD
arma::mat gegvRRD(const Rcpp::S4& sol, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_gegvRRD(SEXP solSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type sol(solSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(gegvRRD(sol, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// gebvGCA
arma::mat gebvGCA(const Rcpp::S4& sol, const Rcpp::S4& pop, bool female, int nThreads);
RcppExport SEXP _AlphaSimR_gebvGCA(SEXP solSEXP, SEXP popSEXP, SEXP femaleSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type sol(solSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< bool >::type female(femaleSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(gebvGCA(sol, pop, female, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// gegvGCA
arma::mat gegvGCA(const Rcpp::S4& sol, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_gegvGCA(SEXP solSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type sol(solSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(gegvGCA(sol, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// gegvSCA
arma::mat gegvSCA(const Rcpp::S4& sol, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_gegvSCA(SEXP solSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type sol(solSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(gegvSCA(sol, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callFastRRBLUP
Rcpp::List callFastRRBLUP(arma::vec y, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, double Vu, double Ve, int maxIter, int nThreads);
RcppExport SEXP _AlphaSimR_callFastRRBLUP(SEXP ySEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP VuSEXP, SEXP VeSEXP, SEXP maxIterSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< double >::type Vu(VuSEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callFastRRBLUP(y, geno, lociPerChr, lociLoc, Vu, Ve, maxIter, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP
Rcpp::List callRRBLUP(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP(y, x, reps, geno, lociPerChr, lociLoc, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP2
Rcpp::List callRRBLUP2(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, double Vu, double Ve, double tol, int maxIter, bool useEM, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP2(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP VuSEXP, SEXP VeSEXP, SEXP tolSEXP, SEXP maxIterSEXP, SEXP useEMSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< double >::type Vu(VuSEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< bool >::type useEM(useEMSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP2(y, x, reps, geno, lociPerChr, lociLoc, Vu, Ve, tol, maxIter, useEM, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_D
Rcpp::List callRRBLUP_D(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_D(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_D(y, x, reps, geno, lociPerChr, lociLoc, maxIter, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_D2
Rcpp::List callRRBLUP_D2(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, double Va, double Vd, double Ve, double tol, bool useEM, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_D2(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP VaSEXP, SEXP VdSEXP, SEXP VeSEXP, SEXP tolSEXP, SEXP useEMSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type Va(VaSEXP);
    Rcpp::traits::input_parameter< double >::type Vd(VdSEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type useEM(useEMSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_D2(y, x, reps, geno, lociPerChr, lociLoc, maxIter, Va, Vd, Ve, tol, useEM, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_MV
Rcpp::List callRRBLUP_MV(arma::mat Y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_MV(SEXP YSEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_MV(Y, x, reps, geno, lociPerChr, lociLoc, maxIter, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_GCA
Rcpp::List callRRBLUP_GCA(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_GCA(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_GCA(y, x, reps, geno, lociPerChr, lociLoc, maxIter, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_GCA2
Rcpp::List callRRBLUP_GCA2(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, double Vu1, double Vu2, double Ve, double tol, bool useEM, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_GCA2(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP Vu1SEXP, SEXP Vu2SEXP, SEXP VeSEXP, SEXP tolSEXP, SEXP useEMSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type Vu1(Vu1SEXP);
    Rcpp::traits::input_parameter< double >::type Vu2(Vu2SEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type useEM(useEMSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_GCA2(y, x, reps, geno, lociPerChr, lociLoc, maxIter, Vu1, Vu2, Ve, tol, useEM, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_SCA
Rcpp::List callRRBLUP_SCA(arma::mat y, arma::uvec x, arma::vec reps, arma::field<arma::Cube<unsigned char> >& geno, arma::Col<int>& lociPerChr, arma::uvec lociLoc, int maxIter, int nThreads);
RcppExport SEXP _AlphaSimR_callRRBLUP_SCA(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP maxIterSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_SCA(y, x, reps, geno, lociPerChr, lociLoc, maxIter, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// writeASGenotypes
void writeASGenotypes(const arma::Cube<unsigned char>& g, const arma::field<arma::uvec>& locations, const arma::uvec& allLocations, const arma::vec& snpchips, const std::vector<std::string>& names, const char missing, const std::string fname);
RcppExport SEXP _AlphaSimR_writeASGenotypes(SEXP gSEXP, SEXP locationsSEXP, SEXP allLocationsSEXP, SEXP snpchipsSEXP, SEXP namesSEXP, SEXP missingSEXP, SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type locations(locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type allLocations(allLocationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type snpchips(snpchipsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const char >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    writeASGenotypes(g, locations, allLocations, snpchips, names, missing, fname);
    return R_NilValue;
END_RCPP
}
// writeASHaplotypes
void writeASHaplotypes(const arma::Cube<unsigned char>& g, const arma::field<arma::uvec>& locations, const arma::uvec& allLocations, const arma::vec& snpchips, const std::vector<std::string>& names, const char missing, const std::string fname);
RcppExport SEXP _AlphaSimR_writeASHaplotypes(SEXP gSEXP, SEXP locationsSEXP, SEXP allLocationsSEXP, SEXP snpchipsSEXP, SEXP namesSEXP, SEXP missingSEXP, SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type locations(locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type allLocations(allLocationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type snpchips(snpchipsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const char >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    writeASHaplotypes(g, locations, allLocations, snpchips, names, missing, fname);
    return R_NilValue;
END_RCPP
}
// calcGenParam
Rcpp::List calcGenParam(const Rcpp::S4& trait, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_calcGenParam(SEXP traitSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGenParam(trait, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getGeno
arma::Mat<unsigned char> getGeno(const arma::field<arma::Cube<unsigned char> >& geno, const arma::Col<int>& lociPerChr, arma::uvec lociLoc, int nThreads);
RcppExport SEXP _AlphaSimR_getGeno(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getGeno(geno, lociPerChr, lociLoc, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getHaplo
arma::Mat<unsigned char> getHaplo(const arma::field<arma::Cube<unsigned char> >& geno, const arma::Col<int>& lociPerChr, arma::uvec lociLoc, int nThreads);
RcppExport SEXP _AlphaSimR_getHaplo(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getHaplo(geno, lociPerChr, lociLoc, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getOneHaplo
arma::Mat<unsigned char> getOneHaplo(const arma::field<arma::Cube<unsigned char> >& geno, const arma::Col<int>& lociPerChr, arma::uvec lociLoc, int haplo, int nThreads);
RcppExport SEXP _AlphaSimR_getOneHaplo(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP haploSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getOneHaplo(geno, lociPerChr, lociLoc, haplo, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getIbdHaplo
Rcpp::IntegerMatrix getIbdHaplo(const Rcpp::List& ibdRecHist, const Rcpp::IntegerVector& individuals, const Rcpp::IntegerVector& nLociPerChr);
RcppExport SEXP _AlphaSimR_getIbdHaplo(SEXP ibdRecHistSEXP, SEXP individualsSEXP, SEXP nLociPerChrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type ibdRecHist(ibdRecHistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type nLociPerChr(nLociPerChrSEXP);
    rcpp_result_gen = Rcpp::wrap(getIbdHaplo(ibdRecHist, individuals, nLociPerChr));
    return rcpp_result_gen;
END_RCPP
}
// writeGeno
void writeGeno(const arma::field<arma::Cube<unsigned char> >& geno, const arma::Col<int>& lociPerChr, arma::uvec lociLoc, Rcpp::String filePath, int nThreads);
RcppExport SEXP _AlphaSimR_writeGeno(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP filePathSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    writeGeno(geno, lociPerChr, lociLoc, filePath, nThreads);
    return R_NilValue;
END_RCPP
}
// writeOneHaplo
void writeOneHaplo(const arma::field<arma::Cube<unsigned char> >& geno, const arma::Col<int>& lociPerChr, arma::uvec lociLoc, int haplo, Rcpp::String filePath, int nThreads);
RcppExport SEXP _AlphaSimR_writeOneHaplo(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP haploSEXP, SEXP filePathSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::Col<int>& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    writeOneHaplo(geno, lociPerChr, lociLoc, haplo, filePath, nThreads);
    return R_NilValue;
END_RCPP
}
// getGv
arma::field<arma::vec> getGv(const Rcpp::S4& trait, const Rcpp::S4& pop, int nThreads);
RcppExport SEXP _AlphaSimR_getGv(SEXP traitSEXP, SEXP popSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getGv(trait, pop, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getHybridGv
arma::field<arma::vec> getHybridGv(const Rcpp::S4& trait, const Rcpp::S4& females, arma::uvec femaleParents, const Rcpp::S4& males, arma::uvec maleParents, int nThreads);
RcppExport SEXP _AlphaSimR_getHybridGv(SEXP traitSEXP, SEXP femalesSEXP, SEXP femaleParentsSEXP, SEXP malesSEXP, SEXP maleParentsSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type females(femalesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type femaleParents(femaleParentsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type males(malesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type maleParents(maleParentsSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(getHybridGv(trait, females, femaleParents, males, maleParents, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// cross
Rcpp::List cross(const arma::field<arma::Cube<unsigned char> >& motherGeno, arma::uvec mother, const arma::field<arma::Cube<unsigned char> >& fatherGeno, arma::uvec father, const arma::field<arma::vec>& femaleMap, const arma::field<arma::vec>& maleMap, bool trackRec, arma::uword motherPloidy, arma::uword fatherPloidy, const arma::vec& motherCentromere, const arma::vec& fatherCentromere, double quadProb, int nThreads);
RcppExport SEXP _AlphaSimR_cross(SEXP motherGenoSEXP, SEXP motherSEXP, SEXP fatherGenoSEXP, SEXP fatherSEXP, SEXP femaleMapSEXP, SEXP maleMapSEXP, SEXP trackRecSEXP, SEXP motherPloidySEXP, SEXP fatherPloidySEXP, SEXP motherCentromereSEXP, SEXP fatherCentromereSEXP, SEXP quadProbSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type motherGeno(motherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type mother(motherSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type fatherGeno(fatherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type father(fatherSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type femaleMap(femaleMapSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type maleMap(maleMapSEXP);
    Rcpp::traits::input_parameter< bool >::type trackRec(trackRecSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type motherPloidy(motherPloidySEXP);
    Rcpp::traits::input_parameter< arma::uword >::type fatherPloidy(fatherPloidySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type motherCentromere(motherCentromereSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fatherCentromere(fatherCentromereSEXP);
    Rcpp::traits::input_parameter< double >::type quadProb(quadProbSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(cross(motherGeno, mother, fatherGeno, father, femaleMap, maleMap, trackRec, motherPloidy, fatherPloidy, motherCentromere, fatherCentromere, quadProb, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// createDH2
Rcpp::List createDH2(const arma::field<arma::Cube<unsigned char> >& geno, arma::uword nDH, const arma::field<arma::vec>& genMap, bool trackRec, int nThreads);
RcppExport SEXP _AlphaSimR_createDH2(SEXP genoSEXP, SEXP nDHSEXP, SEXP genMapSEXP, SEXP trackRecSEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type nDH(nDHSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type genMap(genMapSEXP);
    Rcpp::traits::input_parameter< bool >::type trackRec(trackRecSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(createDH2(geno, nDH, genMap, trackRec, nThreads));
    return rcpp_result_gen;
END_RCPP
}
// getIbdRecHist
Rcpp::List getIbdRecHist(const Rcpp::List& recHist, const Rcpp::IntegerMatrix& pedigree, const Rcpp::IntegerVector& nLociPerChr);
RcppExport SEXP _AlphaSimR_getIbdRecHist(SEXP recHistSEXP, SEXP pedigreeSEXP, SEXP nLociPerChrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type recHist(recHistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type pedigree(pedigreeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type nLociPerChr(nLociPerChrSEXP);
    rcpp_result_gen = Rcpp::wrap(getIbdRecHist(recHist, pedigree, nLociPerChr));
    return rcpp_result_gen;
END_RCPP
}
// popVar
arma::mat popVar(const arma::mat& X);
RcppExport SEXP _AlphaSimR_popVar(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(popVar(X));
    return rcpp_result_gen;
END_RCPP
}
// mergeGeno
arma::field<arma::Cube<unsigned char> > mergeGeno(const arma::field<arma::Cube<unsigned char> >& x, const arma::field<arma::Cube<unsigned char> >& y);
RcppExport SEXP _AlphaSimR_mergeGeno(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mergeGeno(x, y));
    return rcpp_result_gen;
END_RCPP
}
// mergeMultGeno
arma::field<arma::Cube<unsigned char> > mergeMultGeno(Rcpp::List& popList, arma::uvec nInd, arma::uvec nBin, arma::uword ploidy);
RcppExport SEXP _AlphaSimR_mergeMultGeno(SEXP popListSEXP, SEXP nIndSEXP, SEXP nBinSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type popList(popListSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type nInd(nIndSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type nBin(nBinSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(mergeMultGeno(popList, nInd, nBin, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// mergeMultIntMat
arma::Mat<int> mergeMultIntMat(const arma::field<arma::Mat<int> >& X, arma::uvec nRow, arma::uword nCol);
RcppExport SEXP _AlphaSimR_mergeMultIntMat(SEXP XSEXP, SEXP nRowSEXP, SEXP nColSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Mat<int> >& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type nRow(nRowSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type nCol(nColSEXP);
    rcpp_result_gen = Rcpp::wrap(mergeMultIntMat(X, nRow, nCol));
    return rcpp_result_gen;
END_RCPP
}
// calcChrFreq
arma::vec calcChrFreq(const arma::Cube<unsigned char>& geno);
RcppExport SEXP _AlphaSimR_calcChrFreq(SEXP genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type geno(genoSEXP);
    rcpp_result_gen = Rcpp::wrap(calcChrFreq(geno));
    return rcpp_result_gen;
END_RCPP
}
// sampAllComb
arma::umat sampAllComb(arma::uword nLevel1, arma::uword nLevel2, arma::uword n);
RcppExport SEXP _AlphaSimR_sampAllComb(SEXP nLevel1SEXP, SEXP nLevel2SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type nLevel1(nLevel1SEXP);
    Rcpp::traits::input_parameter< arma::uword >::type nLevel2(nLevel2SEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sampAllComb(nLevel1, nLevel2, n));
    return rcpp_result_gen;
END_RCPP
}
// sampHalfDialComb
arma::umat sampHalfDialComb(arma::uword nLevel, arma::uword n);
RcppExport SEXP _AlphaSimR_sampHalfDialComb(SEXP nLevelSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type nLevel(nLevelSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sampHalfDialComb(nLevel, n));
    return rcpp_result_gen;
END_RCPP
}
// calcCoef
arma::mat calcCoef(arma::mat& X, arma::mat& Y);
RcppExport SEXP _AlphaSimR_calcCoef(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(calcCoef(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// getNumThreads
int getNumThreads();
RcppExport SEXP _AlphaSimR_getNumThreads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getNumThreads());
    return rcpp_result_gen;
END_RCPP
}
// packHaplo
arma::Cube<unsigned char> packHaplo(arma::Mat<unsigned char>& haplo, arma::uword ploidy, bool inbred);
RcppExport SEXP _AlphaSimR_packHaplo(SEXP haploSEXP, SEXP ploidySEXP, SEXP inbredSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::Mat<unsigned char>& >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< bool >::type inbred(inbredSEXP);
    rcpp_result_gen = Rcpp::wrap(packHaplo(haplo, ploidy, inbred));
    return rcpp_result_gen;
END_RCPP
}
// writePlinkPed
void writePlinkPed(const Rcpp::DataFrame& fam, const arma::field<arma::Cube<unsigned char> >& geno, const arma::uvec& lociPerChr, arma::uvec lociLoc, const Rcpp::String& file);
RcppExport SEXP _AlphaSimR_writePlinkPed(SEXP famSEXP, SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type fam(famSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< const Rcpp::String& >::type file(fileSEXP);
    writePlinkPed(fam, geno, lociPerChr, lociLoc, file);
    return R_NilValue;
END_RCPP
}
// MaCS
Rcpp::List MaCS(Rcpp::String args, arma::uvec maxSites, bool inbred, arma::uword ploidy, int nThreads);
RcppExport SEXP _AlphaSimR_MaCS(SEXP argsSEXP, SEXP maxSitesSEXP, SEXP inbredSEXP, SEXP ploidySEXP, SEXP nThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type args(argsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type maxSites(maxSitesSEXP);
    Rcpp::traits::input_parameter< bool >::type inbred(inbredSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(MaCS(args, maxSites, inbred, ploidy, nThreads));
    return rcpp_result_gen;
END_RCPP
}
