#include <iostream>
using namespace std;

// Ham tinh so hang thu n cua day X
int x(int n) {
    if (n == 0) return 1;
    return x(n-1) + y(n-1);
}

// Ham tinh so hang thu n cua day Y
int y(int n) {
    if (n == 0) return 0;
    return 3 * x(n-1) + 2 * y(n-1);
}

int main() {
    int n;
    cout << "Nhap vao so hang thu n: ";
    cin >> n;
    cout << "So hang thu " << n << " cua day X la: " << x(n) << endl;
    cout << "So hang thu " << n << " cua day Y la: " << y(n) << endl;
    return 0;
}
