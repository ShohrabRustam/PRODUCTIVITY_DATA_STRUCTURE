#include <iostream>
using namespace std;
int main(int argc , char** argv){
    int staticArray[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            staticArray[i][j] = i+j;
        }
    }
    cout <<"PRINT STATIC 2D ARRAY "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<staticArray[i][j] <<" ";
        }
        cout<<endl;
    }

    int *dynamicArrayPointer[3];

    for(int i=0;i<3;i++){
        dynamicArrayPointer[i] = new int[4];
    } 
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            dynamicArrayPointer[i][j] =2*(i+j);
        }
    }
    
    cout <<"PRINT DYNAMIC 2D ARRAY USING SINGLE POINTER : : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<dynamicArrayPointer[i][j] <<" ";
        }
        cout<<endl;
    }

    int **dynamicArrayPointerUsingDoublePointer = new int*[3];

    for(int i=0;i<3;i++){
        dynamicArrayPointerUsingDoublePointer[i] = new int[4];
    }

     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            dynamicArrayPointerUsingDoublePointer[i][j] =3*(i+j);
        }
    }
    
    cout <<"PRINT DYNAMIC 2D ARRAY USING DOUBLE POINTER : :  "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<dynamicArrayPointerUsingDoublePointer[i][j] <<" ";
        }
        cout<<endl;
    }

    // delete [] dynamicArrayPointer;
    
    return 0;

}