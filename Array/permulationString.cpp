#include <iostream>
#include <vector>
using namespace std;

void permutationString(string s, int k) {
    static vector<int> A(s.length(), 0); // tracks used characters
    static string res = "";              // builds the current permutation
    int n = s.length();

    if (k == n) {
        cout << "Result: " << res << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            A[i] = 1;
            res += s[i];
            permutationString(s, k + 1);
            A[i] = 0;
            res.pop_back(); 
        }
    }


}

int main() {
    string s = "abca";
    permutationString(s, 0);
    return 0;
}
