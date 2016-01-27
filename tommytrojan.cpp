#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 3){
    cerr << "Please provide an input and output file." << endl;
    return 1;
  }
  ifstream input(argv[1]);
  ofstream output(argv[2]);

  int floors;
  int *floorsizes;
  string ***trojans;
  string curr;

  input >> floors;
  trojans = new string**[floors];

  //you will need to keep track of how many people are on each floor.
  floorsizes = new int[floors];

  for (int i = 0; i < floors; i++) {
	  floorsizes[i] = 0;
	  trojans[i] = NULL;
  }
  while(getline(input, curr)) {
	  stringstream ss;
	  ss << curr;
	  ss >> curr;
	  if (curr == "MOVEIN") {
		  int i,k;
		  ss >> i;
		  ss >> k;
		  if (ss.fail()) {
			  output << "Error - incorrect command" << endl;
		  }
		  else {
		  	floorsizes[i-1] = k;
		  	
		  	int **level = new int*[k];
		  	for(int f = 0; f < i; f++){
		  		level[i][] = 
		  	}
		  	if(floorsizes[i] != 0){
		  		output << "Error - floor i is not empty" << endl;
		  	}else if(i > floors || i < 0){
		  		output << "Error - floor i does not exist" << endl;
		  	}else{
		  		floorsizes[i] =
		  		trojans = new string**[]
		  	}
		  }
	  }
	  else if (curr == "MOVEOUT") {
	  	int i;
	  	ss >> i;
	  	if(ss.fail()){
	  		output << "Error - incorrect command" << endl;
	  	}
	  	else{
	  		if(floorsizes[i] == 0){
	  			ouput << "Error - no students on floor" << endl;
	  		}else if(i > floors || i < 0){
	  			output << "Error - floor i does not exist"
	  		}else{
	  			floorsizes[i] = 0;
	  			delete []
	  		}

	  	}

	  }
	  else if (curr == "OBTAIN") {

	  }
	  else if (curr == "OUTPUT") {

	  }
	  else {

	  }
  }
  return 0;
}
