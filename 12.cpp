#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int a = 0;
	while (N >= K) {
		N -= K;
		++a;
	}

	cout << a << " ";
	cout << N;

	return 0;
	
}