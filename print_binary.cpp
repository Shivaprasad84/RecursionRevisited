#include <iostream>
using namespace std;

void print(int n)
{
    if(n < 2)
        cout << n;
    else
    {
        int last_digit = n % 2;
        int rest_of_the_digits = n / 2;
        print(rest_of_the_digits);
        print(last_digit);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    print(n);
}