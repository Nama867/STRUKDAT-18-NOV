#include <iostream>
using namespace std;

typedef struct data {
    int top = 0;
    int aray[6];
} data;

void push(data &x, int y){
    x.top++;
    x.aray[x.top] = y;
    cout << y << " inserted successfully.";
};

void pop(data &x){
    x.top--;
    cout << x.aray[x.top+1] << " deleted successfully.";
};

void peek(data x){
    cout << "Top element: " << x.aray[x.top];
};

void display(data x){
    int i = 1;
    for (i; i <= x.top; i++){
        cout << "data ke-" << i << " : " << x.aray[i] << endl;
    };
};

int main(){
    int x = 0;
    int z;
    data y;
    cout << "===== STACK MENU =====" << endl << "1. Push 2. Pop 3. Peek" << endl << "4. Display 5. Exit" << endl;
    while (x != 5){
        cout << endl << "Choose operation: ";
        cin >> x;
        if (x == 1){
            cout << "Enter value: ";
            cin  >> z;
            push(y, z);
        } else if (x == 2) {
            pop(y);
        } else  if (x == 3){
            peek(y);
        } else if (x == 4){
            display(y);
        }
    }
    return 0;
};
