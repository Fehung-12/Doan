
#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cout << "Nhap so phan tu: ";
    cin >> n;

    // Nhap mang
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // Thuat toan Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        // Hoan doi
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    // Xuat mang sau khi sap xep
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
