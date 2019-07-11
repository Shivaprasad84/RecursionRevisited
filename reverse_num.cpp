#include <iostream>
#include <cmath>
using namespace std;

int revNum(int n, int len)
{
    if(len == 1)
        return n; 
    return (n % 10) * pow(10, len - 1) + revNum(n/10, --len); 
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << revNum(n, to_string(n).length()) << endl;
}