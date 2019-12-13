#include <iostream>

using namespace std;

int add(int x, int y);

void doAdd(int x, int y);

int main() {
    cout << add(10, 20) << endl;
    doAdd(10, 10);
}

int add(int x, int y) {
    cout << x + y << endl;
    return x + y;
}

void doAdd(int x, int y) {
    cout <<  x + y << endl;
}