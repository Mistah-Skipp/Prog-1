#include <iostream>
#include <fstream>
using namespace std;

//Function prototypes
void sortit(int *ptr, int cnt);		//ptr == data
int biarylookup(int *ptr, int cnt, int value);

int main() {
	ifstream infile;
	int cnt = 0, temp = 0;
	int *ptr;
	char fname[250];

	cout << "What file?: ";
	cin.getline(fname, 249);
	infile.open(fname);

	if (infile.fail()) {
		cerr << "Failed to open, closing...";
		exit(10);
	}

	while (!infile.eof()) {
		infile >> temp;
		cnt++;
	}
	infile.close();
	cout << "there were " << cnt << " Numbers in the file \n";
	
	ptr = new int[cnt];
	infile.open(fname);

	for (int i = 0; i < cnt; i++) {
		infile >> ptr[i];
	}
	infile.close();

	cout << "Sorting the numbers:\n";
	sortit(ptr, cnt);
	cout << "Numbers sorted:\n";
	
	for (int i = cnt / 2; i < cnt / 2 + 100; i++) {
		cout << i << ". " << ptr[i] << endl;
	}

	system("pause");
	return 0;
}

//Functions
void sortit(int *ptr, int cnt) {
	int i, j, temp;
	//bubble sort
	for (i = 0; i < cnt - 1; i++) {
		for (j = 0; j < cnt -1;j++ ) {
			if (ptr[j] > ptr[j + 1]) {
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	return;
}

int biarylookup(int *ptr, int cnt, int value) {


	return cnt;
}
