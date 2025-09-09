#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    int pos = 2; // position (0-based index)

    if (pos < myList.size()) {
        auto it = myList.begin();
        advance(it, pos);   // move iterator to position
        myList.erase(it);   // erase element at pos
    }

    // Print updated list
    for (int x : myList) {
        cout << x << " ";
    }
}
