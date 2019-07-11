#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    // return a*b in a recursive manner
    if(b == 1)
        return a;
    return a + multiply(a, b-1);
}

int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << multiply(a, b) << endl;
}