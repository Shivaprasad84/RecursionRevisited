#include <iostream>
using namespace std;

int SquaresSum(int n)
{
    if(n == 1)
        return 1;
    return n*n + SquaresSum(n-1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << SquaresSum(n) << endl;
}