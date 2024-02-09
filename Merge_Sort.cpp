#include <iostream>
using namespace std;

void Conquer(int arr[], int si, int mid, int ei){
    int i = si, j = mid + 1, k = 0, merged[ei - si + 1];
    while(i <= mid && j <= ei){
        if(arr[i] < arr[j]){
            merged[k++] = arr[i++];
        }else{
            merged[k++] = arr[j++];
        }
    }
    while(i <= mid){
        merged[k++] = arr[i++];
    }
    while(j <= ei){
        merged[k++] = arr[j++];
    }

    for(i = si; i <= ei; i++){
        arr[i] = merged[i - si];
    }

}

void Divide(int arr[], int si, int ei){
    int mid = (si + ei)/2;
    if(si < ei){
        Divide(arr, si, mid);
        Divide(arr, mid+1, ei);
        Conquer(arr, si, mid, ei);
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
    Divide(arr, 0, n-1);
    Print_Ascending(arr, n);
    Print_Descending(arr, n);

}
