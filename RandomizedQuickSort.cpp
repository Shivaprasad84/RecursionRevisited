#include <iostream>
#include <ctime>

using namespace std;

int randIntRange(int s, int e)
{
    // returns a random number in range [s, e]
    return (1 + rand() % e);
}

void shuffel(int *arr, int e)
{
    for(int i = 0; i < e; i++)
    {
        swap(arr[i], arr[randIntRange(i+1, e)]);
    }
}

int partition(int *arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for(int j = s; j < e; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    return i + 1; // current pivot index
}


void quickSortHelper(int *arr, int s, int e)
{
    // Base Case
    if(s >= e)
        return;
    int p = partition(arr, s, e); // pivot index
    quickSortHelper(arr, s, p-1);
    quickSortHelper(arr, p+1, e);
}

void quickSort(int* arr, int s, int e)
{
    shuffel(arr, e);
    quickSortHelper(arr, s, e);
}

int main()
{
    srand(time(NULL));
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    quickSort(arr, 0, 9);

    cout << "After Sorting" << endl;
    for(int i : arr)
    {
        cout << i << " ";
    }
}