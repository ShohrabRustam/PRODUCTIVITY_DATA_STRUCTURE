#include <iostream>
using namespace std;
struct Rectangle{
    int width,height;
};
int area(struct Rectangle r){
    return r.width*r.height;
}
int main(int argc,char **argv){
    struct Rectangle rect={10,20};
    cout << "Area : "<<area(rect);
}
