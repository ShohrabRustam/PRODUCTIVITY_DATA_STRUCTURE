#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>
/*
iterator
begin(), end(),rbegin(),r.end()
*/
using namespace std;
int main(int argc, char **argv){
    array <int,100> arr;
    arr.fill(-1);
    cout <<"Array : ";
    for(auto it= arr.begin(); it!=arr.end(); it++){
        cout   <<*it << " ";
    }
    cout << endl;

     cout <<"Reverse Array : ";
    for(auto it = arr.rbegin(); it <arr.rend(); it++){
        cout   <<*it << " ";
    }
    cout << endl;

    cout <<"Size of Array : "<<arr.size()<< endl;
    cout <<"First of Element of Array : "<<arr.front()<< endl;
    cout <<"Last of Element of Array : "<<arr.back()<< endl;


}