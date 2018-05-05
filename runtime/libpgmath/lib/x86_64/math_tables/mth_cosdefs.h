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

MTHINTRIN(cos  , ss   , em64t      , __mth_i_cos           , __mth_i_cos           , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , em64t      , __mth_i_dcos          , __mth_i_dcos          , __mth_i_dcos          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4  , em64t      , __fvscos              , __fvscos              , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , em64t      , __fvdcos              , __fvdcos              , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , em64t      , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , em64t      , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)

MTHINTRIN(cos  , ss   , sse4       , __fss_cos             , __fss_cos             , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , sse4       , __fsd_cos             , __fsd_cos             , __mth_i_dcos          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4  , sse4       , __fvs_cos             , __fvs_cos             , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , sse4       , __fvd_cos             , __fvd_cos             , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , sse4       , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , sse4       , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)

MTHINTRIN(cos  , ss   , avx        , __fss_cos_vex         , __fss_cos_vex         , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx        , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4  , avx        , __fvs_cos_vex         , __fvs_cos_vex         , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , avx        , __fvd_cos_vex         , __fvd_cos_vex         , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv8  , avx        , __fvs_cos_vex_256     , __fvs_cos_vex_256     , __gs_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv4  , avx        , __fvd_cos_vex_256     , __fvd_cos_vex_256     , __gd_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , avx        , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , avx        , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv8m , avx        , __fs_cos_8_mn         , __rs_cos_8_mn         , __ps_cos_8_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv4m , avx        , __fd_cos_4_mn         , __rd_cos_4_mn         , __pd_cos_4_mn         ,__math_dispatch_error)

MTHINTRIN(cos  , ss   , avxfma4    , __fss_cos_fma4        , __fss_cos_fma4        , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avxfma4    , __fsd_cos_fma4        , __fsd_cos_fma4        , __mth_i_dcos          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4  , avxfma4    , __fvs_cos_fma4        , __fvs_cos_fma4        , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , avxfma4    , __fvd_cos_fma4        , __fvd_cos_fma4        , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv8  , avxfma4    , __fvs_cos_fma4_256    , __fvs_cos_fma4_256    , __gs_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv4  , avxfma4    , __fvd_cos_fma4_256    , __fvd_cos_fma4_256    , __gd_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , avxfma4    , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , avxfma4    , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv8m , avxfma4    , __fs_cos_8_mn         , __rs_cos_8_mn         , __ps_cos_8_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv4m , avxfma4    , __fd_cos_4_mn         , __rd_cos_4_mn         , __pd_cos_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(cos  , ss   , avx2       , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx2       , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos          ,__math_dispatch_error)
#else
MTHINTRIN(cos  , ss   , avx2       , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos_avx2      ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx2       , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(cos  , sv4  , avx2       , __fs_cos_4_avx2       , __fvs_cos_vex         , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , avx2       , __fvd_cos_vex         , __fvd_cos_vex         , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv8  , avx2       , __fs_cos_8_avx2       , __fvs_cos_vex_256     , __gs_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv4  , avx2       , __fvd_cos_vex_256     , __fvd_cos_vex_256     , __gd_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , avx2       , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , avx2       , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv8m , avx2       , __fs_cos_8_mn         , __rs_cos_8_mn         , __ps_cos_8_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv4m , avx2       , __fd_cos_4_mn         , __rd_cos_4_mn         , __pd_cos_4_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(cos  , ss   , avx512knl  , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx512knl  , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos          ,__math_dispatch_error)
#else
MTHINTRIN(cos  , ss   , avx512knl  , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos_avx2      ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx512knl  , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(cos  , sv4  , avx512knl  , __fs_cos_4_avx2       , __fvs_cos_vex         , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , avx512knl  , __fvd_cos_vex         , __fvd_cos_vex         , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv8  , avx512knl  , __fs_cos_8_avx2       , __fvs_cos_vex_256     , __gs_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv4  , avx512knl  , __fvd_cos_vex_256     , __fvd_cos_vex_256     , __gd_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv16 , avx512knl  , __fs_cos_16_z2yy      , __rs_cos_16_z2yy      , __gs_cos_16_p         ,__math_dispatch_error)
MTHINTRIN(cos  , dv8  , avx512knl  , __fd_cos_8_z2yy       , __rd_cos_8_z2yy       , __gd_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , avx512knl  , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , avx512knl  , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv8m , avx512knl  , __fs_cos_8_mn         , __rs_cos_8_mn         , __ps_cos_8_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv4m , avx512knl  , __fd_cos_4_mn         , __rd_cos_4_mn         , __pd_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv16m, avx512knl  , __fs_cos_16_mn        , __rs_cos_16_mn        , __ps_cos_16_mn        ,__math_dispatch_error)
MTHINTRIN(cos  , dv8m , avx512knl  , __fd_cos_8_mn         , __rd_cos_8_mn         , __pd_cos_8_mn         ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(cos  , ss   , avx512     , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos           ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx512     , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos          ,__math_dispatch_error)
#else
MTHINTRIN(cos  , ss   , avx512     , __fs_cos_1_avx2       , __fss_cos_vex         , __mth_i_cos_avx2      ,__math_dispatch_error)
MTHINTRIN(cos  , ds   , avx512     , __fsd_cos_vex         , __fsd_cos_vex         , __mth_i_dcos_avx2     ,__math_dispatch_error)
#endif
MTHINTRIN(cos  , sv4  , avx512     , __fs_cos_4_avx2       , __fvs_cos_vex         , __gs_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv2  , avx512     , __fvd_cos_vex         , __fvd_cos_vex         , __gd_cos_2_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv8  , avx512     , __fs_cos_8_avx2       , __fvs_cos_vex_256     , __gs_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , dv4  , avx512     , __fvd_cos_vex_256     , __fvd_cos_vex_256     , __gd_cos_4_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv16 , avx512     , __fs_cos_16_avx512    , __rs_cos_16_z2yy      , __gs_cos_16_p         ,__math_dispatch_error)
MTHINTRIN(cos  , dv8  , avx512     , __fd_cos_8_z2yy       , __rd_cos_8_z2yy       , __gd_cos_8_p          ,__math_dispatch_error)
MTHINTRIN(cos  , sv4m , avx512     , __fs_cos_4_mn         , __rs_cos_4_mn         , __ps_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv2m , avx512     , __fd_cos_2_mn         , __rd_cos_2_mn         , __pd_cos_2_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv8m , avx512     , __fs_cos_8_mn         , __rs_cos_8_mn         , __ps_cos_8_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , dv4m , avx512     , __fd_cos_4_mn         , __rd_cos_4_mn         , __pd_cos_4_mn         ,__math_dispatch_error)
MTHINTRIN(cos  , sv16m, avx512     , __fs_cos_16_mn        , __rs_cos_16_mn        , __ps_cos_16_mn        ,__math_dispatch_error)
MTHINTRIN(cos  , dv8m , avx512     , __fd_cos_8_mn         , __rd_cos_8_mn         , __pd_cos_8_mn         ,__math_dispatch_error)

MTHINTRIN(cos , cs   , em64t       , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , em64t       , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , em64t       , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , em64t       , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , sse4        , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , sse4        , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , sse4        , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , sse4        , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , avx         , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , avx         , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , avx         , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , avx         , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv4  , avx         , __gc_cos_4_f          , __gc_cos_4_r          , __gc_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv2  , avx         , __gz_cos_2_f          , __gz_cos_2_r          , __gz_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , avxfma4     , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , avxfma4     , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , avxfma4     , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , avxfma4     , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv4  , avxfma4     , __gc_cos_4_f          , __gc_cos_4_r          , __gc_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv2  , avxfma4     , __gz_cos_2_f          , __gz_cos_2_r          , __gz_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , avx2        , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , avx2        , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , avx2        , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , avx2        , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv4  , avx2        , __gc_cos_4_f          , __gc_cos_4_r          , __gc_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv2  , avx2        , __gz_cos_2_f          , __gz_cos_2_r          , __gz_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , avx512knl   , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , avx512knl   , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , avx512knl   , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , avx512knl   , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv4  , avx512knl   , __gc_cos_4_f          , __gc_cos_4_r          , __gc_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv8  , avx512knl   , __gc_cos_8_f          , __gc_cos_8_r          , __gc_cos_8_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv2  , avx512knl   , __gz_cos_2_f          , __gz_cos_2_r          , __gz_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv4  , avx512knl   , __gz_cos_4_f          , __gz_cos_4_r          , __gz_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , cs   , avx512      , ccosf                 , ccosf                 , ccosf                ,__math_dispatch_error)
MTHINTRIN(cos , zs   , avx512      , ccos                  , ccos                  , ccos                 ,__math_dispatch_error)
MTHINTRIN(cos , zv1  , avx512      , __gz_cos_1v_f         , __gz_cos_1v_r         , __gz_cos_1v_p        ,__math_dispatch_error)
MTHINTRIN(cos , cv2  , avx512      , __gc_cos_2_f          , __gc_cos_2_r          , __gc_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv4  , avx512      , __gc_cos_4_f          , __gc_cos_4_r          , __gc_cos_4_p         ,__math_dispatch_error)
MTHINTRIN(cos , cv8  , avx512      , __gc_cos_8_f          , __gc_cos_8_r          , __gc_cos_8_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv2  , avx512      , __gz_cos_2_f          , __gz_cos_2_r          , __gz_cos_2_p         ,__math_dispatch_error)
MTHINTRIN(cos , zv4  , avx512      , __gz_cos_4_f          , __gz_cos_4_r          , __gz_cos_4_p         ,__math_dispatch_error)
