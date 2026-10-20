
#include <iostream>
#include "list.cpp"
using namespace std;

class Queue{
private:
    List L;
public:
    Queue(int k) : L(k){}
    //Kiem tra stack
    bool isEmpty(){
        return L.getSize() == 0;
    }
    //Chen phan tu vao
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
    //tra ve kich thuoc
    int size(){
        return L.getSize();
    }
};

int main() {

}
