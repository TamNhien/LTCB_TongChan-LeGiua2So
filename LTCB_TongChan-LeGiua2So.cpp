#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    int sumOdd = 0, sumEven = 0;

    // Đảm bảo a là số lẻ và b là số chẵn
    if (a % 2 == 0) ++a;
    if (b % 2 == 1) ++b;

    for (int i = a; i <= b; i += 2) {
        sumOdd += i; // Tính tổng các số lẻ
        sumEven += (i + 1); // Tính tổng các số chẵn
    }

    cout << "Tong cac so le giua " << a << " va " << b << " la: " << sumOdd << endl;
    cout << "Tong cac so chan giua " << a << " va " << b << " la: " << sumEven << endl;

    return 0;
}
