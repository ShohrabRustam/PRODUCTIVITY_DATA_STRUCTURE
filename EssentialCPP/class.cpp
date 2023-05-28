#include <iostream>
using namespace std;
class Rectangle{
     
    public : int length;
    public : int height;
    Rectangle(int x, int y){
        this->length = x;
        this->height = y;
    }
    public : void setParam(int a, int b);
    public : int area();
  
};

void Rectangle::setParam(int x, int y){
    this->length = x;
    this->height = y;
}

int Rectangle::area(){
    return this->length * this->height;
}
int main(){
    Rectangle rect(2,4);
    rect.setParam(10,89);
    cout << "area is : " <<rect.area() << endl;
}