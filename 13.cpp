#include <iostream>
using namespace std;

int main() {
    int N, pof3 = true;
    cin >> N;

    while (N > 1) {
        if (N % 3 != 0) {
            pof3 = false;
            break;
        }
        N /= 3;
    }

    if (pof3) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }


}
