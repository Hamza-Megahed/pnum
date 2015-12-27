/*
 ============================================================================
 Name        : pnum.c
 Author      : Hamza Megahed
 Version     : 1.0
 Copyright   : Copyright 2012 Hamza Megahed
 Description : Prime Numbers Generator main function
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
#include "menu.h"
/*==========================================================================*/

/********************************* Functions *******************************/
extern int pnum(int);
/*==========================================================================*/

/*//////////////////////////////// main function ///////////////////////////*/

int main(void)
{
		/*Clear Screen */
	system("clear");
		/*control the menu function via multi options */
		/* 0 --> exit
		 * 1 --> Generating
		 * 2 --> Testing a number if it a prime or not
		 * if number is > 2 then restart function again
		 * if option = 1 or 2 then pnum function is start
		 */
	int ret_option = 1;

	start :
	while (ret_option !=0)
	{
		ret_option = menu();
		        if (ret_option > 2)
		        {
		        	printf("==================================================================\n");
		        	printf("Wrong option .. please try again\n");
		        	printf("==================================================================\n");
		        			goto start;
		        }

		        if (ret_option == 0)
		        	exit (0) ;
		 /*start pnum function to test or generate
		  * prime numbers
		  */
		        pnum(ret_option);
	}
	return 0;
}
