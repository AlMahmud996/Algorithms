#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n){
    int i, j, k;
    for(i = 0; i < n-1; i++){
        k = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        if(k != i){
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }
    cout << "Hi";
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

    Selection_Sort(arr, n);
    Print_Ascending(arr, n);
    Print_Descending(arr, n);

}
