//recursive factorial
//n! = 1, if n == 0
//n! = (n-1)! * n if n >0
#include <iostream>
using namespace std;

//function proto
double rfact(int);


int main() {
	int num;
	cout.precision(15);
	cout << "Enter a num: ";
	cin >> num;

	while (num >= 0) {
		

		cout << num << "! = " << rfact(num) << endl;
		cout << "Enter another num(<0 exit): ";
		cin >> num;
	
	}


	system("pause");
	return 0;
}

//n! = 1, if n == 0
//n! = (n-1)! * n if n >0
double rfact(int n) {
	if ( n == 0) //base case
		return 1;
	 else //recursive call
		return n * rfact(n - 1);
}

/*
int recfib(int k)
{
	if (k == 0) {		// if k == 0
		return 0;
	} else if (k == 1) {		//	if k == 1
		return 1;
	} else {
		return (2 * recfib(k-1)) + recfib(k-2);	//2 fn-1 + fn-2 n>1
	}
}
*/
