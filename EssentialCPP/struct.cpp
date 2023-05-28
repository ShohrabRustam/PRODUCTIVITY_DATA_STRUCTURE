#include <iostream>
using namespace std;
struct Rectangle {
    int length,weidth;
    int area(){
        return weidth*length;
    }
};


int main(){
    struct  Rectangle rect;
    rect.length =10;
    rect.weidth = 20;
    cout<<"AREA OF RECTANGLE : " << rect.area() <<" M^2 "<< endl;
    
}