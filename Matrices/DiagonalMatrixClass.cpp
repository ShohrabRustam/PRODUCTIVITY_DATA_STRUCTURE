#include<iostream>
using namespace std;
 
class Diagonal {
    private: 
            int n;
            int *Arr;
    public:
            Diagonal(int n){
                this->n = n;
                Arr = new int[n];
            }

            void set(int i,int j,int k);
            int get(int i,int j);
            void display();
            ~Diagonal(){
                delete[]Arr;
            }
};

void Diagonal::set(int i,int j,int k){
    if(i == j){
        Arr[i] = k;
    }
}
 
int Diagonal::get(int i,int j){
    if (i==j)
    {
       return Arr[i];
    }else{
        return 0;
    }    
}

void Diagonal::display(){
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
           cout << " "<<Diagonal::get(i,j)<<" ";
        }
        cout << endl;
        /* code */
    }
    
}
int main()
{
    int size;
    cout <<"Enter the size of the matrix"<<endl;
    cin >>size;
    cout <<"Enter the Diagonal of the matrix"<<endl;
    Diagonal obj(size);
    for(int i=0; i<size; i++){
        int x;
        cin >>x;
        obj.set(i,i,x);
    }
    cout <<"Diagonal matrix given below : " << endl;
    obj.display();
    return 0;
}