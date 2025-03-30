#include<bits/stdc++.h>
using namespace std;
 
pair<int,int> firstAndLastElement(vector<int> &arr, int key){
    pair<int, int> p(-1, -1);
    for(int i=0;i<arr.size();i++){
        if (arr[i] == key) {
            if (p.first == -1) {
                p.first = i+1;  
            }
            p.second = i+1;  
        }
    }
    return p;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 2, 5, 2, 6};  
    int key = 2;

    pair<int, int> result = firstAndLastElement(arr, key);

    cout << "First occurrence: " << result.first << endl;
    cout << "Last occurrence: " << result.second << endl;
    return 0;
}