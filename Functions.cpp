#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

int divide(int a, int b)
{
    int c;
    c = a / b;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter Num 1: " << endl;
    cin >> a;
    cout << "Enter Num 2: " << endl;
    cin >> b;
    cout << "The Sum is: " << add(a, b);
    return 0;
}