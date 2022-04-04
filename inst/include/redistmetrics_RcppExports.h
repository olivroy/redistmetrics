// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_redistmetrics_RCPPEXPORTS_H_GEN_
#define RCPP_redistmetrics_RCPPEXPORTS_H_GEN_

#include "redistmetrics_types.h"
#include "redistmetrics_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace redistmetrics {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("redistmetrics", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("redistmetrics", "_redistmetrics_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in redistmetrics");
            }
        }
    }

    inline IntegerVector splits(IntegerMatrix dm, IntegerVector community, int nd, int max_split) {
        typedef SEXP(*Ptr_splits)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_splits p_splits = NULL;
        if (p_splits == NULL) {
            validateSignature("IntegerVector(*splits)(IntegerMatrix,IntegerVector,int,int)");
            p_splits = (Ptr_splits)R_GetCCallable("redistmetrics", "_redistmetrics_splits");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_splits(Shield<SEXP>(Rcpp::wrap(dm)), Shield<SEXP>(Rcpp::wrap(community)), Shield<SEXP>(Rcpp::wrap(nd)), Shield<SEXP>(Rcpp::wrap(max_split)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerVector >(rcpp_result_gen);
    }

    inline IntegerMatrix distr_cty_splits(IntegerMatrix dm, IntegerVector community, int nd) {
        typedef SEXP(*Ptr_distr_cty_splits)(SEXP,SEXP,SEXP);
        static Ptr_distr_cty_splits p_distr_cty_splits = NULL;
        if (p_distr_cty_splits == NULL) {
            validateSignature("IntegerMatrix(*distr_cty_splits)(IntegerMatrix,IntegerVector,int)");
            p_distr_cty_splits = (Ptr_distr_cty_splits)R_GetCCallable("redistmetrics", "_redistmetrics_distr_cty_splits");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_distr_cty_splits(Shield<SEXP>(Rcpp::wrap(dm)), Shield<SEXP>(Rcpp::wrap(community)), Shield<SEXP>(Rcpp::wrap(nd)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

    inline IntegerMatrix admin_splits_count(IntegerMatrix dm, IntegerVector admin) {
        typedef SEXP(*Ptr_admin_splits_count)(SEXP,SEXP);
        static Ptr_admin_splits_count p_admin_splits_count = NULL;
        if (p_admin_splits_count == NULL) {
            validateSignature("IntegerMatrix(*admin_splits_count)(IntegerMatrix,IntegerVector)");
            p_admin_splits_count = (Ptr_admin_splits_count)R_GetCCallable("redistmetrics", "_redistmetrics_admin_splits_count");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_admin_splits_count(Shield<SEXP>(Rcpp::wrap(dm)), Shield<SEXP>(Rcpp::wrap(admin)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<IntegerMatrix >(rcpp_result_gen);
    }

}

#endif // RCPP_redistmetrics_RCPPEXPORTS_H_GEN_
