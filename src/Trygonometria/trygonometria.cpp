#include "trygonometria.h"
#include <cmath>
#include<iostream>

double degreemath::sinus(double degree) {
double rad =  3.14/degree; 
return std::sin(rad); //funkcja biblioteczna z piku <cmath>
}

double degreemath2::cosinus(double degree) {

double rad =  3.14/degree; 
return std::cos(rad); //funkcja biblioteczna z piku <cmath>
}

double degreemath3::tangens(double degree) {

double rad =  3.14/degree; 
return std::tan(rad); //funkcja biblioteczna z piku <cmath>
}

double degreemath4::cotangens(double degree) {

double rad =  3.14/degree; 
double wynik = 1/(tan(rad));
return wynik ; //funkcja biblioteczna z piku <cmath>
}