#include <iostream>
#include <algorithm>
#include "quickSort.cpp"
using namespace std;

double median(int arr[], int n){
    if(n <= 0) return 0;
    quickSort(arr, 0, n-1);
    if(n%2 == 1) return arr[n/2];
    return (arr[n/2 - 1] + arr[n/2])/2;
}

int main(){

}
