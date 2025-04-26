#include <iostream>
using namespace std;
struct Rectangle{
    int width,height;
};
int area(struct Rectangle r){
    return r.width*r.height;
}
void changeLength(struct Rectangle *r,int height){
    r->height = height;
    return;
}
int main(int argc,char **argv){
    struct Rectangle rect={10,20};
    cout << "Area : "<<area(rect)<<endl;
    changeLength(&rect,100);
    cout << "Area After change height: "<<area(rect)<<endl;
}
