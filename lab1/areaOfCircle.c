#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14

int areaOfCircle(int radius)
{
	
	float area = M_PI*radius*radius;
	printf("The area of the circle is %.2f", area);
	return 0;
}
