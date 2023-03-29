#include <iostream>
using namespace std;

double S(double x, int n)
{
    if (n == 0)
        return 1;
    else
        return ((x,n)/(n)) + S(x,n-1);
}

int tinhGiaiThua(int n) // Hàm tính giai th?a
{
    if (n == 0)
        return 1;
    else
        return n * (n-1);
}

int main()
{
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S = " << S(x, n);
    return 0;
}
