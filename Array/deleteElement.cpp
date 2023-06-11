#include <iostream>
using namespace std;
int main(int argc, const char** argv) {
    int size ;
    cout <<"Enter the size of the array: "<<endl;
    cin >>size;
    int *p = new int[size];
    for(int i = 0; i < size; i++){
        cout << "enter the "<<i+1<<"th element" << endl;
        cin >> p[i];
    }
     int deteleIndex;
     cout <<"Enter the index to delete" << endl;
          cin >> deteleIndex;

     if(deteleIndex<0 || deteleIndex>size){
        cout << "Error: Invalid Index" <<endl;
        return 0;
     }


    cout <<"Array Before Delete is "<<endl;
    for(int i=0; i<size; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(int i=deteleIndex-1; i<size;i++){
        p[i] = p[i+1];
    }

    size= size-1;
    cout <<"Array After After is "<<endl;
    for(int i=0; i<size; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;


    return 0;
}