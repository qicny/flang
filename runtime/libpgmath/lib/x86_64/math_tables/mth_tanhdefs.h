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

MTHINTRIN(tanh , ss   , em64t      , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , em64t      , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4  , em64t      , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , em64t      , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , em64t      , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , em64t      , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)

MTHINTRIN(tanh , ss   , sse4       , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , sse4       , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4  , sse4       , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , sse4       , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , sse4       , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , sse4       , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)

MTHINTRIN(tanh , ss   , avx        , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx        , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4  , avx        , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , avx        , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv8  , avx        , __gs_tanh_8_f         , __gs_tanh_8_r         , __gs_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv4  , avx        , __gd_tanh_4_f         , __gd_tanh_4_r         , __gd_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , avx        , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , avx        , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv8m , avx        , __fs_tanh_8_mn        , __rs_tanh_8_mn        , __ps_tanh_8_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv4m , avx        , __fd_tanh_4_mn        , __rd_tanh_4_mn        , __pd_tanh_4_mn        ,__math_dispatch_error)

MTHINTRIN(tanh , ss   , avxfma4    , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avxfma4    , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4  , avxfma4    , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , avxfma4    , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv8  , avxfma4    , __gs_tanh_8_f         , __gs_tanh_8_r         , __gs_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv4  , avxfma4    , __gd_tanh_4_f         , __gd_tanh_4_r         , __gd_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , avxfma4    , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , avxfma4    , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv8m , avxfma4    , __fs_tanh_8_mn        , __rs_tanh_8_mn        , __ps_tanh_8_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv4m , avxfma4    , __fd_tanh_4_mn        , __rd_tanh_4_mn        , __pd_tanh_4_mn        ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(tanh , ss   , avx2       , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx2       , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
#else
MTHINTRIN(tanh , ss   , avx2       , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh_avx2     ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx2       , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh_avx2    ,__math_dispatch_error)
#endif
MTHINTRIN(tanh , sv4  , avx2       , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , avx2       , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv8  , avx2       , __gs_tanh_8_f         , __gs_tanh_8_r         , __gs_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv4  , avx2       , __gd_tanh_4_f         , __gd_tanh_4_r         , __gd_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , avx2       , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , avx2       , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv8m , avx2       , __fs_tanh_8_mn        , __rs_tanh_8_mn        , __ps_tanh_8_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv4m , avx2       , __fd_tanh_4_mn        , __rd_tanh_4_mn        , __pd_tanh_4_mn        ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(tanh , ss   , avx512knl  , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx512knl  , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
#else
MTHINTRIN(tanh , ss   , avx512knl  , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh_avx2     ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx512knl  , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh_avx2    ,__math_dispatch_error)
#endif
MTHINTRIN(tanh , sv4  , avx512knl  , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , avx512knl  , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv8  , avx512knl  , __gs_tanh_8_f         , __gs_tanh_8_r         , __gs_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv4  , avx512knl  , __gd_tanh_4_f         , __gd_tanh_4_r         , __gd_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv16 , avx512knl  , __gs_tanh_16_f        , __gs_tanh_16_r        , __gs_tanh_16_p        ,__math_dispatch_error)
MTHINTRIN(tanh , dv8  , avx512knl  , __gd_tanh_8_f         , __gd_tanh_8_r         , __gd_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , avx512knl  , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , avx512knl  , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv8m , avx512knl  , __fs_tanh_8_mn        , __rs_tanh_8_mn        , __ps_tanh_8_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv4m , avx512knl  , __fd_tanh_4_mn        , __rd_tanh_4_mn        , __pd_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv16m, avx512knl  , __fs_tanh_16_mn       , __rs_tanh_16_mn       , __ps_tanh_16_mn       ,__math_dispatch_error)
MTHINTRIN(tanh , dv8m , avx512knl  , __fd_tanh_8_mn        , __rd_tanh_8_mn        , __pd_tanh_8_mn        ,__math_dispatch_error)

#ifdef	ORIG
MTHINTRIN(tanh , ss   , avx512     , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh          ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx512     , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh         ,__math_dispatch_error)
#else
MTHINTRIN(tanh , ss   , avx512     , __mth_i_tanh          , __mth_i_tanh          , __mth_i_tanh_avx2     ,__math_dispatch_error)
MTHINTRIN(tanh , ds   , avx512     , __mth_i_dtanh         , __mth_i_dtanh         , __mth_i_dtanh_avx2    ,__math_dispatch_error)
#endif
MTHINTRIN(tanh , sv4  , avx512     , __gs_tanh_4_f         , __gs_tanh_4_r         , __gs_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv2  , avx512     , __gd_tanh_2_f         , __gd_tanh_2_r         , __gd_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv8  , avx512     , __gs_tanh_8_f         , __gs_tanh_8_r         , __gs_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , dv4  , avx512     , __gd_tanh_4_f         , __gd_tanh_4_r         , __gd_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv16 , avx512     , __gs_tanh_16_f        , __gs_tanh_16_r        , __gs_tanh_16_p        ,__math_dispatch_error)
MTHINTRIN(tanh , dv8  , avx512     , __gd_tanh_8_f         , __gd_tanh_8_r         , __gd_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , sv4m , avx512     , __fs_tanh_4_mn        , __rs_tanh_4_mn        , __ps_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv2m , avx512     , __fd_tanh_2_mn        , __rd_tanh_2_mn        , __pd_tanh_2_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv8m , avx512     , __fs_tanh_8_mn        , __rs_tanh_8_mn        , __ps_tanh_8_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , dv4m , avx512     , __fd_tanh_4_mn        , __rd_tanh_4_mn        , __pd_tanh_4_mn        ,__math_dispatch_error)
MTHINTRIN(tanh , sv16m, avx512     , __fs_tanh_16_mn       , __rs_tanh_16_mn       , __ps_tanh_16_mn       ,__math_dispatch_error)
MTHINTRIN(tanh , dv8m , avx512     , __fd_tanh_8_mn        , __rd_tanh_8_mn        , __pd_tanh_8_mn        ,__math_dispatch_error)

MTHINTRIN(tanh , cs   , em64t      , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , em64t      , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , em64t      , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , em64t      , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , sse4       , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , sse4       , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , sse4       , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , sse4       , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , avx        , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , avx        , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , avx        , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , avx        , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv4  , avx        , __gc_tanh_4_f         , __gc_tanh_4_r         , __gc_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv2  , avx        , __gz_tanh_2_f         , __gz_tanh_2_r         , __gz_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , avxfma4    , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , avxfma4    , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , avxfma4    , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , avxfma4    , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv4  , avxfma4    , __gc_tanh_4_f         , __gc_tanh_4_r         , __gc_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv2  , avxfma4    , __gz_tanh_2_f         , __gz_tanh_2_r         , __gz_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , avx2       , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , avx2       , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , avx2       , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , avx2       , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv4  , avx2       , __gc_tanh_4_f         , __gc_tanh_4_r         , __gc_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv2  , avx2       , __gz_tanh_2_f         , __gz_tanh_2_r         , __gz_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , avx512knl  , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , avx512knl  , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , avx512knl  , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , avx512knl  , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv4  , avx512knl  , __gc_tanh_4_f         , __gc_tanh_4_r         , __gc_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv8  , avx512knl  , __gc_tanh_8_f         , __gc_tanh_8_r         , __gc_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv2  , avx512knl  , __gz_tanh_2_f         , __gz_tanh_2_r         , __gz_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv4  , avx512knl  , __gz_tanh_4_f         , __gz_tanh_4_r         , __gz_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cs   , avx512     , ctanhf                , ctanhf                , ctanhf                ,__math_dispatch_error)
MTHINTRIN(tanh , zs   , avx512     , ctanh                 , ctanh                 , ctanh                 ,__math_dispatch_error)
MTHINTRIN(tanh , zv1  , avx512     , __gz_tanh_1v_f        , __gz_tanh_1v_r        , __gz_tanh_1v_p        ,__math_dispatch_error)
MTHINTRIN(tanh , cv2  , avx512     , __gc_tanh_2_f         , __gc_tanh_2_r         , __gc_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv4  , avx512     , __gc_tanh_4_f         , __gc_tanh_4_r         , __gc_tanh_4_p         ,__math_dispatch_error)
MTHINTRIN(tanh , cv8  , avx512     , __gc_tanh_8_f         , __gc_tanh_8_r         , __gc_tanh_8_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv2  , avx512     , __gz_tanh_2_f         , __gz_tanh_2_r         , __gz_tanh_2_p         ,__math_dispatch_error)
MTHINTRIN(tanh , zv4  , avx512     , __gz_tanh_4_f         , __gz_tanh_4_r         , __gz_tanh_4_p         ,__math_dispatch_error)
