#include <iostream>
using namespace std;
template <class T>

class Arithmatic {
    public:T a;
    public: T b;
        Arithmatic(T a,T b);
        T sum();
        T sub();
     };

    template <class T>
        Arithmatic<T>::Arithmatic(T a,T b){
        this->a = a;
        this->b = b;
    }

    template <class T>
    T Arithmatic<T>::sum(){
        return (this->a + this->b);
    }

    template <class T>
    T Arithmatic<T>::sub(){
        return (this->a - this->b);
    }

    int main(){
        Arithmatic <int> ar(10,20);
        cout << "sum of "<<ar.a << " + " <<ar.b <<" = "<<ar.sum()<<endl;
        cout <<"sub of "<<ar.a << " - " <<ar.b <<" = "<< ar.sub()<<endl;;
        return 0;
    }