#include <iostream>
using namespace std;

int addOdd(int n)
{
    if(n == 1)
        return 1;
    if(n % 2 != 0)
        return n + addOdd(n-2);
    else
        return addOdd(n-1);
    
}

int main()
{
    cout << addOdd(13) << endl;
}