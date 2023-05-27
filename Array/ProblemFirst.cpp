// Reverse the array
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5,6,7};
    int n = sizeof(array) / sizeof(array[0]);
 
    // Reverse the array using alorithm library
    reverse(array, array + n); 
 
    // Print the reversed array
    cout << "Reversed Array: "<<endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    return 0;
}