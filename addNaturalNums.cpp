#include <iostream>
using namespace std;

int add(int n)
{
    if(n == 1)
        return 1;
    return n + add(n-1);
}

int main()
{
    cout << add(5) << endl;
}