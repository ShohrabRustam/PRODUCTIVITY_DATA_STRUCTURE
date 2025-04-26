#include <iostream>
using namespace std;
string isOdd(int n);
string result;
string isEven(int n){
    if (n==0){
        return "ODD";
    }
    if (n<0){
        result = isOdd(n+1);
    }else{
        result = isOdd(n-1);
    }
    return result;
}

string isOdd(int n){
    if (n==0){
        return "EVEN";
    }
    if (n<0){
        result = isEven(n+1);
    }else{
        result = isEven(n-1);
    }
    return result;
}


int main(){
    int n=-51;
    cout <<n<<" is : "<< isOdd(n) << endl;
    return 0;
}