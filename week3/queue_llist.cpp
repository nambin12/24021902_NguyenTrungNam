
#include <iostream>
#include "linkedlist.cpp"
using namespace std;

class Queue{
private:
    LinkedList L;
public:
    Queue(){}
    //kiem tra queue
    bool isEmpty(){
        return L.getSize() == 0;
    }
    //them phan tu vao
    void enqueue(int item){
        L.insertTail(item);
    }
    //xoa phan tu dau va tra ve gia tri cua no
    int dequeue(){
        if (isEmpty()) return 0;
        int x = L.get(0);
        L.deleteHead();
        return x;
    }
    //tra ve phan tu dau
    int front(){
        if (isEmpty()) return 0;
        return L.get(0);
    }
    //tra ve kich thuocc
    int size(){
        return L.getSize();
    }
};

int main() {
    
}
