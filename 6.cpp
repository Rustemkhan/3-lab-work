/*
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float A;
	cin >> A;
	int N;
	cin >> N;

	float q = 1;
	float b = 1;

	for (int i = 1; i <= N; i++) {
		q *= A;
		float c = pow(-1, i) * q;
		b += c;
	}
	cout << b;
	
	return 0;
}
*/