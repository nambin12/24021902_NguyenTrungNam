#include <iostream>
using namespace std;

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
void heapSort (int *arr, int n){
    for(int k = n/2; k >= 1; k--) sink(arr, n, k);
    for(int i = n; i >= 1; i--) delMax(arr, i);
}
int main(){

}