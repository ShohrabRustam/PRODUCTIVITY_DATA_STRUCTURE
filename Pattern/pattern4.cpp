// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int n = 5;

	// looping rows
    int row = 1;
	while(row <= n){
        int space = n-row;
        while(space){
            cout <<" ";
            space--;
        }
        int col = 1;
        while(col <= row){
            cout << "*";
            col++;
        }
        cout <<endl;
        row++;
    }
	return 0;
}
