#
# Copyright (c) 2018, NVIDIA CORPORATION.  All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Set compiler flags and definitions
get_property(DEFINITIONS GLOBAL PROPERTY "DEFINITIONS_L1")
get_property(FLAGS GLOBAL PROPERTY "FLAGS_L1")

set(SRCS)

# Set source files, compiler flags and definitions
if(${CMAKE_SYSTEM_PROCESSOR} MATCHES "x86_64")
  if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(COREAVX2_SRCS fd_sin_1_avx2.cpp fd_sin_2_avx2.cpp fd_sin_4_avx2.cpp)
    set_property(SOURCE ${COREAVX2_SRCS} APPEND_STRING PROPERTY COMPILE_FLAGS "-Wno-attributes -mtune=core-avx2 -march=core-avx2 ")
    set_property(SOURCE ${COREAVX2_SRCS} APPEND_STRING PROPERTY COMPILE_DEFINITIONS "PGI ")
    set(SKYLAKE_SRCS fd_sin_8_avx512.cpp)
    set_property(SOURCE ${SKYLAKE_SRCS} APPEND_STRING PROPERTY COMPILE_FLAGS "-Wno-attributes -mtune=skylake-avx512 -march=skylake-avx512 ")
    set_property(SOURCE ${SKYLAKE_SRCS} APPEND_STRING PROPERTY COMPILE_DEFINITIONS "PGI ")
    set(SRCS
      ${COREAVX2_SRCS}
      ${SKYLAKE_SRCS})
  elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(COREAVX2_SRCS fd_sin_1_avx2.cpp fd_sin_2_avx2.cpp fd_sin_4_avx2.cpp)
    set_property(SOURCE ${COREAVX2_SRCS} APPEND_STRING PROPERTY COMPILE_FLAGS "-Wno-attributes -mavx2 -mfma ")
    set_property(SOURCE ${COREAVX2_SRCS} APPEND_STRING PROPERTY COMPILE_DEFINITIONS "PGI ")
    set(SKYLAKE_SRCS fd_sin_8_avx512.cpp)
    set_property(SOURCE ${SKYLAKE_SRCS} APPEND_STRING PROPERTY COMPILE_FLAGS "-Wno-attributes -mtune=skylake-avx512 -march=skylake-avx512 ")
    set_property(SOURCE ${SKYLAKE_SRCS} APPEND_STRING PROPERTY COMPILE_DEFINITIONS "PGI ")
    set(SRCS
      ${COREAVX2_SRCS}
      ${SKYLAKE_SRCS})
  endif()
endif()

libmath_add_object_library("${SRCS}" "${FLAGS}" "${DEFINITIONS}" "")
