#include <iostream>
#include <string>
using namespace std;

int main () {
    string exesnipao[6];

    exesnipao[0] = "Gabriel";
    exesnipao[1] = "Clarice";
    exesnipao[2] = "Kath";
    exesnipao[3] = "Aldous";
    exesnipao[4] = "Ford";
    exesnipao[5] = "Andrew";

    float grades[] ={4.0, 3.0, 2.0, 1.0, 0.5};

    cout << endl;
    for(int x = 0; x < 6; x++) {
        cout << exesnipao[x] << endl;
    }
}