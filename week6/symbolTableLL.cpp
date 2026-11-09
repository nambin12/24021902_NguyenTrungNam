#include <iostream>
#include <cstring>
using namespace std;

struct Symbol{
    char name[50];
    char type[20];
    Symbol* next;
};

class SymbolTable{
private:
    Symbol* head;
public:
    SymbolTable() {
        head = NULL;
    }
    // Insert
    void insert(const char* name, const char* type){
        if(lookup(name) != NULL) return;
        Symbol* p = new Symbol;
        strcpy(p->name, name);
        strcpy(p->type, type);
        p->next = head;
        head = p;
    }
    // Lookup
    Symbol* lookup(const char* name){
        Symbol* p = head;
        while(p != NULL){
            if(strcmp(p->name, name) == 0) return p;
            p = p->next;
        }
        return NULL;
    }
    // Remove
    void remove(const char* name){
        Symbol* p = head;
        Symbol* prev = NULL;
        while(p != NULL){
            if(strcmp(p->name, name) == 0){
                if(prev == NULL) head = p->next;
                else prev->next = p->next;
                delete p;
                return;
            }
            prev = p;
            p = p->next;
        }
    }
    // Display
    void display(){
        Symbol* p = head;
        cout << "\nName\t\tType\n";
        while(p != NULL){
            cout << p->name << "\t\t" << p->type << endl;
            p = p->next;
        }
    }
    // Destructor
    ~SymbolTable(){
        Symbol* p;
        while(head != NULL){
            p = head;
            head = head->next;
            delete p;
        }
    }
};

int main() {
    
}
