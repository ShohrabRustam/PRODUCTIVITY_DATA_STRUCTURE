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

    cout << "enter the element to append" << endl;
    cin>>p[size];

     cout <<"Array Before Append is "<<endl;
    for(int i=0; i<size; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout <<"Array After Append is "<<endl;
    for(int i=0; i<newsize; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;


    return 0;
}