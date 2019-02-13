/*   THIS PROGRAM IS TO CHECK WEATHER A GIVEN NUMBER IS AMSTRONG OR NOT
     AUTHR NAME: JITTO THOMAS
     DATE :13/02/2019 */
#include<stdio.h>
void main()
	{
		
		int number,copy,sum=0,reminder;
		printf("ENTER THE THE NO:\t");
		scanf("%d",&number);
		copy=number;
		while(number>0)
			{
				reminder=number%10;
				sum=sum+(reminder*reminder*reminder);
				number=number/10;
			}
		if(sum==copy)
			printf("THE GIVEN NUMBER %d IS AMSTRONG \n",copy);
		else
			printf("THE GIVEN NUMBER %d IS NOT AMSTRONG \n",copy);
	}
