#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int C = 0;

	while (A >= B) {
		A -= B;
		C++;
	}
	cout << C << " " << A;
	return 0;
}