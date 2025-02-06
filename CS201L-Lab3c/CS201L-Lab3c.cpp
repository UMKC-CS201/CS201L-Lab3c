// NAME:
// LAB SECTION:
// LECTURE SECTION:
// 
// CS201L-Lab3.cpp : This project will complete the Lab3 (2-D Vectors) 
//

#include "Matrix.h"

int main() {

	cout << "Welcome to My 2-D Vector Processor!\n";

	//create input file stream & name it, open the file
	ifstream inFile;
	inFile.open("dataValid.txt");

	//verify the input file is good - if not exit
	if (!inFile.good()) {
		cout << "Error opening input file!\n";
		return -1;
	}

	string inputStr1, inputStr2;
	vector<vector<int>> v1, v2;
	int valid1 = 0, valid2 = 0;

	while (getline(inFile, inputStr1)) {

			cout << "\n\nPROCESSING A SET OF MATRICES\n";

			cout << "\n\tPROCESSING FIRST MATRIX\n";
			//verify vector in inputStr1

			//NOTE: all vectors are valid in dataValid.txt
			//if valid, printVector & processVector

			valid1 = verifyVector(inputStr1, v1);
			if (valid1) {				
				printVector(v1);
				// IF row == col;  
				//   NOTE: v1.size() will return the number of vectors in v1 (ie the number of rows)
				//         v1[0].size() will give you the number of items in the first row in v1 (ie number of columns)
				//   processVector(v1);
				processVector(v1);
			}

			cout << "\n\tPROCESSING SECOND MATRIX\n";

			//read next input line
			getline(inFile, inputStr2);
			
			//verify vector, if valid, printVector & process vector v2
			//see what is above for v1




			cout << "\n\tPROCESSING BOTH MATRICES\n";
			//if both vectors are valid, 
			//   if sizes are correct addTwoMatrices




	}
	inFile.close();

}