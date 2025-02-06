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

    //load individual 'token' values into the tokens vector 
    while (ss >> token)
        tokens.push_back(token);

    //verify values in the vector..you can assume values in dataValid.txt are valid
    //NOTE: tokens[0] will hold the value of row
    //      tokens[1] will hold the value of col
    //      the remaining values in Tokens will be the values for the matrix
    // 


    // SET row = tokens[0] & col = tokens[1] 
    // created nested loops to add the remaining items in Tokens to the Vector
    //
    // create a 1-D vector called currentRow
    // 
    // FOR 0 to row
    //   clear current row
    //   FOR 0 to column
    //       push_back the next value from tokens to the current row
    //   push current row onto the 2-D vector vec1


    return 1;
}

void processVector(vector<vector<int>> vec1) {
    // verify if vec1 is reflexive
    // 
    // SET reflexive to true
    // FOR i in 0 to ROW  ( ie vec1.size())
    //     IF vec1[i][i] == 0
    //        set reflexive to false
    //        break
    //

    // verify if vec1 is symmetric
    // 
    // SET symmetric to true
    // FOR i in 0 to ROW  ( ie vec1.size())
    //   FOR j in 0 to COL  ( ie vec1[0].size())
    //     IF vec1[i][j] != vec1[j][i]
    //        set symmetric to false
    //        break
    //

    // print results
}
void addTwoMatrices(vector<vector<int>> vec1, vector<vector<int>> vec2) {
    // see logic in assignment (you will need a nested loop)
}
void printVector(vector<vector<int>> vec1) {
    //for each row i (to vec1 size)
    //   for each column j (to vec1.at(i) size)
    //       print the value at [i][j]


}
