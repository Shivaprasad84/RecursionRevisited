#include <iostream>
#include <cmath>
using namespace std;

// Armstrong numbers: 153 --> 1^3 + 5^3 + 3^3 --> armstrong number!

int Armstrong(int n, int len)
{
    if(n == 0)
        return 0;
    return pow((n % 10), len) + Armstrong(n/10, len);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << (n == Armstrong(n, to_string(n).length()) ? "Yes" : "No") << endl;

}