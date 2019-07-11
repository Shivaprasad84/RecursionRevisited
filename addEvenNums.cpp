#include <iostream>
using namespace std;

int addEven(int n)
{
    if(n == 0)
        return 0;
    if(n%2 == 0)
        return n + addEven(n-2);
    else
        return addEven(n-1);
}

int main()
{
    cout << addEven(12) << endl; 
}