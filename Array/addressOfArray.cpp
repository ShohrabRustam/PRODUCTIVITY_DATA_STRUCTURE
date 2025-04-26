#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int A[5];
    int count = sizeof(A)/sizeof(A[0]);
    for (size_t i = 0; i < count; i++)
    {
        cout<<"address of array "<<&A[i]<<endl;
    }
    
}