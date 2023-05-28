#include <iostream>
using namespace std;
struct Rectangle{
    int width,height;
};
void initilize(struct Rectangle * r,int height,int width){
    r->height = height;
    r->width = width;
    return;
}
struct Rectangle * get(struct Rectangle * r){
    return r;
}
int area(struct Rectangle r){
    return r.width*r.height;
}
void changeLength(struct Rectangle *r,int height){
    r->height = height;
    return;
}
int main(int argc,char **argv){
    struct Rectangle rect;
    initilize(&rect,5,10);
    cout << "Area : "<<area(rect)<<endl;
    changeLength(&rect,100);
    struct Rectangle *r = get(&rect);
    cout << "height : "<<r->height<<endl;
    cout << "Area After change height: "<<area(rect)<<endl;
}
