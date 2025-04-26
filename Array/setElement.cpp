#include <iostream>
using namespace std;
int set(int A[],int index,int value,int size){
    if (index<0 || index>=size){
        return -1;
    }
    A[index] = value;
    return 1;
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*i;
    }
    cout << set(p,5,5,10) << endl;
    return 0;
}