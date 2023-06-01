#include <iostream>
using namespace std;
/*
    Steps for tower of hanoi
    case 1:
    towerOfHanoitowerOfHanoi(1,TowerA,TowerB,TowerC))
    Move towerA to towerC using towerB 

    case 2:
    towerOfHanoitowerOfHanoi(2,TowerA,TowerB,TowerC))
    steps:
            towerOfHanoitowerOfHanoi(1,TowerA,TowerC,TowerB))
            Move towerA to towerC using towerB 
            towerOfHanoitowerOfHanoi(1,TowerB,TowerA,TowerC))

    case 3:
    towerOfHanoitowerOfHanoi(3,TowerA,TowerB,TowerC))
    steps:
            towerOfHanoitowerOfHanoi(2,TowerA,TowerC,TowerB))
            Move towerA to towerC using towerB 
            towerOfHanoitowerOfHanoi(1,TowerB,TowerA,TowerC))

        case N:
    towerOfHanoitowerOfHanoi(N,TowerA,TowerB,TowerC))
    steps:
            towerOfHanoitowerOfHanoi(N-1,TowerA,TowerC,TowerB))
            Move towerA to towerC using towerB 
            towerOfHanoitowerOfHanoi(N-1,TowerB,TowerA,TowerC))

*/
void towerOfHanoi(int numberOfDisk, string TowerA,string TowerB,string TowerC){
    int static step = 1;
    if (numberOfDisk==0){
        return ;
    }
    towerOfHanoi(numberOfDisk-1,TowerA,TowerC,TowerB);
    cout << "step "<<  step++ << " is : MOVE DISK "<<TowerA<<" TO "<<TowerC << " USING "<<TowerB<<endl;
    towerOfHanoi(numberOfDisk-1,TowerB,TowerA,TowerC);
}
int main(int arg,char **argv){
    int numberOfDisk;
    cout <<"Enter Number of Disk: ";
    cin >> numberOfDisk;
    string TowerA = "TowerA",TowerB="TowerB",TowerC = "TowerC";
    towerOfHanoi(numberOfDisk,TowerA,TowerB,TowerC);
    return 0;
}