/*   THIS PROGRAM IS TO CHECK WEATHER A GIVEN NUMBER IS PALINDROME OR NOT
     AUTHR NAME: JITTO THOMAS
     DATE :13/02/2019 */
#include<stdio.h>
void main()
	{
		printf("**** ***** *     * *    * ***   ****  ****** *    ** *****\n");
		printf("*  * *   * *     * * *  * *  *  *  *  *    * * * * * *\n");
		printf("**** ***** *     * *  * * *   * * *   *    * *  *  * ****\n");
		printf("*    *   * *     * *   ** *  *  *  *  *    * *     * *\n");
		printf("*    *   * ***** * *    * ***   *   * ****** *     * *****\n");
		int number,copy,reverse=0,reminder;
		printf("ENTER THE THE NO:\t");
		scanf("%d",&number);
		copy=number;
		while(number>0)
			{
				reminder=number%10;
				reverse=(reverse*10)+reminder;
				number=number/10;
			}
		if(reverse==copy)
			printf("THE GIVEN NUMBER %d IS PALINDROME \n",copy);
		else
			printf("THE GIVEN NUMBER %d IS NOT PALINDROME \n",copy);
	}
