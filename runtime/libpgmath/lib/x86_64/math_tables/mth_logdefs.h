/*
 * Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

MTHINTRIN(log  , ss   , em64t      , __mth_i_alog          , __mth_i_alog          , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , em64t      , __mth_i_dlog          , __mth_i_dlog          , __mth_i_dlog          ,__math_dispatch_error)
MTHINTRIN(log  , sv4  , em64t      , __fvslog              , __fvslog              , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , em64t      , __fvdlog              , __fvdlog              , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , em64t      , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , em64t      , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)

MTHINTRIN(log  , ss   , sse4       , __fss_log             , __fss_log             , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , sse4       , __fsd_log             , __fsd_log             , __mth_i_dlog          ,__math_dispatch_error)
MTHINTRIN(log  , sv4  , sse4       , __fvs_log             , __fvs_log             , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , sse4       , __fvd_log             , __fvd_log             , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , sse4       , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , sse4       , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)

MTHINTRIN(log  , ss   , avx        , __fss_log_vex         , __fss_log_vex         , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx        , __fsd_log_vex         , __fsd_log_vex         , __mth_i_dlog          ,__math_dispatch_error)
MTHINTRIN(log  , sv4  , avx        , __fvs_log_vex         , __fvs_log_vex         , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , avx        , __fvd_log_vex         , __fvd_log_vex         , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv8  , avx        , __fvs_log_vex_256     , __fvs_log_vex_256     , __gs_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv4  , avx        , __fvd_log_vex_256     , __fvd_log_vex_256     , __gd_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , avx        , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , avx        , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv8m , avx        , __fs_log_8_mn         , __rs_log_8_mn         , __ps_log_8_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv4m , avx        , __fd_log_4_mn         , __rd_log_4_mn         , __pd_log_4_mn         ,__math_dispatch_error)

MTHINTRIN(log  , ss   , avxfma4    , __fss_log_fma4        , __fss_log_fma4        , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avxfma4    , __fsd_log_fma4        , __fsd_log_fma4        , __mth_i_dlog          ,__math_dispatch_error)
MTHINTRIN(log  , sv4  , avxfma4    , __fvs_log_fma4        , __fvs_log_fma4        , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , avxfma4    , __fvd_log_fma4        , __fvd_log_fma4        , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv8  , avxfma4    , __fvs_log_fma4_256    , __fvs_log_fma4_256    , __gs_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv4  , avxfma4    , __fvd_log_fma4_256    , __fvd_log_fma4_256    , __gd_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , avxfma4    , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , avxfma4    , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv8m , avxfma4    , __fs_log_8_mn         , __rs_log_8_mn         , __ps_log_8_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv4m , avxfma4    , __fd_log_4_mn         , __rd_log_4_mn         , __pd_log_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(log  , ss   , avx2       , __fss_log_fma3        , __rss_log_fma3        , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx2       , __fsd_log_fma3        , __fsd_log_fma3        , __mth_i_dlog          ,__math_dispatch_error)
#else
MTHINTRIN(log  , ss   , avx2       , __fss_log_fma3        , __rss_log_fma3        , __mth_i_log_avx2      ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx2       , __fsd_log_fma3        , __fsd_log_fma3        , __mth_i_dlog_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(log  , sv4  , avx2       , __fvs_log_fma3        , __rvs_log_fma3        , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , avx2       , __fvd_log_fma3        , __fvd_log_fma3        , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv8  , avx2       , __fvs_log_fma3_256    , __rvs_log_fma3_256    , __gs_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv4  , avx2       , __fvd_log_fma3_256    , __fvd_log_fma3_256    , __gd_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , avx2       , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , avx2       , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv8m , avx2       , __fs_log_8_mn         , __rs_log_8_mn         , __ps_log_8_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv4m , avx2       , __fd_log_4_mn         , __rd_log_4_mn         , __pd_log_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(log  , ss   , avx512knl  , __fss_log_vex         , __rss_log_fma3        , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx512knl  , __fsd_log_vex         , __fsd_log_vex         , __mth_i_dlog          ,__math_dispatch_error)
#else
MTHINTRIN(log  , ss   , avx512knl  , __fss_log_vex         , __rss_log_fma3        , __mth_i_log_avx2      ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx512knl  , __fsd_log_vex         , __fsd_log_vex         , __mth_i_dlog_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(log  , sv4  , avx512knl  , __fvs_log_vex         , __rvs_log_fma3        , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , avx512knl  , __fvd_log_vex         , __fvd_log_vex         , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv8  , avx512knl  , __fvs_log_vex_256     , __rvs_log_fma3_256    , __gs_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv4  , avx512knl  , __fvd_log_vex_256     , __fvd_log_vex_256     , __gd_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv16 , avx512knl  , __fvs_log_evex_512    , __fvs_log_evex_512    , __gs_log_16_p         ,__math_dispatch_error)
MTHINTRIN(log  , dv8  , avx512knl  , __fvd_log_evex_512    , __fvd_log_evex_512    , __gd_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , avx512knl  , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , avx512knl  , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv8m , avx512knl  , __fs_log_8_mn         , __rs_log_8_mn         , __ps_log_8_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv4m , avx512knl  , __fd_log_4_mn         , __rd_log_4_mn         , __pd_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv16m, avx512knl  , __fs_log_16_mn        , __rs_log_16_mn        , __ps_log_16_mn        ,__math_dispatch_error)
MTHINTRIN(log  , dv8m , avx512knl  , __fd_log_8_mn         , __rd_log_8_mn         , __pd_log_8_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(log  , ss   , avx512     , __fss_log_vex         , __rss_log_fma3        , __mth_i_log           ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx512     , __fsd_log_vex         , __fsd_log_vex         , __mth_i_dlog          ,__math_dispatch_error)
#else
MTHINTRIN(log  , ss   , avx512     , __fss_log_vex         , __rss_log_fma3        , __mth_i_log_avx2      ,__math_dispatch_error)
MTHINTRIN(log  , ds   , avx512     , __fsd_log_vex         , __fsd_log_vex         , __mth_i_dlog_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(log  , sv4  , avx512     , __fvs_log_vex         , __rvs_log_fma3        , __gs_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv2  , avx512     , __fvd_log_vex         , __fvd_log_vex         , __gd_log_2_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv8  , avx512     , __fvs_log_vex_256     , __rvs_log_fma3_256    , __gs_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , dv4  , avx512     , __fvd_log_vex_256     , __fvd_log_vex_256     , __gd_log_4_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv16 , avx512     , __fvs_log_evex_512    , __fvs_log_evex_512    , __gs_log_16_p         ,__math_dispatch_error)
MTHINTRIN(log  , dv8  , avx512     , __fvd_log_evex_512    , __fvd_log_evex_512    , __gd_log_8_p          ,__math_dispatch_error)
MTHINTRIN(log  , sv4m , avx512     , __fs_log_4_mn         , __rs_log_4_mn         , __ps_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv2m , avx512     , __fd_log_2_mn         , __rd_log_2_mn         , __pd_log_2_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv8m , avx512     , __fs_log_8_mn         , __rs_log_8_mn         , __ps_log_8_mn         ,__math_dispatch_error)
MTHINTRIN(log  , dv4m , avx512     , __fd_log_4_mn         , __rd_log_4_mn         , __pd_log_4_mn         ,__math_dispatch_error)
MTHINTRIN(log  , sv16m, avx512     , __fs_log_16_mn        , __rs_log_16_mn        , __ps_log_16_mn        ,__math_dispatch_error)
MTHINTRIN(log  , dv8m , avx512     , __fd_log_8_mn         , __rd_log_8_mn         , __pd_log_8_mn         ,__math_dispatch_error)

MTHINTRIN(log , cs   , em64t       , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , em64t       , clog                  , clog                  , clog                 ,__math_dispatch_error)
MTHINTRIN(log , zv1  , em64t       , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , em64t       , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , sse4        , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , sse4        , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , sse4        , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , sse4        , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , avx         , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , avx         , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , avx         , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , avx         , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cv4  , avx         , __gc_log_4_f          , __gc_log_4_r          , __gc_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , zv2  , avx         , __gz_log_2_f          , __gz_log_2_r          , __gz_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , avxfma4     , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , avxfma4     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , avxfma4     , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , avxfma4     , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cv4  , avxfma4     , __gc_log_4_f          , __gc_log_4_r          , __gc_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , zv2  , avxfma4     , __gz_log_2_f          , __gz_log_2_r          , __gz_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , avx2        , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , avx2        , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , avx2        , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , avx2        , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cv4  , avx2        , __gc_log_4_f          , __gc_log_4_r          , __gc_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , zv2  , avx2        , __gz_log_2_f          , __gz_log_2_r          , __gz_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , avx512knl   , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , avx512knl   , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , avx512knl   , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , avx512knl   , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cv4  , avx512knl   , __gc_log_4_f          , __gc_log_4_r          , __gc_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , cv8  , avx512knl   , __gc_log_8_f          , __gc_log_8_r          , __gc_log_8_p         ,__math_dispatch_error)
MTHINTRIN(log , zv2  , avx512knl   , __gz_log_2_f          , __gz_log_2_r          , __gz_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , zv4  , avx512knl   , __gz_log_4_f          , __gz_log_4_r          , __gz_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , cs   , avx512      , clogf                 , clogf                 , clogf                ,__math_dispatch_error)
MTHINTRIN(log , zs   , avx512      , __mth_i_cdlog_c99     , __mth_i_cdlog_c99     , __mth_i_cdlog_c99    ,__math_dispatch_error)
MTHINTRIN(log , zv1  , avx512      , __gz_log_1v_f         , __gz_log_1v_r         , __gz_log_1v_p        ,__math_dispatch_error)
MTHINTRIN(log , cv2  , avx512      , __gc_log_2_f          , __gc_log_2_r          , __gc_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , cv4  , avx512      , __gc_log_4_f          , __gc_log_4_r          , __gc_log_4_p         ,__math_dispatch_error)
MTHINTRIN(log , cv8  , avx512      , __gc_log_8_f          , __gc_log_8_r          , __gc_log_8_p         ,__math_dispatch_error)
MTHINTRIN(log , zv2  , avx512      , __gz_log_2_f          , __gz_log_2_r          , __gz_log_2_p         ,__math_dispatch_error)
MTHINTRIN(log , zv4  , avx512      , __gz_log_4_f          , __gz_log_4_r          , __gz_log_4_p         ,__math_dispatch_error)
