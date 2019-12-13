#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main () {
    int x = 69;
    int result;
    cout << "sqrt(" << x << "): " << sqrt(x) << endl;
    cout << "pow("<< x << ", 2): " << pow(x, 2) << endl;
    cout << "abs(" << x << "):" << abs(x) << endl;    
    cout << "labs(" << x << "):" << labs(x) << endl;
    cout << "fabs(" << x << "):" << fabs(x) << endl;
    cout << "ceil(69.69):" << ceil(69.69) << endl;
    cout << "floor(69.69):" << floor(69.69) << endl;
    cout << "rand():" << rand() << endl;
    cout << "srand(69): ";
    srand(69);
}