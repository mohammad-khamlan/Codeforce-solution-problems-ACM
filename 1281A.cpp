#include <iostream>
#include <string>
using namespace std;

bool Suffix(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();
	if (n1 > n2)
		return false;
	for (int i = 0; i < n1; i++)
		if (s1[n1 - i - 1] != s2[n2 - i - 1])
			return false;
	return true;
}

int main() {
	int t = 0; bool bol;
	string sentences;
	cin >> t;
	string* result = new string[t];

	for (int i = 0; i < t; i++) {
		cin >> sentences;

		if (Suffix("po", sentences))
			result[i] = "FILIPINO";

		else if (Suffix("desu", sentences))
			result[i] = "JAPANESE";

		else if (Suffix("masu", sentences))
			result[i] = "JAPANESE";

		else if (Suffix("mnida", sentences))
			result[i] = "KOREAN";

		sentences = "";
	}

	for (int i = 0; i < t; i++)
		cout << result[i] << endl;
}