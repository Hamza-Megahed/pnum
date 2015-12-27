/*
 ============================================================================
 Name        : pnum.c
 Author      : Hamza Megahed
 Version     : 1.0
 Copyright   : Copyright 2012 Hamza Megahed
 Description : Prime Numbers Generator function
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
#include <math.h>
#include "func.h"
/*==========================================================================*/



/********************************* Global Variables ************************/
unsigned long int x;
/*==========================================================================*/


/*//////////////////////////////// pnum function ///////////////////////////*/


int pnum(int option)
{


/********************************* Local Variables **************************/
	unsigned long int i, z, v, r = 0, g = 0;
	int flag = 0;
	const char * fn = "results.txt";

/*==========================================================================*/

/********************************* Start Menu  ******************************/
		/*control the menu function via multi option */
			/* 0 --> exit
			 * 1 --> Generating
			 * 2 --> Testing a number if it a prime or not
			 * if number is > 2 the restart function again
			 */

/*==========================================================================*/


/******************************** Input Limit *******************************/
		/* To take input limit and return it in x variable
		 	 * and then get root of x variable
		 	 * save root in v variable . */

	input_lim(option);

	v = sqrt(x);
/*==========================================================================*/





		/*redefine all arrays with x value as length .*/

		unsigned long long int *b = (unsigned long long int *) malloc((x+5) * sizeof(unsigned long long int));
		if (NULL == b) {
			printf("Error in b\n");
		}
		unsigned long long int *s = (unsigned long long int *) malloc((x+5) * sizeof(unsigned long long int));
		if (NULL == s) {
			printf("Error in s\n");
		}


/***************************** Clear All Arrays *****************************/
		/* Clear all arrays and set all arrays values to zero , just to make sure
		 	 * there is no saved values in it.*/


	clear_arr(b);
	clear_arr(s);
/*==========================================================================*/





/******************************** Modifications on arrays  *****************/
		/* make b[] that contain from 0 to x value (limit) */

	for (z = 2; z <= x; z++) {
		b[z] = z;
		}
	/* set zero 2's, 3's and 5's ,, it's not prime */

	for (i = 2; i <= x; i += 2)
		b[i] = 0;
	for (i = 6; i <= x; i += 3)
		b[i] = 0;
	for (i = 10; i <= x; i += 5)
		b[i] = 0;
/*==========================================================================*/



/************************************ Copy > 0 elements to s[] ***************/
		/* Copy (from zero to root value) elements in b[] that > 0 to s[]
			 * Then save numbers of iterations in r variable */

	for (z = 0; z <= v; z++) {
		if (b[z] > 0) {
			s[r] = b[z];
			r++;
			}
	}
/*==========================================================================*/


/************************************* test  **********************************/
		/* testing r value and v value and s[] */
		/* Uncomment the following lines to show test results for r,v.s[] */
//	  printf("\n\n");
//	  printf("R = %d V=%d\n", r, v);
//	  printf("Final Test\n");
//	  for (z = 0; z < r; z++) {
//		printf("%d\t", s[z]);
//	  }



/*================================ End of testing =============================*/


/******************************** Prime numbers extraction *********************/
		/* Finally .. extract prime numbers from b[] by dividing all elements
		 	 * in b[] on s[] to detect non prime numbers and set
		 	 	 	 * it's to zero . */

	for (z = 7; z <= x; z++) {
		if (b[z] > 0) {
			g = 0;
			for (g = 0; g < r; g++) {
				if (b[z] % s[g] == 0 && b[z] != s[g])
					b[z] = 0;

				}
			}
	}
/*==========================================================================*/

/************************** select options from menu  ***********************/
		/* if re_option = 1 then goto generating a prime numbers
		 * from 0 to limit
		 * else if ret_option = 2 the goto test x value if it a prime or not
		 */
	if (option == 1)
		goto extract;
	if (option == 2)
			goto test;
/*==========================================================================*/

	extract:
/******************************** Print prime numbers ***********************/

		/*Clear Screen */
	system("clear");
		/* Open results.txt to save the output of b[z] in it */
	FILE * fp = fopen(fn, "w");

		/* Now .... print prime numbers . */
	printf("\n");
	printf("Prime Numbers = \n");
	printf("==================================================================\n");
	for (z = 3; z < x+1; z++) {
		if (b[z] > 0){
			printf("%llu\t", b[z]);
			/*save output of b[z] > 0 in results.txt */
			fprintf(fp,"%llu\t",b[z]);
		}
		}
	printf("\n");
	printf("==================================================================\n");
	fclose (fp);
	printf("==================================================================\n");
	printf("%c[%dm\t\tThe Results is saved in results.txt \n", 0x1B,31);
	printf("%c[%dm", 0x1B, 0);
	printf("==================================================================\n");


/*============================= End of printing ================================*/



/***************************** free allocating  *********************************/
			/*free memory allocating for a , b , c , s */

		free_arr(b);
		free_arr(s);
/*=============================================================================*/

		return EXIT_SUCCESS;

	test:
/*============================= Testing input ================================*/
		/*Testing x value if it a prime or not by
		 * set flag = 1 if it a prime
		 * else set flag = 2
		 */

	for (z = 3; z <= x; z++) {
			if (b[z] > 0){
				if (b[z] == x){
				flag = 1;
				} else flag = 2;
			}
	}
/*============================= End of Testing ================================*/


/******************************** Print test results ***********************/
		/*Clear Screen*/
	system("clear");

		/*print test results by using flag value
		 * if flag = 1 then it's a prime number
		 * if flag = 2 then it's not a prime number
		 */
	if (flag == 1){
		printf("\n");
		printf("==================================================================\n");
		printf("%lu is a prime number\n", x);
		printf("==================================================================\n");
	}
	if (flag == 2){
		printf("\n");
		printf("==================================================================\n");
		printf("%lu is not a prime number\n", x);
		printf("==================================================================\n");
	}

/*============================= End of printing ================================*/


/***************************** free allocating  *********************************/
		/*free memory allocating for a , b , c , s */

	free_arr(b);
	free_arr(s);
/*=============================================================================*/

	return EXIT_SUCCESS;
}
