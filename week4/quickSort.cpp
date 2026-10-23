#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = left - 1;

    for(int j = left; j < right; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}
void quickSort(int arr[], int left, int right){
    if(left >= right) return;
    
    int pivot_index = partition(arr, left, right);
    quickSort(arr, left, pivot_index - 1);
    quickSort(arr, pivot_index + 1, right);
}
int main(){

}