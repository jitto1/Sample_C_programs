/*   THIS PROGRAM IS TO REVERSE A NUMBER
     AUTHR NAME: JITTO THOMAS
     DATE :13/02/2019 */
#include<stdio.h>
void main()
	{
		
		int number,copy,reminder,reverse=0;
		printf("ENTER THE THE NO");
		scanf("%d",&number);
		copy=number;
		while(number>0)
			{
				reminder=number%10;
				reverse=(reverse*10)+reminder;
				number=number/10;
			}
		printf("THE REVERSE OFTHE NUMBER %d IS %d",copy,reverse);
	}
