#include <iostream>
#include <string>
using  namespace std;

int main() {
	int a = 0, b = 0, c = 0, n = 0, t = 0, A = 0, B = 0, C = 0;

	cin >> t;
	string* result = new string[t];

	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> n;

		A = (n - (a - b) - (a - c)) / 3;
		B = (a - b) + A;
		C = n - (A + B);
		a = a + A;
		b = b + B;
		c = c + C;

		if (a == b && a == c && b == c) result[i] = "yes";
		else result[i] = "No";
		A = 0, B = 0, C = 0;
	}
	for (int i = 0; i < t; i++)
		cout << result[i] << endl;
}