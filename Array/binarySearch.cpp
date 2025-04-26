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
    int searchKey;
    cout << "Enter the search key" << endl;
    cin >> searchKey;
    int low,mid,high=0;
    low = 0;high = size-1;
    while(low<=high){
        mid = (high + low)/2;
        if(p[mid]==searchKey){
            cout << "Key "<<searchKey+1 << " is Found at : " << mid <<" position "<< endl;
            return mid;
        }else if(searchKey<p[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout << "Key "<<searchKey << " is not Found " << endl;
    return 0;
}