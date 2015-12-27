/*
 ============================================================================
 Name        : menu.c
 Author      : Hamza Megahed
 Version     : 1.0
 Copyright   : Copyright 2012 Hamza Megahed
 Description : Function To make menu options
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

/********************************* Headers **********************************/
#include <stdio.h>
/*==========================================================================*/


int menu(void)
{
		/* function to make menu options
		 	 * 0 --> exit
			 * 1 --> Generating
			 * 2 --> Testing a number if it a prime or not
			 * and finally return option value
			 */

	int option;
	printf("\n\n");
	printf("\t*************************************************\n");
    printf("\t* Welcome to Prime Numbers Generator and Tester *\n");
    printf("\t*************************************************\n");
    printf("1. Generate\n2. Test\n0. Exit\n");
    printf("Enter your Selection : ");
    scanf("%d",&option);
    return (option);
}
/*============================= End of function ============================*/
