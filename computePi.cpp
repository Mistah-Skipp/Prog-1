#include <iostream>
using namespace std;

//function prototypes
double pi();	//computing pi
double arctan(double);	//compute artan x- x^3/3+x^5/5...
double tothepow(double, double);	//x^n


int main() {
	cout.precision(15);
	cout << "Pi = " << pi() << endl;

	system("pause");
	return 0;
}

//functions
double pi() {	//pi computes 16*arctan(1/5) - 4*arctan(1/239)		
	double pi;
	pi = 16.0 * arctan(1.0 / 5.0) - 4.0 * arctan(1.0 / 239.0);
	return pi;
}

double arctan(double x) {	//arctan = x - x^3/3 + x^5/5 - x^7/7 + x^9/9...
	double result = 0.0;	//answer
	int index = 1;		//exponent & denom
	double limit = 1.0;	//how many times it runs
	double sign = 1;	//used to alternate the sign
	double addtosign;
	while (abs(result - limit) > 0.000000000000001) {
		limit = result;
		 
		addtosign = tothepow(x, index) / index;
		addtosign = addtosign * sign;
		result = result + addtosign;
		sign = -sign;
		index += 2;
	}
	return result;

}

double tothepow(double x, double n) {	//tothepower x^n		
	double result = 1.0;

	
	for (int i = 1; i <= n; i++) {	
		result *= x;
	}
	return result;
}
