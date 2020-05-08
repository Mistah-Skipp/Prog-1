/*Date:9-12-18
*/

#include <iostream>
using namespace std;

int main() {
	double num, absval;		//the intake number and the absvalue for the num
	//get a number
	cout << "Enter a number: ";
	cin >> num;
	
	//computer abs value
	if (num >= 0) {
		absval = num;
	}
	else {	//num < 0
		absval = -num;
	}
	//print result  

	cout << "the absolute value of " << num << " Is " << absval << endl;

	system("pause");
	return 0;
}
