#include <iostream>
using namespace std;

int Josephus(int n, int k)
{
    if(n == 1)
        return 1;
    return (Josephus(n-1, k) + k - 1) % n + 1;
}

int main()
{
    cout << Josephus(5, 2) << endl;
}