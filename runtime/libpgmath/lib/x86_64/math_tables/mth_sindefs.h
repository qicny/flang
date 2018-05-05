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

MTHINTRIN(sin  , ss   , em64t      , __mth_i_sin           , __mth_i_sin           , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , em64t      , __mth_i_dsin          , __mth_i_dsin          , __mth_i_dsin          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4  , em64t      , __fvssin              , __fvssin              , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , em64t      , __fvdsin              , __fvdsin              , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , em64t      , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , em64t      , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)

MTHINTRIN(sin  , ss   , sse4       , __fss_sin             , __fss_sin             , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , sse4       , __fsd_sin             , __fsd_sin             , __mth_i_dsin          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4  , sse4       , __fvs_sin             , __fvs_sin             , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , sse4       , __fvd_sin             , __fvd_sin             , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , sse4       , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , sse4       , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)

MTHINTRIN(sin  , ss   , avx        , __fss_sin_vex         , __fss_sin_vex         , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx        , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4  , avx        , __fvs_sin_vex         , __fvs_sin_vex         , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , avx        , __fvd_sin_vex         , __fvd_sin_vex         , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv8  , avx        , __fvs_sin_vex_256     , __fvs_sin_vex_256     , __gs_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv4  , avx        , __fvd_sin_vex_256     , __fvd_sin_vex_256     , __gd_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , avx        , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , avx        , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv8m , avx        , __fs_sin_8_mn         , __rs_sin_8_mn         , __ps_sin_8_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv4m , avx        , __fd_sin_4_mn         , __rd_sin_4_mn         , __pd_sin_4_mn         ,__math_dispatch_error)

MTHINTRIN(sin  , ss   , avxfma4    , __fss_sin_fma4        , __fss_sin_fma4        , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avxfma4    , __fsd_sin_fma4        , __fsd_sin_fma4        , __mth_i_dsin          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4  , avxfma4    , __fvs_sin_fma4        , __fvs_sin_fma4        , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , avxfma4    , __fvd_sin_fma4        , __fvd_sin_fma4        , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv8  , avxfma4    , __fvs_sin_fma4_256    , __fvs_sin_fma4_256    , __gs_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv4  , avxfma4    , __fvd_sin_fma4_256    , __fvd_sin_fma4_256    , __gd_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , avxfma4    , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , avxfma4    , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv8m , avxfma4    , __fs_sin_8_mn         , __rs_sin_8_mn         , __ps_sin_8_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv4m , avxfma4    , __fd_sin_4_mn         , __rd_sin_4_mn         , __pd_sin_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(sin  , ss   , avx2       , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx2       , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin          ,__math_dispatch_error)
#else
MTHINTRIN(sin  , ss   , avx2       , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin_avx2      ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx2       , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(sin  , sv4  , avx2       , __fs_sin_4_avx2       , __fvs_sin_vex         , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , avx2       , __fvd_sin_vex         , __fvd_sin_vex         , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv8  , avx2       , __fs_sin_8_avx2       , __fvs_sin_vex_256     , __gs_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv4  , avx2       , __fvd_sin_vex_256     , __fvd_sin_vex_256     , __gd_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , avx2       , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , avx2       , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv8m , avx2       , __fs_sin_8_mn         , __rs_sin_8_mn         , __ps_sin_8_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv4m , avx2       , __fd_sin_4_mn         , __rd_sin_4_mn         , __pd_sin_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(sin  , ss   , avx512knl  , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx512knl  , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin          ,__math_dispatch_error)
#else
MTHINTRIN(sin  , ss   , avx512knl  , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin_avx2      ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx512knl  , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(sin  , sv4  , avx512knl  , __fs_sin_4_avx2       , __fvs_sin_vex         , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , avx512knl  , __fvd_sin_vex         , __fvd_sin_vex         , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv8  , avx512knl  , __fs_sin_8_avx2       , __fvs_sin_vex_256     , __gs_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv4  , avx512knl  , __fvd_sin_vex_256     , __fvd_sin_vex_256     , __gd_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv16 , avx512knl  , __fs_sin_16_z2yy      , __rs_sin_16_z2yy      , __gs_sin_16_p         ,__math_dispatch_error)
MTHINTRIN(sin  , dv8  , avx512knl  , __fd_sin_8_z2yy       , __rd_sin_8_z2yy       , __gd_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , avx512knl  , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , avx512knl  , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv8m , avx512knl  , __fs_sin_8_mn         , __rs_sin_8_mn         , __ps_sin_8_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv4m , avx512knl  , __fd_sin_4_mn         , __rd_sin_4_mn         , __pd_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv16m, avx512knl  , __fs_sin_16_mn        , __rs_sin_16_mn        , __ps_sin_16_mn        ,__math_dispatch_error)
MTHINTRIN(sin  , dv8m , avx512knl  , __fd_sin_8_mn         , __rd_sin_8_mn         , __pd_sin_8_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(sin  , ss   , avx512     , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin           ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx512     , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin          ,__math_dispatch_error)
#else
MTHINTRIN(sin  , ss   , avx512     , __fs_sin_1_avx2       , __fss_sin_vex         , __mth_i_sin_avx2      ,__math_dispatch_error)
MTHINTRIN(sin  , ds   , avx512     , __fsd_sin_vex         , __fsd_sin_vex         , __mth_i_dsin_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(sin  , sv4  , avx512     , __fs_sin_4_avx2       , __fvs_sin_vex         , __gs_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv2  , avx512     , __fvd_sin_vex         , __fvd_sin_vex         , __gd_sin_2_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv8  , avx512     , __fs_sin_8_avx2       , __fvs_sin_vex_256     , __gs_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , dv4  , avx512     , __fvd_sin_vex_256     , __fvd_sin_vex_256     , __gd_sin_4_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv16 , avx512     , __fs_sin_16_avx512    , __rs_sin_16_z2yy      , __gs_sin_16_p         ,__math_dispatch_error)
MTHINTRIN(sin  , dv8  , avx512     , __fd_sin_8_z2yy       , __rd_sin_8_z2yy       , __gd_sin_8_p          ,__math_dispatch_error)
MTHINTRIN(sin  , sv4m , avx512     , __fs_sin_4_mn         , __rs_sin_4_mn         , __ps_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv2m , avx512     , __fd_sin_2_mn         , __rd_sin_2_mn         , __pd_sin_2_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv8m , avx512     , __fs_sin_8_mn         , __rs_sin_8_mn         , __ps_sin_8_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , dv4m , avx512     , __fd_sin_4_mn         , __rd_sin_4_mn         , __pd_sin_4_mn         ,__math_dispatch_error)
MTHINTRIN(sin  , sv16m, avx512     , __fs_sin_16_mn        , __rs_sin_16_mn        , __ps_sin_16_mn        ,__math_dispatch_error)
MTHINTRIN(sin  , dv8m , avx512     , __fd_sin_8_mn         , __rd_sin_8_mn         , __pd_sin_8_mn         ,__math_dispatch_error)

MTHINTRIN(sin , cs   , em64t       , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , em64t       , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , em64t       , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , em64t       , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , sse4        , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , sse4        , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , sse4        , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , sse4        , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , avx         , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , avx         , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , avx         , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , avx         , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv4  , avx         , __gc_sin_4_f          , __gc_sin_4_r          , __gc_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv2  , avx         , __gz_sin_2_f          , __gz_sin_2_r          , __gz_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , avxfma4     , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , avxfma4     , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , avxfma4     , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , avxfma4     , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv4  , avxfma4     , __gc_sin_4_f          , __gc_sin_4_r          , __gc_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv2  , avxfma4     , __gz_sin_2_f          , __gz_sin_2_r          , __gz_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , avx2        , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , avx2        , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , avx2        , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , avx2        , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv4  , avx2        , __gc_sin_4_f          , __gc_sin_4_r          , __gc_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv2  , avx2        , __gz_sin_2_f          , __gz_sin_2_r          , __gz_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , avx512knl   , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , avx512knl   , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , avx512knl   , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , avx512knl   , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv4  , avx512knl   , __gc_sin_4_f          , __gc_sin_4_r          , __gc_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv8  , avx512knl   , __gc_sin_8_f          , __gc_sin_8_r          , __gc_sin_8_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv2  , avx512knl   , __gz_sin_2_f          , __gz_sin_2_r          , __gz_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv4  , avx512knl   , __gz_sin_4_f          , __gz_sin_4_r          , __gz_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , cs   , avx512      , csinf                 , csinf                 , csinf                ,__math_dispatch_error)
MTHINTRIN(sin , zs   , avx512      , csin                  , csin                  , csin                 ,__math_dispatch_error)
MTHINTRIN(sin , zv1  , avx512      , __gz_sin_1v_f         , __gz_sin_1v_r         , __gz_sin_1v_p        ,__math_dispatch_error)
MTHINTRIN(sin , cv2  , avx512      , __gc_sin_2_f          , __gc_sin_2_r          , __gc_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv4  , avx512      , __gc_sin_4_f          , __gc_sin_4_r          , __gc_sin_4_p         ,__math_dispatch_error)
MTHINTRIN(sin , cv8  , avx512      , __gc_sin_8_f          , __gc_sin_8_r          , __gc_sin_8_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv2  , avx512      , __gz_sin_2_f          , __gz_sin_2_r          , __gz_sin_2_p         ,__math_dispatch_error)
MTHINTRIN(sin , zv4  , avx512      , __gz_sin_4_f          , __gz_sin_4_r          , __gz_sin_4_p         ,__math_dispatch_error)
