#include <iostream>
using namespace std;

void Insertion_Sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
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
    Insertion_Sort(arr, n);
    Print_Ascending(arr, n);
    Print_Descending(arr, n);

}
