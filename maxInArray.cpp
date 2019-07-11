#include <iostream>
using namespace std;

int max_in_array(int max, int* arr, int len)
{
    if(len > -1)
    {
        if(arr[len] > max)
        {
            max = arr[len];
        }
        else
        {
            return (max = max_in_array(max, arr, len - 1));
        }
    }
    else
    {
        return max;
    }
    
}

int main()
{
    int n, temp;
    cout << "Enter n: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " array elements" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    cout << max_in_array(arr[n-1], arr, n - 1) << endl;

}