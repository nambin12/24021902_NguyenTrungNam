#include <iostream>
#include <cstring>
using namespace std;

struct Symbol {
    char name[50];
    char type[20];
};
class SymbolTable{
private:
    Symbol table[100];
    int count;
public:
    SymbolTable(){
        count = 0;
    }
    // Insert
    void insert(const char* name, const char* type){
        if (lookup(name) != -1) return;
        if (count == 100) return;
        strcpy(table[count].name, name);
        strcpy(table[count].type, type);
        count++;
    }
    // Lookup
    int lookup(const char* name){
        for(int i = 0; i < count; i++){
            if(strcmp(table[i].name, name) == 0) return i;
        }
        return -1;
    }
    // Remove
    void remove(const char* name){
        int pos = lookup(name);
        if(pos == -1) return;
        for (int i = pos; i < count - 1; i++) table[i] = table[i + 1];
        count--;
    }
    // Display
    void display(){
        cout << "\nName\t\tType\n";
        for(int i = 0; i < count; i++){
            cout << table[i].name << "\t\t" << table[i].type << endl;
        }
    }
};
int main() {
    
}
