#include <iostream>
using namespace std;
void printArray(int a[],int size){
    cout <<"Array is : ";
    for(int i=0; i<size; i++){
        cout <<a[i] << " ";
    }
    cout<<endl;
    return ;
}
int main(int argc, char** argv){
    int size = 10;
    int *p;
     p  = new int[size];

    for(int i = 0; i < size; i++){
        p[i] = 2*i;
    }
    printArray(p,size);
    return 0;
}