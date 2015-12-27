/*
 ============================================================================
 Name        : free_arr.c
 Author      : Hamza Megahed
 Version     : 1.0
 Copyright   : Copyright 2012 Hamza Megahed
 Description : Function To free memory allocation
 ============================================================================
 */
/*
 ============================================================================
   This file is part of pnum.

    pnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    pnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with pnum.  If not, see <http://www.gnu.org/licenses/>.
 ===========================================================================
*/

/********************************* Headers *********************************/
#include <stdio.h>
#include <stdlib.h>
/*==========================================================================*/
void free_arr(unsigned long long int *ptr)
{
	free(ptr);
}
/*============================= End of function ============================*/
