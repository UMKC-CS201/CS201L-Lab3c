#include "Matrix.h"

bool isDigits(string str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

bool isBinary(string str) {
    return str.find_first_not_of("01") == string::npos;
}

int verifyVector(string inputLine, vector<vector<int>>& vec1) {
    // load values from the input string into a vector<string> 
    // temporary variables to hold the values in the input line
    string token;
    vector<string> tokens;

    //convert inputLine to a string stream to process 
    stringstream ss(inputLine);

    //load individual values into the vector 
    while (ss >> token)
        tokens.push_back(token);

    //verify values in the vector..you can assume values are valid

    //set row (tokens[0]) & column(tokens[1]) values 

    //for each row
    //   clear current row
    //   for each column in the row
    //       add the next value from tokens to the current row
    //   push row onto the 2-D vector


    return 1;
}

void processVector(vector<vector<int>> vec1) {

}
void addTwoMatrices(vector<vector<int>> vec1, vector<vector<int>> vec2) {

}
void printVector(vector<vector<int>> vec1) {
    //for each row i (to vec1 size)
    //   for each column j (to vec1.at(i) size)
    //       print the value at [i][j]


}
