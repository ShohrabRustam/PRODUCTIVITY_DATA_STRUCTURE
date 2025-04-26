#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int STATICARRAY[10] = {1,2,3,4,5,6,7,8,9,10};
    cout <<"STATIC ARRAY : ";
    for(int i=0; i<10; i++){
        cout<<STATICARRAY[i]<<" ";
    }
    cout<<endl;
    int *dynamicArrayPointer;
    dynamicArrayPointer = new int[10];
    for(int i=0; i<10; i++){
        dynamicArrayPointer[i] = 2*STATICARRAY[i];
    }
    cout <<"DYNAMIC ARRAY : ";
    for(int i=0; i<10; i++){
        cout<<dynamicArrayPointer[i]<<" ";
    }
    cout<<endl;
    delete []dynamicArrayPointer;

}