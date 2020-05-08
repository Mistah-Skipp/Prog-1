#include <iostream>
#include <cstring>

using namespace std;

//function prototypes
void translate(char input[], char output[]);	//translate the sentence to Pig Latin
bool EXIT(char input[]);
bool isvowel(char c);
bool isq(char c);
bool isy(char c);
bool iscons(char c);
void transvowel(char input[], char output[], int &i, int &o);
void transq(char input[], char output[], int &i, int &o);
void transy(char input[], char output[], int &i, int &o);
void transcons(char input[], char output[], int &i, int &o);


int main() {
	char input[1000];
	char output[10000];


	cout << "Enter a sentence to translate: ";
	cin.getline(input, 999);

	while (!EXIT(input)) {
		translate(input, output);		//translate function
		cout << "The sentence:\n" << input << "\nTranslates to: \n" << output << endl;	//outputs the sentence and piglatin translation
		cout << "Enter another sentence (\"EXIT to exit\"): ";
		cin.getline(input, 999);
	}
	return 0;
}
void translate(char input[],char output[]) {
	int i;		//index into input
	int o;		//index into output
	i = o = 0;
	while (input[i] != '\0' ) {
		if (isvowel(input[i])) {
			transvowel(input, output, i, o);
		} else if (isq(input[i])) {
			transq(input, output, i, o);
		} else if (isy(input[i])) {
			transy(input, output, i, o);
		} else if (iscons(input[i])) {
			transcons(input, output, i, o);
		} else {
			output[o++] = input[i++];
		}
	}
	output[o] = '\0';
	return;
}
//returns true if the first 4 letters are exit in the input array
bool EXIT(char input[]) {
	if (input[0] == 'e' || input[0] == 'E') {
		if (input[1] == 'x' || input[1] == 'X') {
			if (input[2] == 'i' || input[2] == 'I') {
				if (input[3] == 't' || input[3] == 'T') {
					return true;
				}
			}
		}
	}
	return false;
}
//checks if c is a vowel
bool isvowel(char c) {
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U' )
		return true;
	else
		return false;
}
//checks if c is a 'q'
bool isq(char c) {
	if (c == 'q' ||c == 'Q') 
		return true;
	 else 
		return false;
}
//checks if c is a 'y'
bool isy(char c) {
	if (c == 'y' || c == 'Y')
		return true;
	else
		return false;
}
//checks if c is a consonants
bool iscons(char c) {
	if (c != 'a' || c != 'A' || c != 'e' || c != 'E' || c != 'i' || c != 'I' || c != 'o' || c != 'O' || c != 'u' || c != 'U')
		return true;
	else
		return false;
}
void transvowel(char input[], char output[], int &i, int &o) {	//adds way to the end of the word
	while (isalpha(input[i]) || input[i] == '\'') {
		output[o++] = input[i++];
	}
	output[o++] = 'w';
	output[o++] = 'a';
	output[o++] = 'y';
	output[o++] = input[i++];
	return;
}
void transq(char input[], char output[], int &i, int &o) {
	i = i + 2;//skip q and u
	while (isalpha(input[i]) || input[i] == '\'' ){
		output[o++] = input[i++];
	}
	output[o++] = 'q';
	output[o++] = 'u';
	output[o++] = 'a';
	output[o++] = 'y';
	output[o++] = input[i++];
	return;
}
void transy(char input[], char output[], int &i, int &o) {
	i = i++;
	while (isalpha(input[i]) || input[i] == '\'') {
		output[o++] = input[i++];
	}
	output[o++] = 'y';
	output[o++] = 'a';
	output[o++] = 'y';
	output[o++] = input[i++];
	return;
}
void transcons(char input[], char output[], int &i, int &o) {
	int start, end;
	//skip initial cons
	//start is index of 1st cons
	//end is index of last cons
	start = i;
		while (!isvowel(input[i])) {
			i++;
		}
	end = i;

	//copy rest of word to output
	while (isalpha(input[i]) || input[i] == '\'') {
		output[o++] = input[i++];
	}

	for (int m = start; m < end; m++) {
		output[o++] = input[m];
	}
	output[o++] = 'a';
	output[o++] = 'y';
	output[o++] = input[i++];
	return;
}

/*
Enter a sentence to translate: the yellow barrely crashed quickly
The sentence:
the yellow barrel crashed quickly
Translates to:
ethay ellowyay arrelbay ashedcray icklyquay
Enter another sentence ("EXIT to exit"):
*/
