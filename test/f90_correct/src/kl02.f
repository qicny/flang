!** Copyright (c) 2004, NVIDIA CORPORATION.  All rights reserved.
!**
!** Licensed under the Apache License, Version 2.0 (the "License");
!** you may not use this file except in compliance with the License.
!** You may obtain a copy of the License at
!**
!**     http://www.apache.org/licenses/LICENSE-2.0
!**
!** Unless required by applicable law or agreed to in writing, software
!** distributed under the License is distributed on an "AS IS" BASIS,
!** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
!** See the License for the specific language governing permissions and
!** limitations under the License.
!
!* Loop Redundant Expression Elimination
!*

	subroutine s1
	real res,a,b,c,d,e,f
	common/c/ res(30,10), a(10), b(10), c(10), d(10), e(10), f(10)

	i = 1
	do j = 2,9
	 i = i + 1
	 res( 1,i) = 9
	 res( 2,i) = a(i)*a(i)
	 res( 3,i) = a(i)*a(i)
	 res( 4,i) = a(i-1)*a(i-1)
	 res( 5,i) = a(i-1)*a(i-1)
	enddo

	i = 2
	do j = 2,9
	 res( 6,i) = a(i)*(a(i)+e(i))
	 res( 7,i) = d(i)*c(i-1)
	 res( 8,i) = a(i-1)*(a(i-1)+e(i-1))
	 res( 9,i) = d(i)*c(i)
	 res(10,i) = d(i)*f(i)
	 res(11,i) = e(i)*f(i-1)
	 i = i + 1
	enddo

	i = 3
	do j = 3,9,2
	 res(12,i) = 9
	 res(13,i) = a(i)*a(i)
	 res(14,i) = a(i)*a(i)
	 res(15,i) = a(i-2)*a(i-2)
	 res(16,i) = a(i-2)*a(i-2)
	 i = i + 2
	enddo

	i = 1
	do j = 2,5
	 i = i + 1
	 res(17,i) = 9
	 res(18,i) = a(2*i)*a(2*i)
	 res(19,i) = a(2*i)*a(2*i)
	 res(20,i) = a(2*i-1)*a(2*i-1)
	 res(21,i) = a(2*i-1)*a(2*i-1)
	enddo

	i = 1
	do j = 2,5
	 i = i + 1
	 res(22,i) = 9
	 res(23,i) = a(2*i)*a(2*i)
	 res(24,i) = a(2*i)*a(2*i)
	 res(25,i) = a(2*i-2)*a(2*i-2)
	 res(26,i) = a(2*i-2)*a(2*i-2)
	enddo

	i = 2
	do j = 2,9
	 res(27,i) = 9
	 res(28,i) = b(i)*b(i)
	 b(i) = b(i)*b(i)
	 res(29,i) = b(i-1)*b(i-1)+(b(i)*b(i))
	 res(30,i) = b(i-1)*b(i-1)
	 i = i + 1
	enddo
	end

	program lre
	common/c/ res(30,10), a(10), b(10), c(10), d(10), e(10), f(10)
	real res,a,b,c,d,e,f
	real exp(30,10)
	data exp/
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     9.,     4.,     4.,     1.,     1.,
     x    88.,   672.,    42.,   704.,  1664.,
     x  2142.,     0.,     0.,     0.,     0.,
     x     0.,     9.,    16.,    16.,     9.,
     x     9.,     9.,    16.,    16.,     4.,
     x     4.,     9.,   144., 20857.,   121.,
     x     9.,     9.,     9.,     4.,     4.,
     x   138.,   726.,    88.,   759.,  1749.,
     x  2236.,     9.,     9.,     9.,     1.,
     x     1.,     9.,    36.,    36.,    25.,
     x    25.,     9.,    36.,    36.,    16.,
     x    16.,     9.,   169., 49297., 20736.,
     x     9.,    16.,    16.,     9.,     9.,
     x   192.,   782.,   138.,   816.,  1836.,
     x  2332.,     0.,     0.,     0.,     0.,
     x     0.,     9.,    64.,    64.,    49.,
     x    49.,     9.,    64.,    64.,    36.,
     x    36.,     9.,   196., 66977., 28561.,
     x     9.,    25.,    25.,    16.,    16.,
     x   250.,   840.,   192.,   875.,  1925.,
     x  2430.,     9.,    25.,    25.,     9.,
     x     9.,     9.,   100.,   100.,    81.,
     x    81.,     9.,   100.,   100.,    64.,
     x    64.,     9.,   225., 89041., 38416.,
     x     9.,    36.,    36.,    25.,    25.,
     x   312.,   900.,   250.,   936.,  2016.,
     x  2530.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     9.,   256.,116161., 50625.,
     x     9.,    49.,    49.,    36.,    36.,
     x   378.,   962.,   312.,   999.,  2109.,
     x  2632.,     9.,    49.,    49.,    25.,
     x    25.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     9.,   289.,149057., 65536.,
     x     9.,    64.,    64.,    49.,    49.,
     x   448.,  1026.,   378.,  1064.,  2204.,
     x  2736.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     9.,   324.,188497., 83521.,
     x     9.,    81.,    81.,    64.,    64.,
     x   522.,  1092.,   448.,  1131.,  2301.,
     x  2842.,     9.,    81.,    81.,    49.,
     x    49.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     9.,   361.,235297.,104976.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0.,
     x     0.,     0.,     0.,     0.,     0./
	do j = 1,10
	 do i = 1,30
	  res(i,j) = 0
	 enddo
	enddo

	do i = 1,10
	 a(i) = i
	 b(i) = i+10.
	 c(i) = i+20.
	 d(i) = i+30.
	 e(i) = i+40.
	 f(i) = i+50.
	enddo

	call s1

!	write(6,10) ((res(i,j),i=1,30),j=1,10)
!10	format( (5x, 'x', 5(f7.0,',')))

	call check(res,exp,300)
	end
