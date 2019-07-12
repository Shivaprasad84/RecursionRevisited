#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search_helper(vector<int>& vec, int start, int end, int key)
{
    if(start > end)
        return -1;

    int mid = start + (end - start)/2;
    if(key == vec.at(mid))
    {
        return mid;
    }
    else if(key < vec.at(mid))
    {
            // go left
        return binary_search_helper(vec, start, mid-1, key);
    }
    else
    {
            // go right
        return binary_search_helper(vec, mid + 1, end, key);
    }
}

void binary_search(vector<int>& vec, int key)
{
    sort(vec.begin(), vec.end());
    for(int i : vec)
        cout << i << " ";
    cout << endl;
    cout << binary_search_helper(vec, 0, vec.size() - 1, key);
}

int main()
{
    int key = 8;
    vector<int> vec = {5, 3, 2, 1, 6, 8, 10, 22, 9};
    binary_search(vec, key);
}