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

MTHINTRIN(exp  , ss   , em64t      , __mth_i_exp           , __mth_i_exp           , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , em64t      , __mth_i_dexp          , __mth_i_dexp          , __mth_i_dexp          ,__math_dispatch_error)
MTHINTRIN(exp  , cs   , em64t      , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , em64t      , cexp                  , cexp                  , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , em64t      , __gz_exp_1v_f         , __gz_exp_1v_r         , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , em64t      , __fvsexp              , __fvsexp              , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , em64t      , __fvdexp              , __fvdexp              , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , em64t      , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , em64t      , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , em64t      , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)

MTHINTRIN(exp  , ss   , sse4       , __mth_i_exp           , __mth_i_exp           , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , sse4       , __fsd_exp             , __fsd_exp             , __mth_i_dexp          ,__math_dispatch_error)
MTHINTRIN(exp  , cs   , sse4       , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , sse4       , __mth_i_cdexp_c99     , __mth_i_cdexp_c99     , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , sse4       , __fsz_exp_1v          , __fsz_exp_1v          , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , sse4       , __fvs_exp             , __fvs_exp             , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , sse4       , __fvd_exp             , __fvd_exp             , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , sse4       , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , sse4       , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , sse4       , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)

MTHINTRIN(exp  , ss   , avx        , __fss_exp_vex         , __rss_exp_vex         , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx        , __fsd_exp_vex         , __rsd_exp_vex         , __mth_i_dexp          ,__math_dispatch_error)
MTHINTRIN(exp  , cs   , avx        , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , avx        , __fsz_exp_vex_c99     , __fsz_exp_vex_c99     , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , avx        , __fsz_exp_1v_vex      , __fsz_exp_1v_vex      , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , avx        , __fvs_exp_vex         , __rvs_exp_vex         , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , avx        , __fvd_exp_vex         , __rvd_exp_vex         , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , avx        , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv8  , avx        , __fvs_exp_vex_256     , __rvs_exp_vex_256     , __gs_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv4  , avx        , __fvd_exp_vex_256     , __rvd_exp_vex_256     , __gd_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv4  , avx        , __gc_exp_4_f          , __gc_exp_4_r          , __gc_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv2  , avx        , __fvz_exp_vex         , __fvz_exp_vex         , __gz_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , avx        , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , avx        , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv8m , avx        , __fs_exp_8_mn         , __rs_exp_8_mn         , __ps_exp_8_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv4m , avx        , __fd_exp_4_mn         , __rd_exp_4_mn         , __pd_exp_4_mn         ,__math_dispatch_error)

MTHINTRIN(exp  , ss   , avxfma4    , __fss_exp_fma4        , __rss_exp_fma4        , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avxfma4    , __fsd_exp_fma4        , __rsd_exp_fma4        , __mth_i_dexp          ,__math_dispatch_error)
MTHINTRIN(exp  , cs   , avxfma4    , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , avxfma4    , __fsz_exp_fma4_c99    , __fsz_exp_fma4_c99    , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , avxfma4    , __fsz_exp_1v_fma4     , __fsz_exp_1v_fma4     , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , avxfma4    , __fvs_exp_fma4        , __rvs_exp_fma4        , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , avxfma4    , __fvd_exp_fma4        , __rvd_exp_fma4        , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , avxfma4    , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv8  , avxfma4    , __fvs_exp_fma4_256    , __rvs_exp_fma4_256    , __gs_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv4  , avxfma4    , __fvd_exp_fma4_256    , __rvd_exp_fma4_256    , __gd_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv4  , avxfma4    , __gc_exp_4_f          , __gc_exp_4_r          , __gc_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv2  , avxfma4    , __fvz_exp_fma4        , __fvz_exp_fma4        , __gz_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , avxfma4    , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , avxfma4    , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv8m , avxfma4    , __fs_exp_8_mn         , __rs_exp_8_mn         , __ps_exp_8_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv4m , avxfma4    , __fd_exp_4_mn         , __rd_exp_4_mn         , __pd_exp_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(exp  , ss   , avx2       , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx2       , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp          ,__math_dispatch_error)
#else
MTHINTRIN(exp  , ss   , avx2       , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp_avx2      ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx2       , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(exp  , cs   , avx2       , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , avx2       , __fsz_exp_vex_c99     , __fsz_exp_vex_c99     , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , avx2       , __fsz_exp_1v_vex      , __fsz_exp_1v_vex      , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , avx2       , __fvs_exp_fma3        , __fvs_exp_fma3        , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , avx2       , __fvd_exp_fma3        , __fvd_exp_fma3        , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , avx2       , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv8  , avx2       , __fvs_exp_fma3_256    , __fvs_exp_fma3_256    , __gs_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv4  , avx2       , __fvd_exp_fma3_256    , __fvd_exp_fma3_256    , __gd_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv4  , avx2       , __gc_exp_4_f          , __gc_exp_4_r          , __gc_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv2  , avx2       , __fvz_exp_vex         , __fvz_exp_vex         , __gz_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , avx2       , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , avx2       , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv8m , avx2       , __fs_exp_8_mn         , __rs_exp_8_mn         , __ps_exp_8_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv4m , avx2       , __fd_exp_4_mn         , __rd_exp_4_mn         , __pd_exp_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(exp  , ss   , avx512knl  , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx512knl  , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp          ,__math_dispatch_error)
#else
MTHINTRIN(exp  , ss   , avx512knl  , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp_avx2      ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx512knl  , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(exp  , cs   , avx512knl  , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , avx512knl  , __fsz_exp_vex_c99     , __fsz_exp_vex_c99     , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , avx512knl  , __fsz_exp_1v_vex      , __fsz_exp_1v_vex      , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , avx512knl  , __fvs_exp_fma3        , __fvs_exp_fma3        , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , avx512knl  , __fvd_exp_fma3        , __fvd_exp_fma3        , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , avx512knl  , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv8  , avx512knl  , __fvs_exp_fma3_256    , __fvs_exp_fma3_256    , __gs_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv4  , avx512knl  , __fvd_exp_fma3_256    , __fvd_exp_fma3_256    , __gd_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv4  , avx512knl  , __gc_exp_4_f          , __gc_exp_4_r          , __gc_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv2  , avx512knl  , __fvz_exp_vex         , __fvz_exp_vex         , __gz_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv16 , avx512knl  , __fvs_exp_evex_512    , __fvs_exp_evex_512    , __gs_exp_16_p         ,__math_dispatch_error)
MTHINTRIN(exp  , dv8  , avx512knl  , __fvd_exp_evex_512    , __fvd_exp_evex_512    , __gd_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv8  , avx512knl  , __gc_exp_8_f          , __gc_exp_8_r          , __gc_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv4  , avx512knl  , __fvz_exp_evex_512    , __fvz_exp_evex_512    , __gz_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , avx512knl  , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , avx512knl  , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv8m , avx512knl  , __fs_exp_8_mn         , __rs_exp_8_mn         , __ps_exp_8_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv4m , avx512knl  , __fd_exp_4_mn         , __rd_exp_4_mn         , __pd_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv16m, avx512knl  , __fs_exp_16_mn        , __rs_exp_16_mn        , __ps_exp_16_mn        ,__math_dispatch_error)
MTHINTRIN(exp  , dv8m , avx512knl  , __fd_exp_8_mn         , __rd_exp_8_mn         , __pd_exp_8_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(exp  , ss   , avx512     , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp           ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx512     , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp          ,__math_dispatch_error)
#else
MTHINTRIN(exp  , ss   , avx512     , __fss_exp_fma3        , __fss_exp_fma3        , __mth_i_exp_avx2      ,__math_dispatch_error)
MTHINTRIN(exp  , ds   , avx512     , __fsd_exp_fma3        , __fsd_exp_fma3        , __mth_i_dexp_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(exp  , cs   , avx512     , cexpf                 , cexpf                 , cexpf                 ,__math_dispatch_error)
MTHINTRIN(exp  , zs   , avx512     , __fsz_exp_vex_c99     , __fsz_exp_vex_c99     , cexp                  ,__math_dispatch_error)
MTHINTRIN(exp  , zv1  , avx512     , __fsz_exp_1v_vex      , __fsz_exp_1v_vex      , __gz_exp_1v_p         ,__math_dispatch_error)
MTHINTRIN(exp  , sv4  , avx512     , __fvs_exp_fma3        , __fvs_exp_fma3        , __gs_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv2  , avx512     , __fvd_exp_fma3        , __fvd_exp_fma3        , __gd_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv2  , avx512     , __gc_exp_2_f          , __gc_exp_2_r          , __gc_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv8  , avx512     , __fvs_exp_fma3_256    , __fvs_exp_fma3_256    , __gs_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , dv4  , avx512     , __fvd_exp_fma3_256    , __fvd_exp_fma3_256    , __gd_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv4  , avx512     , __gc_exp_4_f          , __gc_exp_4_r          , __gc_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv2  , avx512     , __fvz_exp_vex         , __fvz_exp_vex         , __gz_exp_2_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv16 , avx512     , __fvs_exp_evex_512    , __fvs_exp_evex_512    , __gs_exp_16_p         ,__math_dispatch_error)
MTHINTRIN(exp  , dv8  , avx512     , __fvd_exp_evex_512    , __fvd_exp_evex_512    , __gd_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , cv8  , avx512     , __gc_exp_8_f          , __gc_exp_8_r          , __gc_exp_8_p          ,__math_dispatch_error)
MTHINTRIN(exp  , zv4  , avx512     , __fvz_exp_evex_512    , __fvz_exp_evex_512    , __gz_exp_4_p          ,__math_dispatch_error)
MTHINTRIN(exp  , sv4m , avx512     , __fs_exp_4_mn         , __rs_exp_4_mn         , __ps_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv2m , avx512     , __fd_exp_2_mn         , __rd_exp_2_mn         , __pd_exp_2_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv8m , avx512     , __fs_exp_8_mn         , __rs_exp_8_mn         , __ps_exp_8_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , dv4m , avx512     , __fd_exp_4_mn         , __rd_exp_4_mn         , __pd_exp_4_mn         ,__math_dispatch_error)
MTHINTRIN(exp  , sv16m, avx512     , __fs_exp_16_mn        , __rs_exp_16_mn        , __ps_exp_16_mn        ,__math_dispatch_error)
MTHINTRIN(exp  , dv8m , avx512     , __fd_exp_8_mn         , __rd_exp_8_mn         , __pd_exp_8_mn         ,__math_dispatch_error)
