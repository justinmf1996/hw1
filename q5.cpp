#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]){
	if(argc < 2){
		cerr << "Please provide a string of characters." << endl;
		return 1;
	}
	stringstream ss;
	ifstream input(argv[1]);
	input >> ss;
}
