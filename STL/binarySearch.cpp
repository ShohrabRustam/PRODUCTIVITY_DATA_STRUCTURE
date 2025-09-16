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

    cout<<"MAX: " << max(v[0],v[1]) <<endl;
    cout<<"MIN: "<< min(v[0],v[1]) <<endl;
    cout<<"MAX: " << *max_element(v.begin(),v.end())<<endl;
    cout<<"MIN: "<< *min_element(v.begin(),v.end()) <<endl;
    // cout << "SUM: " << accumulate(v.begin(), v.end(), 0) << endl;
    // cout << "PRODUCT: " 
    //  << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;
    cout<<"COUNT 2: "<< count(v.begin(),v.end(),key) <<endl;
}