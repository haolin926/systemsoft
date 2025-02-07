#include <stdio.h>
#include "areaOfRectangle.h"
#include "areaOfTriangle.h"
#include "areaOfCircle.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *shape = argv[1];

	if (strcasecmp(shape, "rectangle") == 0)
	{
		int side1 = atoi(argv[2]);
		int side2 = atoi(argv[3]);
		areaOfRectangle(side1, side2);
	}
	else if (strcasecmp(shape, "circle") == 0)
	{
		int radius = atoi(argv[2]);
		areaOfCircle(radius);
	}
	else if (strcasecmp(shape, "triangle") == 0)
	{
		int width = atoi(argv[2]);
		int height = atoi(argv[3]);
		areaOfTriangle(width, height);
	}
	else
	{
		printf("Invalid Shape\n");
	}

	return 0;
}
