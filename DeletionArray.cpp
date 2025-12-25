#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 25, 30, 40, 50};
    int n = 6; 
    int pos = 3; 
    for (int i = pos-1; i < n-1; i++)
        arr[i] = arr[i+1];

    n--; 

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
