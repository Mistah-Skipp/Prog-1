#include <iostream>
using namespace std;

int main() {
	int mph, furlong;
	cout << "Enter a speed in mph: ";
	cin >> mph;
	furlong = mph * 2688;
	cout << endl << mph << " MPH is " << furlong << " furlongs/fortnight" << endl;

	system("pause");
	return 0;

}
