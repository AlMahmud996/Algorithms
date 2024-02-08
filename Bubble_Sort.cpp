#include <iostream>
using namespace std;

void Bubble_Sort(int arr[], int n){
    int i, j, flag = 0;
    for(i = 1; i < n; i++){
        for(int j = 0; j < (n-i); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void Print_Ascending(int arr[], int n){
    cout << "Array in Ascending Order: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Print_Descending(int arr[], int n){
    cout << "Array in Descending Order: ";
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cout << "Input Array Size: ";
    cin >> n;
    int arr[n];
    cout << "Input the value of an Array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Bubble_Sort(arr, n);
    Print_Ascending(arr, n);
    Print_Descending(arr, n);

}
