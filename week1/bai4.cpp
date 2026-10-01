#include <iostream>
using namespace std;

int UCLN(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

void rutGon(int &a, int &b){
    int u = UCLN(a, b);

    a = a / u;
    b = b / u;
}

int main(){
    int a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    rutGon(a, b);

    cout << "Phan so sau khi rut gon: "
         << a << "/" << b;

    return 0;
}