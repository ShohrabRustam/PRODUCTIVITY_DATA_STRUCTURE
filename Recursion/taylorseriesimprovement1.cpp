#include <iostream>
using namespace std;
double taylorseriesimprovements(int e , int n ){

    //series [1  + x + x2/2! + x3/3! + x4/4! + x5/5! + x6/6! + ....]
    // => (1 + x/1[1 + x/2 + x2/2*3 + x3/2*3*4 +.......])
    // => 1 + x/1[1 + x/2[ x/3 + x2/3*4 + .......]]
    // => 1 + x/1[1 + x/2 [1 + x/3[ x/4 + x2/4*5.......]]]
    // => 1 + x/1[1 + x/2 [1 + x/3[ 1+x/4[ x/5 + x2/5*6 + .......]]]
    static double result = 1;
    if (n==0) {
        return result;
    }
    result =  1 + (double) e/n * result;
    return taylorseriesimprovements(e,n-1);
}
int main(int argc, char** argv){
    // 1 + 5/1 + 25/2 = 18.5
    cout <<"TAYLOR SERIES RESULT : "<< taylorseriesimprovements(5,2)<<endl;
    return 0;
}