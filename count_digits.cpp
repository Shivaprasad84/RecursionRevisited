#include <iostream>
using namespace std;

int count_digits(int n)
{
    if(n < 10)
        return 1;
    return 1 + count_digits(n/10);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Number of digits in " << n << " is " << count_digits(n) << endl;
}
