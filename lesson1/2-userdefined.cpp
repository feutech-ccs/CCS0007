#include <iostream>

using namespace std;

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(float x, float y);
void menu();

int main()
{
    float x, y;
    int choices;
    do
    {

        menu();
        cout << "> ";
        cin >> choices;
        switch (choices)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << add(x, y) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << subtract(x, y) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << divide(x, y) << endl;
            break;
        }

    } while (choices < 5);
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}

void menu()
{
    cout << "[1] Add" << endl;
    cout << "[2] Subtract" << endl;
    cout << "[3] Multiply" << endl;
    cout << "[4] Divide" << endl;
}