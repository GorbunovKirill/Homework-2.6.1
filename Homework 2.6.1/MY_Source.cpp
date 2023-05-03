#include "My_Source.h"


double sum(double x, double y) {
	
	return x + y;;

}

double subst(double x, double y) {

	return x - y;;

}
double mult(double x, double y) {
	
	return x * y;

}
double divis(double x, double y) {
	
		return x / y;

}

double expo(double x, double y) {
	int mid = 1;
	int stat1 = static_cast<int>(x);
	int stat2= static_cast<int>(y);
	for (int i = 1; i <= y; i++) {
		mid = mid * x;

	};
	double result = static_cast<double>(mid);
	return result;

}
