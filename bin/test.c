

/*
 *  Global Switches
 */

#ifndef SAC_DO_CHECK
#define SAC_DO_CHECK                             0
#endif
#ifndef SAC_DO_CHECK_TYPE
#define SAC_DO_CHECK_TYPE                        0
#endif
#ifndef SAC_DO_CHECK_GPU
#define SAC_DO_CHECK_GPU                         0
#endif
#ifndef SAC_DO_CHECK_BOUNDARY
#define SAC_DO_CHECK_BOUNDARY                    0
#endif
#ifndef SAC_DO_CHECK_MALLOC
#define SAC_DO_CHECK_MALLOC                      0
#endif
#ifndef SAC_DO_CHECK_ERRNO
#define SAC_DO_CHECK_ERRNO                       0
#endif
#ifndef SAC_DO_CHECK_HEAP
#define SAC_DO_CHECK_HEAP                        0
#endif
#ifndef SAC_DO_CHECK_DISTMEM
#define SAC_DO_CHECK_DISTMEM                     0
#endif

#define SAC_DO_PHM                               1
#define SAC_DO_APS                               1
#define SAC_DO_DAO                               1
#define SAC_DO_MSCA                              1
#define SAC_DO_COMPILE_MODULE                    0
#define SAC_DO_MULTI_GPU                         0

#ifndef SAC_DO_PROFILE
#define SAC_DO_PROFILE                           0
#endif
#ifndef SAC_DO_PROFILE_WITH
#define SAC_DO_PROFILE_WITH                      0
#endif
#ifndef SAC_DO_PROFILE_FUN
#define SAC_DO_PROFILE_FUN                       0
#endif
#ifndef SAC_DO_PROFILE_INL
#define SAC_DO_PROFILE_INL                       0
#endif
#ifndef SAC_DO_PROFILE_LIB
#define SAC_DO_PROFILE_LIB                       0
#endif
#ifndef SAC_DO_PROFILE_MEM
#define SAC_DO_PROFILE_MEM                       0
#endif
#ifndef SAC_DO_PROFILE_OPS
#define SAC_DO_PROFILE_OPS                       0
#endif
#ifndef SAC_DO_PROFILE_CUDA
#define SAC_DO_PROFILE_CUDA                      0
#endif
#ifndef SAC_DO_PROFILE_DISTMEM
#define SAC_DO_PROFILE_DISTMEM                   0
#endif

#ifndef SAC_DO_TRACE
#define SAC_DO_TRACE                             0
#endif
#ifndef SAC_DO_TRACE_REF
#define SAC_DO_TRACE_REF                         0
#endif
#ifndef SAC_DO_TRACE_MEM
#define SAC_DO_TRACE_MEM                         0
#endif
#ifndef SAC_DO_TRACE_PRF
#define SAC_DO_TRACE_PRF                         0
#endif
#ifndef SAC_DO_TRACE_FUN
#define SAC_DO_TRACE_FUN                         0
#endif
#ifndef SAC_DO_TRACE_WL
#define SAC_DO_TRACE_WL                          0
#endif
#ifndef SAC_DO_TRACE_AA
#define SAC_DO_TRACE_AA                          0
#endif
#ifndef SAC_DO_TRACE_MT
#define SAC_DO_TRACE_MT                          0
#endif
#ifndef SAC_DO_TRACE_GPU
#define SAC_DO_TRACE_GPU                         0
#endif
#ifndef SAC_DO_TRACE_RTSPEC
#define SAC_DO_TRACE_RTSPEC                      0
#endif
#ifndef SAC_DO_TRACE_DISTMEM
#define SAC_DO_TRACE_DISTMEM                     0
#endif

#ifndef SAC_DO_CACHESIM
#define SAC_DO_CACHESIM                          0
#endif
#ifndef SAC_DO_CACHESIM_ADV
#define SAC_DO_CACHESIM_ADV                      0
#endif
#ifndef SAC_DO_CACHESIM_GLOBAL
#define SAC_DO_CACHESIM_GLOBAL                   1
#endif
#ifndef SAC_DO_CACHESIM_FILE
#define SAC_DO_CACHESIM_FILE                     0
#endif
#ifndef SAC_DO_CACHESIM_PIPE
#define SAC_DO_CACHESIM_PIPE                     0
#endif
#ifndef SAC_DO_CACHESIM_IMDT
#define SAC_DO_CACHESIM_IMDT                     1
#endif

/*
 * Setup for Multi Threaded Data Parallelism
 */
#define SAC_DO_MULTITHREAD                       0
#define SAC_DO_THREADS_STATIC                    1
#define SAC_DO_MT_CREATE_JOIN                    0
#define SAC_DO_MT_PTHREAD                        0
#define SAC_DO_MT_LPEL                           0
#define SAC_DO_MT_DYNAMIC                        0

/*
 * Setup for OMP Data Parallelism
 */
#define SAC_DO_MT_OMP                            0
#define SAC_DO_OMP_MACROS                        0

/*
 * Setup for MUTC
 */
#define SAC_MUTC_FUNAP_AS_CREATE                 0
#define SAC_MUTC_THREAD_MALLOC                   0
#define SAC_MUTC_DISABLE_THREAD_MEM              0
#define SAC_MUTC_BENCH                           0
#define SAC_MUTC_MACROS                          0
#define SAC_MUTC_RC_INDIRECT                     0
#define SAC_MUTC_SEQ_DATA_PARALLEL               0

/*
 * Setup for GPU Data Parallelism
 */
#define SAC_CUDA_MACROS                          0

/*
 * Setup for Distributed Memory Data Parallelism
 */
#define SAC_DO_DISTMEM                           0

#define SAC_DO_DISTMEM_GASNET                    0

#define SAC_DO_DISTMEM_UCX                       0

/*
 * Setup for Task Parallelism
 */
#define SAC_DO_FP                                0

/*
 * Debugging Support
 */
#ifndef SAC_DEBUG_RC
#define SAC_DEBUG_RC                             0
#endif

#define SAC_DO_CUDA_FORCE_INIT 1


/*
 *  Global Settings
 */

#define SAC_FORCE_DESC_SIZE -1

/*
 *  MUTC Backend Specific Settings
 */
#define SAC_MUTC_RC_PLACES  1
#define SAC_MUTC_FORCE_SPAWN_FLAGS

#define SAC_C_EXTERN           extern



/*
 *  Global Settings
 */

#ifndef NULL
#  ifdef __cplusplus
#    define NULL         0
#  else
#    define NULL         (void*) 0
#  endif
#endif

#define SAC_SET_TMPDIR              "/tmp"
#define SAC_SET_INITIAL_MASTER_HEAPSIZE      1048576
#define SAC_SET_INITIAL_WORKER_HEAPSIZE      65536
#define SAC_SET_INITIAL_UNIFIED_HEAPSIZE     0

#ifndef SAC_SET_RTSPEC_THREADS
#define SAC_SET_RTSPEC_THREADS              1
#endif

#ifndef SAC_SET_MTMODE
#define SAC_SET_MTMODE               0
#endif

#define SAC_SET_CPU_BIND_STRATEGY 0
#define SAC_SET_BARRIER_TYPE               0
#define SAC_SET_SMART_DECISIONS            0
#define SAC_SET_SMART_FILENAME           "default"
#define SAC_SET_SMART_ARCH               "(null)"
#define SAC_SET_SMART_PERIOD               500
#ifndef SAC_SET_THREADS_MAX
#define SAC_SET_THREADS_MAX          128
#endif

#ifndef SAC_SET_THREADS
#define SAC_SET_THREADS              1
#endif

#ifndef SAC_OMP_ACTIVE_LEVEL
#define SAC_OMP_ACTIVE_LEVEL          1
#endif

#ifndef SAC_SET_MASTERCLASS
#define SAC_SET_MASTERCLASS          0
#endif

#define SAC_SET_NUM_SCHEDULERS       0

#define SAC_SET_CACHE_1_SIZE         -1
#define SAC_SET_CACHE_1_LINE         4
#define SAC_SET_CACHE_1_ASSOC        1
#define SAC_SET_CACHE_1_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_1_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_2_SIZE         -1
#define SAC_SET_CACHE_2_LINE         4
#define SAC_SET_CACHE_2_ASSOC        1
#define SAC_SET_CACHE_2_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_2_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_3_SIZE         -1
#define SAC_SET_CACHE_3_LINE         4
#define SAC_SET_CACHE_3_ASSOC        1
#define SAC_SET_CACHE_3_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_3_MSCA_FACTOR  0.00

#define SAC_SET_CACHESIM_HOST        ""
#define SAC_SET_CACHESIM_FILE        "test.cs"
#define SAC_SET_CACHESIM_DIR         "/tmp"
#define SAC_SET_MAXFUN               0
#define SAC_SET_MAXFUNAP             1
#define SBLOCKSZ               16
#define LBLOCKSZ               256



/*
 *  Includes
 */


#include "sac.h"


#if SAC_OMP_MACROS

#include "omp.h"

#endif

#if SAC_CUDA_MACROS

#include <stdio.h>


#include <cuda.h>


#include <cuda_runtime.h>


#include <algorithm>

#endif

/*
 *  SAC-Program test.sac :
 */


/* Additional headers for external function declarations */
#include <math.h>
#include "stdlib.h"
#include "libsac/interface/sacarg.h"


/*
 *  type definitions
 */

SAC_ND_TYPEDEF((SACt_World__World, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_MTClock__MTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Rapl__Rapl, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Freq__Freq, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_String__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)

SAC_C_EXTERN SACt_String__string copy_string (SACt_String__string);
SAC_C_EXTERN SACt_String__string free_string (SACt_String__string);

SAC_ND_TYPEDEF((SACt_CommandLine__CommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Terminal__Terminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_TermFile__TermFile, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)


/*
 *  Global Definitions
 */

SAC_PF_DEFINE()
SAC_HM_DEFINE()


/*
 *  prototypes for externals (FUNDECS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACtoi, (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, in_nodesc, SAC_hidden, (SACl_str, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACtoi, SAC_ND_TYPE_NT( (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_str, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACargv, (SAC_hidden, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, in_nodesc, int, (SACl_N, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACargv, SAC_ND_TYPE_NT( (SAC_hidden, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_N, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACargc, (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
 */
SAC_ND_DECL_FUN2( SACargc, SAC_ND_TYPE_NT( (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( cyclesStart, (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
 */
SAC_ND_DECL_FUN2( cyclesStart, SAC_ND_TYPE_NT( (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( raplStart, (SACarg *, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
 */
SAC_ND_DECL_FUN2( raplStart, SAC_ND_TYPE_NT( (SACarg *, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SAC_MTClock_gettime, , 2, out_nodesc, long, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), out_nodesc, long, (SAC_arg_2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SAC_MTClock_gettime, void,  SAC_ND_PARAM_out_nodesc( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_out_nodesc( (SAC_arg_2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACprintf_TF, , 2, in_nodesc, SAC_hidden, (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), , ..., )
 */
SAC_ND_DECL_FUN2( SACprintf_TF, void,  SAC_ND_PARAM_in_nodesc( (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SAC_hidden), SAC_ND_PARAM_( , ...));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( to_string, , 3, out, SAC_hidden, (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), in, unsigned char, (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in_nodesc, int, (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( to_string, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SAC_hidden), SAC_ND_PARAM_in( (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in_nodesc( (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( raplStop, (SACarg *, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, in_nodesc, SACarg *, (SACl_start, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( raplStop, SAC_ND_TYPE_NT( (SACarg *, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_start, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SACarg *));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( cyclesStop, (ulong, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), 1, in_nodesc, int, (SACl_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( cyclesStop, SAC_ND_TYPE_NT( (ulong, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, )))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( numThreads, (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
 */
SAC_ND_DECL_FUN2( numThreads, SAC_ND_TYPE_NT( (int, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACARGwrapLonglong, , 2, out, SACarg *, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), in, longlong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACARGwrapLonglong, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SACarg *), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACARGunwrapLonglong, , 2, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, SACarg *, (SACl_arg, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACARGunwrapLonglong, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_arg, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SACarg *));



/*
 *  FFI wrap/unwrap/is function headers (TYPEDEFS)
 */



/*
 *  prototypes for locals (FUNDEFS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, , 9, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, , 4, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__prod__i_S, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__prod__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, , 5, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, byte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, byte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, short, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, short, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, long, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, longlong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, longlong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ubyte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, ubyte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ushort, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, ushort, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, uint, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, uint, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, ulong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulonglong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, ulonglong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, float, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, float, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, double, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, unsigned char, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, unsigned char, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, , 8, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMax__i_S__i_S, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMax__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMin__i_S__i_S, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMin__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, byte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, short, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__i_S, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, long, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, longlong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ubyte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ushort, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, uint, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulonglong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, unsigned char, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN__test, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN__test, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_INIT__init, , 0)
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_INIT__init, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_MTClock__touch, , 0)
 */
SAC_ND_DECL_FUN2( SACf_MTClock__touch, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Rapl_CL_INIT__init_TheRaplObject__SACt_Rapl__Rapl, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Rapl_CL_INIT__init_TheRaplObject__SACt_Rapl__Rapl, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Rapl__touch, , 0)
 */
SAC_ND_DECL_FUN2( SACf_Rapl__touch, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Freq_CL_INIT__init_TheFreqObject__SACt_Freq__Freq, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Freq_CL_INIT__init_TheFreqObject__SACt_Freq__Freq, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Freq__touch, , 0)
 */
SAC_ND_DECL_FUN2( SACf_Freq__touch, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_CommandLine_CL_INIT__init_TheCommandLine__SACt_CommandLine__CommandLine, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_CommandLine_CL_INIT__init_TheCommandLine__SACt_CommandLine__CommandLine, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_MTClock__timediff__l__l__l__l, , 5, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, long, (SACl_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_MTClock__timediff__l__l__l__l, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Rapl__tod__ll_X, , 2, out, double, (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, longlong, (SACl_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Rapl__tod__ll_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarArith___PL__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarArith___PL__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, unsigned char, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulonglong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, uint, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ushort, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ubyte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, longlong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, long, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__i_S, , 3, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, short, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, int, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, byte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, unsigned char, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, unsigned char, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, double, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, float, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, float, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulonglong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, ulonglong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, ulong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, uint, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, uint, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ushort, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, ushort, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ubyte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, ubyte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, longlong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, longlong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, long, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, short, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, short, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, byte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, byte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__prod__i_X, , 2, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_arr, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__prod__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, , 4, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, , 5, out, int, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, int, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMin__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMin__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMax__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMax__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, , 9, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, , 8, out, int, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, int, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___ST__i__i, , 3, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, int, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___ST__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___AM_AM__bl__bl, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___AM_AM__bl__bl, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));



/*
 *  global objects
 */

/*
 * ND_OBJDEF_EXTERN( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Rapl__TheRaplObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Rapl__TheRaplObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Rapl__TheRaplObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Freq__TheFreqObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Freq__TheFreqObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Freq__TheFreqObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_CommandLine__TheCommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_CommandLine__TheCommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_CommandLine__TheCommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()



/*
 *  function definitions (FUNDEFS)
 */



/****************************************************************************
 * Wrapper function:
 * _MAIN::SACwf__MAIN__main(...) [ wrapper ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACwf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN__main, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_cwc_110, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACwf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN::SACf__MAIN__test(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN__test, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN__test, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_ND_DECL_CONST__DATA((SACp_emal_2554__isaa_394__rso_77_TheFreqObject, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
    /*
     * ND_DECL( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 1, 3)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0) = 3;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 3;
    const int SAC_ND_A_MIRROR_DIM( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 1, 4)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0) = 4;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 4;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf_MTClock__touch, , 0)
     */
    SAC_ND_FUNAP2( SACf_MTClock__touch, )

    /*
     * ND_FUN_AP( SACf_Rapl__touch, , 0)
     */
    SAC_ND_FUNAP2( SACf_Rapl__touch, )

    /*
     * ND_FUN_AP( SACf_Freq__touch, , 0)
     */
    SAC_ND_FUNAP2( SACf_Freq__touch, )

    SAC_ND_ALLOC_BEGIN((SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 41, ((SAC_ND_A_DIM( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 41, ((SAC_ND_A_DIM( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 41, ((SAC_ND_A_DIM( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 41, ((SAC_ND_A_DIM( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
    /*
     * ND_ASSIGN( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_emal_2554__isaa_394__rso_77_TheFreqObject, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 106, ((SAC_ND_A_DIM( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_emal_2554__isaa_394__rso_77_TheFreqObject, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

    SAC_WL_COMPUTE_GLOB_UB0__BEGIN(SAC_MAX(1000, 0))
    SAC_WL_COMPUTE_GLOB_UB0__ONENODE()
    SAC_PF_BEGIN_WITH(fold)
    /*
     * WL_SCHEDULE__BEGIN( 4)
     */
    {
      int SAC_WL_SCHEDULE_START( 0);
      int SAC_WL_SCHEDULE_STOP( 0);
      int SAC_WL_SCHEDULE_STRIDE_START( 0);
      int SAC_WL_SCHEDULE_STRIDE_STOP( 0);
      int SAC_WL_SCHEDULE_START( 1);
      int SAC_WL_SCHEDULE_STOP( 1);
      int SAC_WL_SCHEDULE_STRIDE_START( 1);
      int SAC_WL_SCHEDULE_STRIDE_STOP( 1);
      int SAC_WL_SCHEDULE_START( 2);
      int SAC_WL_SCHEDULE_STOP( 2);
      int SAC_WL_SCHEDULE_STRIDE_START( 2);
      int SAC_WL_SCHEDULE_STRIDE_STOP( 2);
      int SAC_WL_SCHEDULE_START( 3);
      int SAC_WL_SCHEDULE_STOP( 3);
      int SAC_WL_SCHEDULE_STRIDE_START( 3);
      int SAC_WL_SCHEDULE_STRIDE_STOP( 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 1000, 500, 100, 3)
       */
      SAC_WL_SCHEDULE_START( 0) = 0;
      SAC_WL_SCHEDULE_STOP( 0) = 1000;
      SAC_WL_SCHEDULE_START( 1) = 0;
      SAC_WL_SCHEDULE_STOP( 1) = 500;
      SAC_WL_SCHEDULE_START( 2) = 0;
      SAC_WL_SCHEDULE_STOP( 2) = 100;
      SAC_WL_SCHEDULE_START( 3) = 0;
      SAC_WL_SCHEDULE_STOP( 3) = 3;

      SAC_SET_STRIDE_BOUNDS(4, 0, 0, 1000, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1000, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_SET_STRIDE_BOUNDS(4, 1, 0, 500, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(1, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 500, 1)
      SAC_WL_GRID_UNROLL_BEGIN(1, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_SET_STRIDE_BOUNDS(4, 2, 0, 100, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(2, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 100, 1)
      SAC_WL_GRID_UNROLL_BEGIN(2, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_SET_STRIDE_BOUNDS(4, 3, 0, 3, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(3, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 3, 1)
      SAC_WL_GRID_UNROLL_BEGIN(3, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_NOOP()
      SAC_ND_ALLOC_BEGIN((SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 1, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 3)
       */
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayBasics.sac", 28, 12, ((SAC_ND_A_DIM( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayBasics.sac", 28, 12, ((SAC_ND_A_SHAPE( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)) == 3), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 1, int)
      /*
       * ND_CREATE__ARRAY__DATA( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 3, (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
       */
      SAC_ND_WRITE_COPY( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, SAC_ND_READ( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, SAC_ND_READ( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), )
      SAC_ND_WRITE_COPY( (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 2, SAC_ND_READ( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), )

      SAC_ND_ALLOC_BEGIN((SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayBasics.sac", 28, 12, ((SAC_ND_A_DIM( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, int)
      /*
       * ND_PRF_IDX_SEL__DATA( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
       */
      SAC_TR_PRF_PRINT( ("ND_PRF_IDX_SEL__DATA( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))"))
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayBasics.sac", 28, 12, (SAC_ND_A_DIM( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) == (0)), "1st argument of _idx_sel_ is not a scalar!");
      SAC_ND_WRITE_READ_COPY( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_ND_READ( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), )

      SAC_ND_FREE((SACp_emal_2553__wlsb_287__pinl_197_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
      SAC_ND_PRF_SxS__DATA((SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), T_int, SAC_ND_PRF_ADD, SAC_ND_READ((SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ((SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
      /*
       * ND_UNSHARE( (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, int, )
       */
      SAC_NOOP()

      /*
       * ND_ASSIGN( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 82, ((SAC_ND_A_DIM( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_emal_2552__dup_289__wlsw_283__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ArrayReduce.sac", 40, 82, ((SAC_ND_A_DIM( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_ufiv_2528__pinl_241__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

      /*
       * WL_FOLD( (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 4, (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
       */
      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] -- fold", SAC_ND_READ( (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ( (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ( (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ( (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)));
      /* fold operation */

      SAC_WL_GRID_UNROLL_END(3, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(3, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 3, 1)
      SAC_WL_GRID_UNROLL_END(2, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(2, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 100, 1)
      SAC_WL_GRID_UNROLL_END(1, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(1, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 500, 1)
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_225_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1000, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 1000, 500, 100, 3)
       */


      /*
       * WL_SCHEDULE__END( 4)
       */
    }

    SAC_PF_END_WITH(fold)
    SAC_ND_LABEL(_comp_3077_SAC_label)
    SAC_WL_COMPUTE_GLOB_UB0__END()
    SAC_ND_FREE((SACp_pinl_228__eat_95, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_ND_FREE((SACp_pinl_229__eat_96, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_ND_FREE((SACp_pinl_230__eat_97, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_ND_FREE((SACp_pinl_231__eat_98, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_pinl_219__flat_57, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN__test, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN::SACf__MAIN__main(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), int))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    /*
     * ND_DECL( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, -3)
     */
    SAC_ND_DECL__DATA( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
    const int SAC_ND_A_MIRROR_DIM( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    /*
     * ND_DECL( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, -2)
     */
    SAC_ND_DECL__DATA( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, )
    SAC_ND_DECL__DESC( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;

    /*
     * ND_DECL( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, -2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, )
    SAC_ND_DECL__DESC( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;

    /*
     * ND_DECL( (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, )
    SAC_ND_DECL__DESC( (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, -2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, )
    SAC_ND_DECL__DESC( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;
    int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 0;

    /*
     * ND_DECL( (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, )
    SAC_ND_DECL__DESC( (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SACarg *, )
    SAC_ND_DECL__DESC( (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, -3)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, )
    SAC_ND_DECL__DESC( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, )
    SAC_ND_DECL__DESC( (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, )
    SAC_ND_DECL__DESC( (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, )
    SAC_ND_DECL__DESC( (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), long, )
    SAC_ND_DECL__DESC( (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, -3)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), longlong, )
    SAC_ND_DECL__DESC( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), ulong, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), ulong, )
    SAC_ND_DECL__DESC( (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, -3)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0);
    int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))));
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_pinl_3023__emal_2562__dlirmov_2503__flat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 9)
    /*
     * ND_DECL( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, 1, 10)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = 10;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 10;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_pinl_3021__emal_2560__dlirmov_2515__flat_63, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 33)
    /*
     * ND_DECL( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, 1, 34)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    const int SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = 34;
    const int SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 34;
    const int SAC_ND_A_MIRROR_DIM( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_emal_2558__isaa_414__rso_80_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
    /*
     * ND_DECL( (SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), bool, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), bool, )
    SAC_ND_DECL__DESC( (SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
    SAC_ND_DECL__DESC( (SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_INIT__init, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_INIT__init, )

    /*
     * ND_FUN_AP( SACargc, SACp_flat_10, 0)
     */
    SACp_flat_10 = SACargc();

    SAC_ND_ALLOC__DESC((SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
    /*
     * ND_REFRESH__MIRROR( (SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_SET__RC((SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1)
    SAC_ND_PRF_SxS__DATA((SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), T_int, SAC_ND_PRF_ADD, -1, SAC_ND_READ((SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0))
    SAC_ND_DEC_RC_FREE((SACp_flat_10, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
    /*
     * ND_FUN_AP( SACargv, SACp_flat_8, 1, in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SACp_flat_8 = SACargv( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int));

    SAC_ND_ALLOC__DESC((SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
    /*
     * ND_REFRESH__MIRROR( (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_SET__RC((SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_emal_2557__pinl_242__flat_209, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
    /*
     * ND_FUN_AP( SACtoi, SACl_iter, 1, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SACl_iter = SACtoi( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden));

    SAC_ND_ALLOC__DESC((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
    /*
     * ND_REFRESH__MIRROR( (SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_SET__RC((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_flat_8, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, free_string)
    SAC_ND_PRF_S__DATA((SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_ND_PRF_NEG, SAC_ND_READ((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0))
    SAC_ND_PRF_SxS__DATA((SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), T_int, SAC_ND_PRF_LT, SAC_ND_READ((SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), 0)
    SAC_ND_FREE((SACp_emal_2556__esd_305, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    if (SAC_ND_GETVAR((SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), SACp_emal_2555__pinl_243__flat_306)) 
    { 
      SAC_ND_FREE((SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 10)
       */
      SAC_ASSURE_TYPE_LINE ("test.sac", 1, 1, ((SAC_ND_A_DIM( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("test.sac", 1, 1, ((SAC_ND_A_SHAPE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0)) == 10), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
      SAC_ND_CREATE__STRING__DATA((SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), "res = %d\n")
      /*
       * ND_ASSIGN( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), -3, (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/test.sac", 24, 16, ((SAC_ND_A_DIM( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_DESC( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_A_MIRROR_SHAPE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_SIZE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_A_DESC_SHAPE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
      SAC_ND_A_DESC_SIZE( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_SIZE( (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_ASSIGN__DATA( (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), (SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )

      /*
       * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3023__emal_2562__dlirmov_2503__flat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
       */
      SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_3076_SACp_pinl_3022__emal_2561__dlirmov_2513__flat_14, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3023__emal_2562__dlirmov_2503__flat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
       */
      SAC_NOOP()

      SAC_ND_DEC_RC_FREE((SACp_pinl_3023__emal_2562__dlirmov_2503__flat_25, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
      SAC_ND_ALLOC_BEGIN((SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
      /*
       * ND_SET__SHAPE_arr( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 34)
       */
      SAC_ASSURE_TYPE_LINE ("test.sac", 1, 1, ((SAC_ND_A_DIM( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ASSURE_TYPE_LINE ("test.sac", 1, 1, ((SAC_ND_A_SHAPE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0)) == 34), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
      SAC_ND_CREATE__STRING__DATA((SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), "%d threads, %fs, %fJ, %lu cycles\n")
      /*
       * ND_ASSIGN( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), -3, (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/test.sac", 33, 16, ((SAC_ND_A_DIM( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
      SAC_ND_A_DESC( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_DESC( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_A_MIRROR_SHAPE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
      SAC_ND_A_MIRROR_SIZE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_SIZE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_A_DESC_SHAPE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = SAC_ND_A_SHAPE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0);
      SAC_ND_A_DESC_SIZE( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = SAC_ND_A_SIZE( (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))));
      SAC_ND_ASSIGN__DATA( (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), (SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )

      /*
       * ND_FUN_AP( to_string, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in, unsigned char, SAC_SET_NT_USG( FAG, (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3021__emal_2560__dlirmov_2515__flat_63, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
       */
      SAC_ND_FUNAP2( to_string,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_3075_SACp_pinl_3020__emal_2559__dlirmov_2526__flat_28, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3021__emal_2560__dlirmov_2515__flat_63, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int))

      /*
       * ND_REFRESH__MIRROR( (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
       */
      SAC_NOOP()

      SAC_ND_DEC_RC_FREE((SACp_pinl_3021__emal_2560__dlirmov_2515__flat_63, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
      SAC_ND_COPY__DATA((SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_emal_2558__isaa_414__rso_80_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
      /*
       * ND_ASSIGN( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/test.sac", 19, 5, ((SAC_ND_A_DIM( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_3024__emlr_2931_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("./src/test.sac", 19, 5, ((SAC_ND_A_DIM( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_3064_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

      SAC_ND_GOTO(_dup_3065__f2l_2967_label)
      do 
      { 
        SAC_ND_FREE((SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
        /*
         * ND_ASSIGN( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("./src/test.sac", 19, 5, ((SAC_ND_A_DIM( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

        SAC_ND_LABEL(_dup_3065__f2l_2967_label)
        SAC_ND_INC_RC((SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
        SAC_ND_INC_RC((SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
        /*
         * ND_FUN_AP( cyclesStart, SACp_pinl_3036_fd, 0)
         */
        SACp_pinl_3036_fd = cyclesStart();

        SAC_ND_ALLOC__DESC((SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1)
        /*
         * ND_FUN_AP( raplStart, SACp_pinl_3050__iswc_155_rapl, 0)
         */
        SACp_pinl_3050__iswc_155_rapl = raplStart();

        SAC_ND_ALLOC__DESC((SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
        /*
         * ND_FUN_AP( SACARGunwrapLonglong, , 2, out, longlong, SAC_SET_NT_USG( FAG, (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), in, SACarg *, SAC_SET_NT_USG( FAG, (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
         */
        SAC_ND_FUNAP2( SACARGunwrapLonglong,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), longlong), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3050__iswc_155_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SACarg *))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), -2)
         */
        SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DESC_SIZE( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_A_MIRROR_DIM( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DESC_DIM( (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));

        SAC_ND_PRF_TYPE_CONV__AKD_START("./src/test.sac:21\nCan not assign longlong[*] SACp_pinl_3051__iswc_156_rapl to longlong[.] SACp_pinl_3035_rapl type mismatch\n", (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        SAC_ND_PRF_TYPE_CONV__AKD_SHAPE(0, (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        SAC_ND_PRF_TYPE_CONV__AKD_END("./src/test.sac:21\nCan not assign longlong[*] SACp_pinl_3051__iswc_156_rapl to longlong[.] SACp_pinl_3035_rapl type mismatch\n", (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3051__iswc_156_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        /*
         * ND_FUN_AP( SAC_MTClock_gettime, , 2, out_nodesc, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), out_nodesc, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))))
         */
        SAC_ND_FUNAP2( SAC_MTClock_gettime,  SAC_ND_ARG_out_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long), SAC_ND_ARG_out_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long))

        SAC_ND_ALLOC__DESC((SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 1)
        SAC_ND_ALLOC__DESC((SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 1)
        /*
         * ND_FUN_AP( SACf__MAIN__test, , 1, out, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
         */
        SAC_ND_FUNAP2( SACf__MAIN__test,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
         */
        SAC_NOOP()

        /*
         * ND_FUN_AP( SACprintf_TF, , 2, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
         */
        SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int))

        SAC_ND_DEC_RC_FREE((SACp_pinl_3037__flat_26, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
        /*
         * ND_FUN_AP( SAC_MTClock_gettime, , 2, out_nodesc, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), out_nodesc, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))))
         */
        SAC_ND_FUNAP2( SAC_MTClock_gettime,  SAC_ND_ARG_out_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long), SAC_ND_ARG_out_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long))

        SAC_ND_ALLOC__DESC((SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 1)
        SAC_ND_ALLOC__DESC((SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, ))))))))), 1)
        /*
         * ND_ASSIGN( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), -2, (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), -3, )
         */
        SAC_ND_A_DESC( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DESC( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_A_MIRROR_SIZE( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_SIZE( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_A_MIRROR_DIM( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DIM( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_A_DESC_DIM( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DIM( (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_ASSIGN__DATA( (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3035_rapl, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), )

        /*
         * ND_FUN_AP( SACARGwrapLonglong, , 2, out, SACarg *, SAC_SET_NT_USG( FAG, (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in, longlong, SAC_SET_NT_USG( FAG, (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))))
         */
        SAC_ND_FUNAP2( SACARGwrapLonglong,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SACarg *), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (_tcp_3074_SACp_pinl_3035_rapl, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), longlong))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
         */
        SAC_NOOP()

        /*
         * ND_FUN_AP( raplStop, SACp_pinl_3048__iswc_153_energy_uj, 1, in_nodesc, SACarg *, SAC_SET_NT_USG( FAG, (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
         */
        SACp_pinl_3048__iswc_153_energy_uj = raplStop( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SACarg *));

        SAC_ND_ALLOC__DESC((SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
        SAC_ND_DEC_RC_FREE((SACp_pinl_3047__iswc_152_rapl, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, )
        /*
         * ND_FUN_AP( SACARGunwrapLonglong, , 2, out, longlong, SAC_SET_NT_USG( FAG, (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), in, SACarg *, SAC_SET_NT_USG( FAG, (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
         */
        SAC_ND_FUNAP2( SACARGunwrapLonglong,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), longlong), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3048__iswc_153_energy_uj, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SACarg *))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), -2)
         */
        SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DESC_SIZE( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));
        SAC_ND_A_MIRROR_DIM( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))) = SAC_ND_A_DESC_DIM( (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))));

        SAC_ND_PRF_TYPE_CONV__AKD_START("./src/test.sac:27\nCan not assign longlong[*] SACp_pinl_3049__iswc_154_energy_uj to longlong[.] SACp_pinl_3030_energy_uj type mismatch\n", (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        SAC_ND_PRF_TYPE_CONV__AKD_SHAPE(0, (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        SAC_ND_PRF_TYPE_CONV__AKD_END("./src/test.sac:27\nCan not assign longlong[*] SACp_pinl_3049__iswc_154_energy_uj to longlong[.] SACp_pinl_3030_energy_uj type mismatch\n", (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))), (SACp_pinl_3049__iswc_154_energy_uj, (AUD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, ))))))))))
        /*
         * ND_FUN_AP( cyclesStop, SACp_pinl_3029_cycles, 1, in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
         */
        SACp_pinl_3029_cycles = cyclesStop( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int));

        SAC_ND_ALLOC__DESC((SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), 1)
        SAC_ND_DEC_RC_FREE((SACp_pinl_3036_fd, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
        /*
         * ND_FUN_AP( numThreads, SACp_pinl_3028_threads, 0)
         */
        SACp_pinl_3028_threads = numThreads();

        SAC_ND_ALLOC__DESC((SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
         */
        SAC_NOOP()

        SAC_ND_SET__RC((SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1)
        /*
         * ND_FUN_AP( SACf_MTClock__timediff__l__l__l__l, , 5, out, double, SAC_SET_NT_USG( FAG, (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), in, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), in, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), in, long, SAC_SET_NT_USG( FAG, (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))))
         */
        SAC_ND_FUNAP2( SACf_MTClock__timediff__l__l__l__l,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3034_sec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3033_nsec1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3032_sec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3031_nsec2, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LON, )))))))))), long))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
         */
        SAC_NOOP()

        /*
         * ND_FUN_AP( SACf_Rapl__tod__ll_X, , 2, out, double, SAC_SET_NT_USG( FAG, (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in, longlong, SAC_SET_NT_USG( FAG, (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))))
         */
        SAC_ND_FUNAP2( SACf_Rapl__tod__ll_X,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_pinl_3030_energy_uj, (AKD, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (LLO, )))))))))), longlong))

        /*
         * ND_REFRESH__MIRROR( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), -3)
         */
        SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0) = SAC_ND_A_DESC_SHAPE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0);
        SAC_ND_A_MIRROR_SIZE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))) = SAC_ND_A_DESC_SIZE( (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))));

        /*
         * ND_FUN_AP( SACprintf_TF, , 5, in_nodesc, SAC_hidden, SAC_SET_NT_USG( FAG, (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in_nodesc, int, SAC_SET_NT_USG( FAG, (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in_nodesc, ulong, SAC_SET_NT_USG( FAG, (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, )))))))))))
         */
        SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), int), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, )))))))))), ulong))

        SAC_ND_DEC_RC_FREE((SACp_pinl_3029_cycles, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (ULO, ))))))))), 1, )
        SAC_ND_DEC_RC_FREE((SACp_pinl_3026_energy, (AKD, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
        SAC_ND_DEC_RC_FREE((SACp_pinl_3027_seconds, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
        SAC_ND_DEC_RC_FREE((SACp_pinl_3028_threads, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
        /*
         * ND_ASSIGN( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, )
         */
        SAC_ASSURE_TYPE_LINE ("//Stdlib/build/src-seq/structures/ScalarArith.sac", 83, 37, ((SAC_ND_A_DIM( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
        SAC_NOOP()
        SAC_NOOP()
        SAC_NOOP()
        SAC_ND_ASSIGN__DATA( (SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )

        SAC_ND_PRF_SxS__DATA((SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), T_int, SAC_ND_PRF_ADD, 1, SAC_ND_READ((SACp_pinl_3058__f2l_2961_i, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0))
        SAC_ND_PRF_SxS__DATA((SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), T_int, SAC_ND_PRF_SUB, SAC_ND_READ((SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0))
        SAC_ND_PRF_SxS__DATA((SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), T_int, SAC_ND_PRF_LT, SAC_ND_READ((SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), 0)
        SAC_ND_FREE((SACp_pinl_3056__emal_2564__ctz_303, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
      }
      while (SAC_ND_GETVAR((SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), SACp_pinl_3055__emal_2563__pinl_245__flat_306));
      SAC_ND_FREE((SACp_pinl_3057__emal_2565__pinl_244__flat_208, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
      SAC_ND_DEC_RC_FREE((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
      SAC_ND_DEC_RC_FREE((SACp_pinl_3016__dlirmov_2514__flat_13, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, free_string)
      SAC_ND_DEC_RC_FREE((SACp_pinl_3019__dlirmov_2527__flat_27, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, free_string)
      SAC_ND_FREE((SACp_pinl_3055__emal_2563__pinl_245__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
    }
    else
    { 
      SAC_ND_DEC_RC_FREE((SACl_iter, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
      SAC_ND_FREE((SACp_emal_2555__pinl_243__flat_306, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (BOO, ))))))))), )
    }
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_emal_2558__isaa_414__rso_80_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_emal_2558__isaa_414__rso_80_TheWorld, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN__main, , 1, out, int, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * _MAIN:_INIT::SACf__MAIN_CL_INIT__init(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_INIT__init, , 0)
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_INIT__init, void, void)
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_CommandLine_CL_INIT__init_TheCommandLine__SACt_CommandLine__CommandLine, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_CommandLine__TheCommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_CommandLine_CL_INIT__init_TheCommandLine__SACt_CommandLine__CommandLine,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_CommandLine__TheCommandLine, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Freq_CL_INIT__init_TheFreqObject__SACt_Freq__Freq, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Freq__TheFreqObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Freq_CL_INIT__init_TheFreqObject__SACt_Freq__Freq,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Freq__TheFreqObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Rapl_CL_INIT__init_TheRaplObject__SACt_Rapl__Rapl, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Rapl__TheRaplObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Rapl_CL_INIT__init_TheRaplObject__SACt_Rapl__Rapl,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Rapl__TheRaplObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_INIT__init, , 0)
   */
}
SAC_ND_FUN_DEF_END2()



/*
 *  FFI wrap/unwrap/is functions (TYPEDEFS)
 */

int main( int __argc, char *__argv[])
{
  SAC_ND_DECL__DATA( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int, )
  SAC_ND_DECL__DESC( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
  SAC_NOTHING()
  SAC_HWLOC_SETUP();
  SAC_MT_SETUP_INITIAL();
  SAC_RTSPEC_SETUP_INITIAL(0, " src/test.sac -o bin/test", "sac2c");
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SAC_RTSPEC_SETUP();
  SAC_COMMANDLINE_SET( __argc, __argv);

  SAC_INVOKE_MAIN_FUN( SACf__MAIN__main, SAC_ND_ARG_out( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int));

  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_MT_FINALIZE();
  SAC_HWLOC_FINALIZE();
  SAC_HM_PRINT();

  SAC_RTSPEC_FINALIZE();

  return( SAC_ND_READ( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0));
}
