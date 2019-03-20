#include<LaborkaConfig.h>
#include<iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif

int main()
{
	double result;
	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout<<"Sinus 45 stopni: ";
		result = degreemath::sin(45.0);
	#else
		std::cout<<"Sinus pi/4 radianow: ";
		result = std::sin(3.14/4.0);
	#endif

	std::cout << result <<std::endl;

	return 0;
}