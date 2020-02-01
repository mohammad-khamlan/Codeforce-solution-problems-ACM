#include <iostream>
#include <string>
using namespace std;

int findmax(int i, int j) {
	if (i >= j)
		return i;
	 return j;
}

int last_moment(string students, int max, int i, int n) {
	int index = i; int max2 = 0;

	if (students[index] == 'P') 
		index++;

	if (students[index] == 'A') {
		index++;
		while (index < n) {
			if (students[index] != 'A')
				max2++;
			else
				return last_moment(students, findmax(max, max2), index, n);
			index++;

		}


		if (index == n)
			return findmax(max, max2);

	}
	else if (n == 1 && students[index - 1] == 'P')
		return 0;
	else
		if (index == n)
			return 0;
		else
		return last_moment(students, max2, index, n);


}

int main() {
	int t, n, flag = 0; string students;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> students;
		cout << last_moment(students, 0, 0, n)<<endl;
	}
}