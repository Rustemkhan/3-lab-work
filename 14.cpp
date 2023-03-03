#include <iostream>

using namespace std;

int main() {
    int N, df = 1;

    cin >> N;

    if (N % 2 == 0) {
        for (int i = 2; i <= N; i += 2) {
            df *= i;
        }
    }
    else {
        for (int i = 1; i <= N; i += 2) {
            df *= i;
        }
    }

    cout << df;


}
