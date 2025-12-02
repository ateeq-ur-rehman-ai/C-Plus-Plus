#include <iostream>
using namespace std;
int main()
{
    int a = 15;
    int *ptr = &a;
    int **parptr = &ptr;
    cout << ptr << endl;
    cout << &ptr << endl;

    cout << &parptr << endl;

    cout << *(parptr) << endl;
    return 0;
}