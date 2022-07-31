#include <Rcpp.h>
using namespace Rcpp;

template<int T>
SEXP combo(Vector<T> a) {
  size_t const vec_length = a.size(),
    vec_length_sq = vec_length * vec_length; 
  Vector<T> expand_vector_a(vec_length_sq),
  expand_vector_b(vec_length_sq);  
  
  size_t i(0L);
  for(size_t jj = 0L; jj < vec_length; ++jj)
    for(size_t ii = 0L; ii < vec_length; ++i, ++ii){
      expand_vector_a[i] = a[jj];
      expand_vector_b[i] = a[ii];
    }
    
    List out = List::create(_["var1"] = expand_vector_a,
                            _["var2"] = expand_vector_b);
  
  out.attr("class") = "data.frame";
  out.attr("row.names") = Rcpp::seq(1, vec_length_sq);
  
  return out;
}

// [[Rcpp::export]]
SEXP expand_vector(SEXP a){
  switch( TYPEOF(a) ){
  case INTSXP : return combo<INTSXP>(a);
  case REALSXP: return combo<REALSXP>(a);
  case STRSXP : return combo<STRSXP>(a);
  case LGLSXP : return combo<LGLSXP>(a);
  case VECSXP : return combo<VECSXP>(a);
  default: Rcpp::stop("Input not valid. Try inputting a vector.");
  }
  
  return DataFrame();
}