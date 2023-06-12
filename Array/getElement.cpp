#include <iostream>
using namespace std;
int get(int A[],int index,int size){
    if (index<0 || index>=size){
        return -1;
    }
    return A[index];
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*i;
    }
    cout << get(p,5,10) << endl;
    return 0;
}