#include <iostream>
using namespace std;
int main(){
int size ;
    cout <<"Enter the size of the array: "<<endl;
    cin >>size;
    int *p = new int[size];
    for(int i = 0; i < size; i++){
        cout << "enter the "<<i+1<<"th element" << endl;
        cin >> p[i];
    }
    int searchElement;
    cout <<"Enter the element to search" << endl;
    cin >> searchElement;
    for (size_t i = 0; i < size; i++)
    {
        if(p[i] == searchElement){
            cout<<"Element " <<searchElement<<" is found "<<" at index "<<i+1 <<endl;
            return 0;
        }
    }

    cout<<"Element  "<<searchElement <<" not found "<<endl;

    

    }