/*PROGRAM IS TO FIND THE YOUNGEST MAN FROM THE GIVEN THREE MEN
AUTHOR JITTO THOMAS
DATE 20/02/2019
*/
#include<stdio.h>
void main()
{
int number1,number2,number3;
printf("ENTER THE AGES OF RAM SHYAM AND AJAY");
scanf("%d%d%d",&number1,&number2,&number3);
if(number1<number2 && number1<number3)
	{
	printf("THE YOUNGEST MAN IS RAM");
}
if(number2<number3 && number2<number1)
	{ 
	printf("THE YOUNGEST MAN IS SHYAM");
}
if(number3<number2 && number3<number1)
	{
	printf("THE YOUNGEST MAN IS AJAY");
}
}
