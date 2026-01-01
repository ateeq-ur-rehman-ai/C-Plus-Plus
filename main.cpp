#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4,7,3,8,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original Array: " << endl;
    printarray(arr, n);
    bubble(arr, n);
    cout<<"Sorted Array:"<<endl;
    printarray(arr, n);

    return 0;
}
