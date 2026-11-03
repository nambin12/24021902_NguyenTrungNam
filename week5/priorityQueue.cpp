#include <iostream>
using namespace std;

void swim(int *arr, int k){
    while(k > 1 && arr[k/2] < arr[k]){
        swap(arr[k], arr[k/2]);
        k = k/2;
    }
}
void insert(int *arr, int n, int k){
    arr[++n] = k;
    swim(arr, n);
}
void sink(int *arr, int n, int k){
    while(2*k <= n){
        int j = 2*k;
        if(j < n && arr[j] < arr[j+1]) j++;
        if(arr[k] >=  arr[j]) break;
        swap(arr[k], arr[j]);
        k = j;
    }
}
int delMax(int *arr, int n){
    int max = arr[1];
    swap(arr[1],arr[n]);
    n--;
    sink(arr, n, 1);
    return max;
}
int peek(int *arr, int n){
    if(n == 0) return -1;
    return arr[1];
}
void display(int *arr, int n){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
        cout << endl;
    }
}
int main(){

}