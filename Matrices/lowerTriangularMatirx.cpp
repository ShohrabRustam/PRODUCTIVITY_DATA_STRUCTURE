 #include <iostream>
 #include <stdio.h>
 #include <stdlib.h>
 using namespace std;
 struct Matrix
{
 int *A;
 int n;
};

void Set(struct Matrix *m,int i,int j,int x)
{
 
    if(i>=j)
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}

int Get(struct Matrix m,int i,int j)
{
    if(i>=j)
      return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];
    else
        return 0;
}

void Display(struct Matrix m)
{
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++){
            cout <<" "<<Get(m,i,j)<<" ";
        }
        cout <<endl;
    }   
}

int main() {
    struct Matrix m;
    int i,j,x;
    cout << "Enter Dimension"<<endl;
    cin >> m.n;
    cout << "Enter All elements of Matrix"<<endl;
    // m.A = new m.A[m.n*(m.n+1)/2];
    // m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    m.A = new int[m.n];
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++){
            cin >>x;
            Set(&m,i,j,x);
        }
    } 

    cout << "lower bound Triangular matrix"<<endl;

    Display(m);
}
 

