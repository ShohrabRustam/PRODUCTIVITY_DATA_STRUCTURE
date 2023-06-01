//M-th fibonacci divides N-th fibonacci
#include <iostream>
using namespace std;
void checkfibonaccidivides(int n, int m)
{
	int a = 0, b = 1, c;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	int n_fib_series_term = b;
	
	a = 0, b = 1;
	for (int i = 2; i <= m; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	int m_fib_series_term = b;
	
	// exceptional case for F(2)

	if (n == 2 || m == 2 || n_fib_series_term % m_fib_series_term == 0) {
		cout << "Yes" << endl;
	}

	// if none of the above cases,
	// hence not divisible
	else {
		cout << "No" << endl;
	}
}
int main()
{
	int m = 3, n = 6;
	checkfibonaccidivides(n, m);
	return 0;
}