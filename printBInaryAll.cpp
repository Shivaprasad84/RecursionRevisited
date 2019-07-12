#include <iostream>
using namespace std;

void print_binary(int digits, string prefix="")
{
    if(digits == 0)
    {
        cout << prefix << endl;
    }
    else
    {
        print_binary(digits - 1, prefix + "0");
        print_binary(digits - 1, prefix + "1");
    }
    
}

int main()
{
    int digits;
    cout << "Enter number of digits: ";
    cin >> digits;
    print_binary(digits);
}