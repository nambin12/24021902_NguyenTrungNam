#include <iostream>
using namespace std;

void sapXep(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    int a[100];

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap day:\n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sapXep(a, n);

    cout << "Day sau khi sap xep tang dan:\n";

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}