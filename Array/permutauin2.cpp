#include <iostream>
#include <vector>
#include <string>
using namespace std;

void permutationString(string s, int l, int h)
{
    if (l == h) {
        cout << s << endl;
        return;
    }

     for (int i = l; i <= h; i++) {
        // Swap the current character with the starting character (l)
        swap(s[l], s[i]);

        // Recursively call permute for the next position
        permutationString(s, l + 1, h);

        // Backtrack by swapping back to the original state
        swap(s[l], s[i]);
    }
    return;
}

int main() {
    string s = "abc";
    permutationString(s, 0, s.length()-1);
    return 0;
}
