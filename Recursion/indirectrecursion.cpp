#include <iostream>
using namespace std;
string isOdd(int n);
string result;
string isEven(int n){
    if (n==0){
        return "ODD";
    }
    result = isOdd(n-1);
    return result;
}

string isOdd(int n){
    if (n==0){
        return "EVEN";
    }
    result = isEven(n-1);
    return result;
}


int main(){
    int n=50;
    cout <<n<<" is : "<< isOdd(n) << endl;
    return 0;
}