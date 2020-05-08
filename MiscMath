#include <iostream>
using namespace std;

//function prototypes
double e2thex (double x);	//compute e^x
double factorial(int n);	//compute factorial
double xtotheN(double x, int n);	//compute x^n


int main() {
	double x, result;
	cout.precision(15);
	cout << "Enter a number: ";
	cin >> x;

	do {
		result = e2thex(x);
		cout << "e^" << x << " = " << result << endl;
		cout << "Enter another number (0 to exit): ";
		cin >> x;
	
	} while (x != 0);


	system("pause");
	return 0;
}



//functions

//e^x = 1+x + x^2/2! + x^3/3! + x^4/4!...
double e2thex(double x) {	//compute e^x

	double result = 1.0;
	int index = 1;
	double limit = 0;
	while (abs(result- limit) > 0.00000000000001) {
		limit = result;
		result = result + xtotheN(x, index) / factorial(index);
		index++;
	}


	return result;
}	

double factorial(int n) {	//compute factorial

	double result = 1;
	int i;

	for (i = 2; i <= n; i++) {
		result = result * i;
	}
	return result;

	//return 2.0;
}	
	
double xtotheN(double x, int n) {	//compute x^n
	double result = x;
	int i;

	for (i = 1; i < n; i++) {
		result *= x;
	}

	return result;
}	

