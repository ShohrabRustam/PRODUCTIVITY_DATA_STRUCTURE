#include<iostream>
#include <set>
using namespace std;
 
int main()
{
 set<int> s;
 s.insert(1);
  s.insert(1);
 s.insert(1);
 s.insert(2);
  s.insert(-2);
 s.insert(3);
 s.insert(4);
 s.insert(5);
 for(auto i : s)
    cout<< i << " ";
    cout << endl;
s.erase(3);
cout<<endl;
   for(auto i : s)
        cout<< i << " "; 

    cout<<endl;
    cout<<"Finding 4 : "<<s.count(4)<<endl;
    cout<<"Finding 6 : "<<s.count(6)<<endl;

set<int>::iterator it = s.find(1);
if(it != s.end()){
    cout<<"Element found : "<< *it << endl;

    for(auto i = it; i!=s.end(); i++)
        cout<< *i << " ";  
}else{
    cout<<"Element not found"<<endl;
}


return 0;

}