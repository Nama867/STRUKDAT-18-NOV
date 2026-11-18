#include <iostream>
using namespace std;

typedef struct data {
    int tail = 0;
    int aray[6];
} data;

void enqueue(data &x, int y){
    x.tail++;
    x.aray[x.tail] = y;
    cout << y << " inserted successfully.";
};

void dequeue(data &x){
    int a = x.aray[1];
    for (int i = 2; i <= x.tail; i++){
        x.aray[i-1] = x.aray[i];
    }
    x.tail--;
    cout << a << " removed successfully." << endl;
};

void front(data x){
    cout << "Front element: " << x.aray[1] << endl;
};

void display(data x){
    int i = 1;
    cout << "Queue: ";
    for (i; i <= x.tail; i++){
        cout  << x.aray[i] << " ";
    };
};

int main(){
    int x = 0;
    int z;
    data y;
    cout << "===== QUEUE MENU =====" << endl << "1. Enqueue 2. Dequeue" << endl << "3. Front 4. Display 5. Exit" << endl;
    while (x != 5){
        cout << endl << "Choose operation: ";
        cin >> x;
        if (x == 1){
            cout << "Enter value: ";
            cin  >> z;
            enqueue(y, z);
        } else if (x == 2) {
            dequeue(y);
        } else  if (x == 3){
            front(y);
        } else if (x == 4){
            display(y);
        }
    }
    return 0;
};
