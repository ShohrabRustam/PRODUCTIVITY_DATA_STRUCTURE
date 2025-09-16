#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    map<int,string> m;
    m[1] = "abc";
    m[2] = "bcd";
    m[3] = "cde";
    m[4] = "def";
        m[10] = "def";

    m.insert({5,"efg"});
    cout<<"Size : "<<m.size()<<endl;
    for(auto i : m)
        cout<< i.first << " " << i.second << endl;
    cout<<"Finding 4 : "<<m.count(4)<<endl;
    cout<<"Finding 6 : "<<m.count(6)<<endl; 
    map<int,string>::iterator it = m.find(1);
    if(it != m.end()){
        cout<<"Element found : "<< it->first << " " << it->second << endl;
        for(auto i = it; i!=m.end(); i++)
            cout<< i->first << " " << i->second << endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    m.erase(3);
    m.erase(m.find(2));
    cout<<"After erase : "<<endl;
    for(auto i : m)
        cout<< i.first << " " << i.second << endl;
    return 0;
}