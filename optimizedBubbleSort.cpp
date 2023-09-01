//Bubble Sort - Sept. 1, 2023
#include <iostream>
using namespace std;

void printArray(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr[i];
        if(i < len - 1)
            cout << ", ";
        else
            cout << endl;
    }
}

int main() {
    int arr[] = {10,9,8,100,1001,10101010};
    int len = sizeof(arr)/sizeof(len);
    int n = len;
    for(int i = 0; i < n; i++) {
        int newn = 0;
        for(int j = 1; j < n; j++) {
            if(arr[j-1] > arr[j]){
                newn = i;
                swap(arr[j-1], arr[j]);
            }
            printArray(arr, len);
        }
        n = newn;
    }
    return 0;   
}
