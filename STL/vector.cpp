#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv){
    int size = 10;
    vector<int> vector_name; // {}

    cout << vector_name.size(); // -> print 0

    vector_name.push_back(1) // {1}
    vector_name.push_back(2) // {1,2}

    cout << vector_name.size(); // -> print 2
    
    vector_name.pop_back(2) // {1}
    
    vector_name.push_back(0) // {1,0}
    vector_name.push_back(-1) // {1,0,-1}

    vector_name.push_back(2) // {1,2}

    vector_name.clear() // erase all elements at once

    int size = 6;
    vector<int> v<size,-1>;  //-> {-1, -1, -1 , -1, -1, -1} // initialize vector with default values

    //copy entire vector into other vector
    vector<int> v1(v.begin(), v.end());
    vector<int> v2(v1);
 
    //copy vector into other vector
    vector<int> v2(v.begin(), v.end()-3);
    vector<int> v2(v.begin(), v.begin()+2);




}