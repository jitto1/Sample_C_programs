/*   THIS PROGRAM IS TO CHECK WEATHER AREA OF A RECTANGLE IS GREATER THAN ITS PERIMETER
     AUTHR NAME: JITTO THOMAS
     DATE :20/02/2019 */
#include<stdio.h>
void main()
	{
		float length,breadth,area,perimeter;
		printf("ENTER THE LENGTH AND BREADTH OF THE RECTANGLE:	");
		scanf("%d,%d",&length,&breadth);
		area=length*breadth;
		perimeter=2*(length+breadth);
		if(area>perimeter)
		{
			printf("AREA OF THE RECTANGLE IS LESS THAN ITS PERIMETER");
		}
		else
		{
			printf("AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER");
		}
	}		
