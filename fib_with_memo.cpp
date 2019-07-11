#include <iostream>
#include <map>
using namespace std;

typedef unsigned long long int ullint;
map<ullint, ullint> c;

ullint fibo(ullint n)
{
    if(c[n])
        return c[n];
    if(n == 1 || n == 2)
        return 1;
    c[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    ullint n;
    cout << "Enter n: ";
    cin >> n;
    for(size_t i = 1; i <= n; i++)
    {
        cout << fibo(i) << " ";
    }
    cout << endl;
    c.clear();
}