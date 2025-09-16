#include<iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int key;
    cin >> key;
    bool present = binary_search(v.begin(), v.end(), key);
    if(present){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not Present"<<endl;
    }
    return 0;
}