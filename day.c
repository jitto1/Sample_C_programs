/*PROGRAM TO PRINT 24 HOURS OF A DAY WITH SUITABLE SUFFIXES LIKE AM, PM , NOON AND MIDNIGHT.
AUTHOR JITTO THOMAS
DATE 27/02/2019
*/#include<stdio.h>
void main()
{
int i,j;
printf("12 midnight\n");
for(i=1;i<=11;i++)
{
	printf("%d AM\n",i);
}
printf("12 noon\n");
for(j=1;j<=11;j++)
{
	printf("%d PM\n",j);
}
}
