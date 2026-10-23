#include <iostream>
using namespace std;

void merge(int arr[], int left, int right){
    int mid = (right + left)/2;
    int n1 = mid - left + 1;
    int n2 = right - mid; 

    int *L = new int[n1];
    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }

    int *R = new int[n2];
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + j + 1];
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}
void mergeSort(int arr[], int left, int right){
    if(left >= right) return;
    int mid = left + (right - left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, right);
}

int main(){

}