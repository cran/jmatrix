// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/jmatrix.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// JMatrixSetDebug
void JMatrixSetDebug(bool deb);
RcppExport SEXP _jmatrix_JMatrixSetDebug(SEXP debSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type deb(debSEXP);
    JMatrixSetDebug(deb);
    return R_NilValue;
END_RCPP
}
// GetJCol
Rcpp::NumericVector GetJCol(std::string fname, int ncol);
RcppExport SEXP _jmatrix_GetJCol(SEXP fnameSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJCol(fname, ncol));
    return rcpp_result_gen;
END_RCPP
}
// GetJManyCols
Rcpp::NumericMatrix GetJManyCols(std::string fname, Rcpp::NumericVector extcols);
RcppExport SEXP _jmatrix_GetJManyCols(SEXP fnameSEXP, SEXP extcolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type extcols(extcolsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJManyCols(fname, extcols));
    return rcpp_result_gen;
END_RCPP
}
// GetJColByName
Rcpp::NumericVector GetJColByName(std::string fname, std::string colname);
RcppExport SEXP _jmatrix_GetJColByName(SEXP fnameSEXP, SEXP colnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type colname(colnameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJColByName(fname, colname));
    return rcpp_result_gen;
END_RCPP
}
// GetJManyColsByNames
Rcpp::NumericMatrix GetJManyColsByNames(std::string fname, Rcpp::StringVector extcolnames);
RcppExport SEXP _jmatrix_GetJManyColsByNames(SEXP fnameSEXP, SEXP extcolnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type extcolnames(extcolnamesSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJManyColsByNames(fname, extcolnames));
    return rcpp_result_gen;
END_RCPP
}
// GetSubdiag
Rcpp::NumericVector GetSubdiag(std::string fname);
RcppExport SEXP _jmatrix_GetSubdiag(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetSubdiag(fname));
    return rcpp_result_gen;
END_RCPP
}
// GetJRow
Rcpp::NumericVector GetJRow(std::string fname, int nrow);
RcppExport SEXP _jmatrix_GetJRow(SEXP fnameSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJRow(fname, nrow));
    return rcpp_result_gen;
END_RCPP
}
// GetJManyRows
Rcpp::NumericMatrix GetJManyRows(std::string fname, Rcpp::NumericVector extrows);
RcppExport SEXP _jmatrix_GetJManyRows(SEXP fnameSEXP, SEXP extrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type extrows(extrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJManyRows(fname, extrows));
    return rcpp_result_gen;
END_RCPP
}
// GetJRowByName
Rcpp::NumericVector GetJRowByName(std::string fname, std::string rowname);
RcppExport SEXP _jmatrix_GetJRowByName(SEXP fnameSEXP, SEXP rownameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type rowname(rownameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJRowByName(fname, rowname));
    return rcpp_result_gen;
END_RCPP
}
// GetJManyRowsByNames
Rcpp::NumericMatrix GetJManyRowsByNames(std::string fname, Rcpp::StringVector extrownames);
RcppExport SEXP _jmatrix_GetJManyRowsByNames(SEXP fnameSEXP, SEXP extrownamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type extrownames(extrownamesSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJManyRowsByNames(fname, extrownames));
    return rcpp_result_gen;
END_RCPP
}
// JMatInfo
void JMatInfo(std::string fname, std::string fres);
RcppExport SEXP _jmatrix_JMatInfo(SEXP fnameSEXP, SEXP fresSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type fres(fresSEXP);
    JMatInfo(fname, fres);
    return R_NilValue;
END_RCPP
}
// GetJRowNames
Rcpp::StringVector GetJRowNames(std::string fname);
RcppExport SEXP _jmatrix_GetJRowNames(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJRowNames(fname));
    return rcpp_result_gen;
END_RCPP
}
// GetJColNames
Rcpp::StringVector GetJColNames(std::string fname);
RcppExport SEXP _jmatrix_GetJColNames(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJColNames(fname));
    return rcpp_result_gen;
END_RCPP
}
// GetJNames
Rcpp::List GetJNames(std::string fname);
RcppExport SEXP _jmatrix_GetJNames(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetJNames(fname));
    return rcpp_result_gen;
END_RCPP
}
// JWriteBin
void JWriteBin(Rcpp::NumericMatrix M, std::string fname, std::string dtype, std::string dmtype, std::string comment);
RcppExport SEXP _jmatrix_JWriteBin(SEXP MSEXP, SEXP fnameSEXP, SEXP dtypeSEXP, SEXP dmtypeSEXP, SEXP commentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type dtype(dtypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type dmtype(dmtypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comment(commentSEXP);
    JWriteBin(M, fname, dtype, dmtype, comment);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jmatrix_JMatrixSetDebug", (DL_FUNC) &_jmatrix_JMatrixSetDebug, 1},
    {"_jmatrix_GetJCol", (DL_FUNC) &_jmatrix_GetJCol, 2},
    {"_jmatrix_GetJManyCols", (DL_FUNC) &_jmatrix_GetJManyCols, 2},
    {"_jmatrix_GetJColByName", (DL_FUNC) &_jmatrix_GetJColByName, 2},
    {"_jmatrix_GetJManyColsByNames", (DL_FUNC) &_jmatrix_GetJManyColsByNames, 2},
    {"_jmatrix_GetSubdiag", (DL_FUNC) &_jmatrix_GetSubdiag, 1},
    {"_jmatrix_GetJRow", (DL_FUNC) &_jmatrix_GetJRow, 2},
    {"_jmatrix_GetJManyRows", (DL_FUNC) &_jmatrix_GetJManyRows, 2},
    {"_jmatrix_GetJRowByName", (DL_FUNC) &_jmatrix_GetJRowByName, 2},
    {"_jmatrix_GetJManyRowsByNames", (DL_FUNC) &_jmatrix_GetJManyRowsByNames, 2},
    {"_jmatrix_JMatInfo", (DL_FUNC) &_jmatrix_JMatInfo, 2},
    {"_jmatrix_GetJRowNames", (DL_FUNC) &_jmatrix_GetJRowNames, 1},
    {"_jmatrix_GetJColNames", (DL_FUNC) &_jmatrix_GetJColNames, 1},
    {"_jmatrix_GetJNames", (DL_FUNC) &_jmatrix_GetJNames, 1},
    {"_jmatrix_JWriteBin", (DL_FUNC) &_jmatrix_JWriteBin, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_jmatrix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}