#include <iostream>
using namespace std;
int * returnArray(int n){
    int *Arr = new int[n];
    for(int i = 0; i < n;i++){
        Arr[i] = i+5;
    }
    return Arr;
}
int main(int arg,char **argv){
    int *Arr;
    int size = 10;
    Arr = returnArray(size);
    cout <<"array elements fron heap memory : ";
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
    cout <<endl;
}