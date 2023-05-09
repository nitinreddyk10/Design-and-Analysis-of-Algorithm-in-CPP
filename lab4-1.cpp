#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
      largest = left;
    if (right < n && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }
  void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
      heapify(arr, i, 0);
    }
  }
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }

int main() {
    int size;
    cin>>size;
    if(size==1)
    {
        cout<<"*";
        return 0;
    }
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    heapSort(a,size);
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[i+(size/2)])
        {
           cout<<a[i]; 
            return 0;
        }   
    }
    cout<<"*";
    return 0;
}
