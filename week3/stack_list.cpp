#include <iostream>
#include "list.cpp"
using namespace std;

class Stack{
private:
    List L;
public:
    Stack(int k) : L(k){}
    // Kiem tra stack
    bool isEmpty(){
        return L.getSize() == 0;
    }
    // Them phan tu vao stack
    void push(int item){
        L.insertTail(item);
    }
    // Xoa phan tu cuoi va tra ve gia tri
    int pop(){
        if(isEmpty()) return 0;
        int x = L.get(L.getSize() - 1);
        L.deleteTail();
        return x;
    }
    // Tra ve kich thuoc stack
    int size(){
        return L.getSize();
    }
    // Tra ve gia tri phan tu cuoi
    int top() {
        if(isEmpty()) return 0;
        return L.get(L.getSize() - 1);
    }
};

int main(){
    
}
