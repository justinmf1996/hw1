#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void reverse(string* original, int m){
	int* newSize = &m;
	string *reversed = new string[*newSize];

	for(int i = 0; i < *newSize; i++){
		reversed[*newSize - i -1] = original[i];
	}
	for(int i = 0; i < *newSize; i++){
		cout << reversed[i] << endl;
	}
	delete [] reversed;

}

int print(const char filename[]){
	int* size;
	int n;

	ifstream input(filename);
	if(input.fail()){
		cerr << "Could not open file." << endl;
		return 1;
	}

	input >> n;
	size = &n;
	string *words = new string[*size];

	while(!input.fail()){
		for(int i = 0; i < *size; i++){
			//getline(input, words[i], ' ');
			input >> words[i];
		}
	}

	/*for(int i = 0; i < *size; i++){
		cout << words[i] << endl;
	}*/

	reverse(words, *size);

	delete [] words;

	return 0;
}

int main(int argc, char* argv[]){

	/*ifstream input;
	input.open(argv[1]);
	if(input.fail()){
		cerr << "Could not open file." << endl;
		return 1;
	}*/
	int done;
	done = print(argv[1]);
	if(done != 0){
		return 1;
	}
	return done;

}
