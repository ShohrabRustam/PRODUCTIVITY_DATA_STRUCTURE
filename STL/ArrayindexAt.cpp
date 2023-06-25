#include <iostream>
#include <array>
#include <iterator>
using namespace std;
int main(int argc, char **argv){
    array <int,100> arr;
    arr.fill(-1);
    cout <<"Array : ";
    for(int i = 0; i < 10; i++){
        cout   << arr.at(i) << " ";
    }
    cout << endl;
}