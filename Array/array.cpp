#include<iostream>
using namespace std;
int main()
{
    int A[5] = {2,4,6,8,10};
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        cout<<A[i]<<" ";
    }
    return 0;
}