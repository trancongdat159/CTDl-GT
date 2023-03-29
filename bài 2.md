#include <iostream>
using namespace std;

double S(double x, int n) {
    if (n == 0) {
        return 1; 
    } else {
        return S(x, n - 1) + (x, n) / (n);
    }
}

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double sum = S(x, n);
    cout << "Tong cua day so la: " << sum << endl;
    return 0;
}
