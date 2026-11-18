#include <iostream>
#include <string>
using namespace std;

typedef struct data {
    int top = 0;
    char aray[100];
} data;

void push(data &x, char y){
    x.top++;
    x.aray[x.top] = y;
};

char pop(data &x){
    x.top--;
    return (x.aray[x.top+1]);
};

void display(data x){
    int i = 1;
    for (i; i <= x.top; i++){
        cout << x.aray[i];
    };
};

int main(){
    int x = 0;
    string z;
    data y, b;
    char a;
    cout << "Enter a word: ";
    cin >> z;
    for (x; x < z.length(); x++){
        push(y, z[x]);
    }
    cout << endl << "Original word: ";
    display(y);
    cout << endl;
    x = 0;
    for (x; x < z.length(); x++){
        a = pop(y);
        push(b, a);
    }
    cout << endl << "Reversed word: ";
    display(b);
    return 0;
};
