#include <iostream>

using namespace std;

void swap(int& x, int& y) {
    int temp = y;
    y = x;
    x = temp;
}

int main () {
    int x = 100, y = 200;

    cout << x << y << endl;

    swap(x,y);

    cout << endl;

    cout << x << y << endl;


}