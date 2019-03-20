#include<LaborkaConfig.h>
#include<iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif

int main(int argc, char* argv[])
{
	double result = 0;
	if(argc==3){
		std::string arg = argv[1];
		if(!arg.compare("--sin"))
		{			
			#ifdef USE_TRIGONOMETRY_DEGREE
				std::cout<<"Sinus dla "<<argv[2] <<" stopni: ";
				result = degreemath::sin(atof(argv[2]));
			#else
				std::cout<<"Sinus "<<argv[2] <<" radianow: ";
				result = std::sin(atof(argv[2]));
			#endif		
		}
		if(!arg.compare("--cos"))
		{			
			#ifdef USE_TRIGONOMETRY_DEGREE
				std::cout<<"Cosinus dla "<<argv[2] <<" stopni: ";
				result = degreemath::cos(atof(argv[2]));
			#else
				std::cout<<"Cosinus "<<argv[2] <<" radianow: ";
				result = std::cos(atof(argv[2]));
			#endif		
		}
		if(!arg.compare("--tg"))
		{			
			#ifdef USE_TRIGONOMETRY_DEGREE
				std::cout<<"Tangens dla "<<argv[2] <<" stopni: ";
				result = degreemath::tg(atof(argv[2]));
			#else
				std::cout<<"Tangens "<<argv[2] <<" radianow: ";
				result = std::tan(atof(argv[2]));
			#endif		
		}
		if(!arg.compare("--ctg"))
		{			
			#ifdef USE_TRIGONOMETRY_DEGREE
				std::cout<<"Kotangens dla "<<argv[2] <<" stopni: ";
				result = degreemath::ctg(atof(argv[2]));
			#else
				std::cout<<"Kotangens "<<argv[2] <<" radianow: ";
				result = 1/std::tan(atof(argv[2]));
			#endif		
		}
		std::cout << result <<std::endl;
	}
	else
		std::cout << "Nie podano wszystkich parametrow" <<std::endl;
	return 0;
}