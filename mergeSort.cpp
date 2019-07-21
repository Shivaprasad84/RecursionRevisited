#include <iostream>
#include <vector>
using namespace std;

void merge(int* arr, int s, int e)
{
    int mid = s + (e - s)/2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[100];

    while(i <= mid && j <= e)
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    } 

    while(i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while(j <= e)
    {
        temp[k++] = arr[j++];
    }

    // Copy to original array

    for(int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int* arr, int s, int e)
{
    if(s >= e)
        return;
    // Divide
    int mid = s + (e - s)/2;
    // Sort
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    // Merge
    merge(arr, s, e);
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergeSort(arr, 0, 8);

    cout << "After sorting" << endl;
    for(int i : arr)
    {
        cout << i << " ";
    }
}