
#include <iostream>
#include <algorithm>
using namespace std;

struct PriorityQueue {
    int *arr;
    int n;
    int capacity;

    void swim(int k){
        while(k > 1 && arr[k/2] < arr[k]){
            swap(arr[k], arr[k/2]);
            k = k/2;
        }
    }
    void sink(int k){
        while(2*k <= n){
            int j = 2*k;
            if(j < n && arr[j] < arr[j+1]) j++;
            swap(arr[k], arr[j]);
            k = j;
        }
    }
    // Khoi tao Priority Queue
    void init(int cap){
        capacity = cap;
        arr = new int[capacity + 1];
        n = 0;
    }

    // Them phan tu
    void insert(int x){
        arr[++n] = x;
        swim(n);
    }
    // Lay phan tu uu tien cao nhat
    int peek(){
        if(n == 0) return -1;
        return arr[1];
    }

    // Xoa va tra ve phan tu uu tien cao nhat
    int delMax(){
        if(n == 0) return -1;
        int result = arr[1];
        swap(arr[1], arr[n]);
        n--;
        sink(1);
        return result;
    }
    // Kiem tra
    bool isEmpty(){
        return n == 0;
    }
    // Kich thuoc
    int size(){
        return n;
    }
    // Hien thi
    void display(){
        for(int i = 1; i <= n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    // Giai phong bo nho
    void destroy(){
        delete[] arr;
        arr = nullptr;
        n = 0;
        capacity = 0;
    }
};

int main(){

}
