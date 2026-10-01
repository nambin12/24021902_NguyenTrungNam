#include <iostream>
using namespace std;

void xoa(int a[], int &n, int k){
    for (int i = k - 1; i < n - 1; i++){
        a[i] = a[i + 1];
    }

    n--;
}

void chen(int a[], int &n, int y, int m){
    for (int i = n; i >= m; i--){
        a[i] = a[i - 1];
    }

    a[m - 1] = y;

    n++;
}

int main(){
    int a[100];
    int n;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap day:\n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Xoa
    int k;
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;

    xoa(a, n, k);

    cout << "Day sau khi xoa:\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    // Chen
    int y, m;

    cout << "\nNhap y: ";
    cin >> y;

    cout << "Nhap vi tri m can chen: ";
    cin >> m;

    chen(a, n, y, m);

    cout << "Day sau khi chen:\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}