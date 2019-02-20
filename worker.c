/*PROGRAM IS TO FIND THE YOUNGEST MAN FROM THE GIVEN THREE MEN
AUTHOR JITTO THOMAS
DATE 20/02/2019
*/
#include<stdio.h>
void main()
{
float time;
printf("ENTER THE TIME OF THE WORKER");
scanf("%f",&time);
if(time>=2 && time<3)
{
	printf("THE WORKER IS SAID TO BE HIGHLY EFFICIENT");
}
if(time>=3 && time<4)
{
	printf("THE WORKER IS ORDERED TO IMPROVE SPEED");
}
if(time>=4 && time<=5)
{
	printf("THE WORKER IS GIVEN TRAINING TO IMPROVE HIS SPEED");
}
if(time>5)
{
	printf("THE WORKER IS TERMINATED");
}
}
