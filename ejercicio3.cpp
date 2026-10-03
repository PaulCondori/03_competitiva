#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long suma = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        suma -= x;
    }
    
    cout << endl;

    cout << suma << endl;

    return 0;
}
