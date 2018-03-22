#include<iostream>
#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif
int main()
{
	int degree;
		std::cout<<"Podaj liczbe calkowita: ";
		std::cin>>degree;
		getchar();

		#ifdef USE_TRIGONOMETRY_DEGREE

	double a = degreemath::sinus(degree);
	double b = degreemath2::cosinus(degree);
	double c = degreemath3::tangens(degree);
	double d = degreemath4::cotangens(degree);
	std::cout << "sinus" << a << " cosinus " << b << "tangens" << c << "cotangens" << d;
	getchar();
	#else
double a = sin(degree);
	double b = cos(degree);
	double c = tg(degree);
	double d = 1/tg(degree);
	std::cout << "biblioteka cmath: sinus" << a << " cosinus " << b << "tangens" << c << "cotangens" << d;
	getchar();
#endif
		return 0;
}