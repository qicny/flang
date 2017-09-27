#
# Copyright (c) 2015, NVIDIA CORPORATION.  All rights reserved.
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

########## Make rule for test ieee18flushz  ########

ieee18flushz: ieee18flushz.$(OBJX)
	

ieee18flushz.$(OBJX):  $(SRC)/ieee18flushz.f90
	-$(RM) ieee18flushz.$(EXESUFFIX) core *.d *.mod FOR*.DAT FTN* ftn* fort.*
	@echo ------------------------------------ building test $@
	-$(CC) -c $(CFLAGS) $(SRC)/check.c -o check.$(OBJX)
	-$(FC) -c $(FFLAGS) $(LDFLAGS) $(SRC)/ieee18flushz.f90 -o ieee18flushz.$(OBJX)
	-$(FC) $(FFLAGS) $(LDFLAGS) ieee18flushz.$(OBJX) check.$(OBJX) $(LIBS) -o ieee18flushz.$(EXESUFFIX)


ieee18flushz.run: ieee18flushz.$(OBJX)
	@echo ------------------------------------ executing test ieee18flushz
	ieee18flushz.$(EXESUFFIX)

verify: ;
build: ieee18flushz.$(OBJX) ;
run: ieee18flushz.run ;
