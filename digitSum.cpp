#include <iostream>
using namespace std;

int digit_sum(int n)
{
    if(n < 10)
        return n;
    return (n % 10) + digit_sum(n/10);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << digit_sum(n) << endl;
}