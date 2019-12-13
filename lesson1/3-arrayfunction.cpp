#include <iostream>
#include <string>

using namespace std;
string exesnipao[6];
void addItem(int& pos, string name);

int main () {
    string name;
    int pos = 0;
    for(int x = 0; x < 6; x++) {
        cout << "Name of EX ni Pao: ";
        cin >> name;
        cout << endl;
        addItem(pos, name);
    }
}
void addItem(int& pos, string name) {
    exesnipao[pos] = name;
    cout << "Array: [";
        for(int x = 0; x <= pos; x++) {
            cout << exesnipao[x] << ",";
        }
    cout << "]" << endl;

    pos++;
}