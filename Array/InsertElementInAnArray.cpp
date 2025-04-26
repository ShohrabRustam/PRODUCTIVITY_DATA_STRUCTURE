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
    int newsize = size + 1;
    int *q = new int[newsize];
     for (size_t i = 0; i < size; i++)
    {
        q[i] = p[i];
    }
    delete [] p;
    p = q;
    q= NULL;

    int index,value;
    cout <<"Enter the index to insert data "<<endl;
    cin >> index;
    if(index<0||index>size){
        cout<<"Error wrong index "<<endl;
        return 0;
    }
    cout<<"Enter the value to insert on index "<<index<<endl;
    cin>>value;

    for(int i= newsize-1;i>=index;i--) {
        p[i] = p[i-1];
    }

    p[index] = value;

    for(int i=0; i<newsize; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;


    return 0;
}