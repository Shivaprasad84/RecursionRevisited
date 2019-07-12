#include <iostream>
using namespace std;

void printDecimal(int digits, string prefix="")
{
    if(digits == 0)
    {
        cout << prefix << endl;
    }
    else
    {
        for(int i = 0; i <= 9; i++)
        printDecimal(digits-1, prefix + to_string(i));
    }
    
}

int main()
{
    int digits;
    cout << "Enter number of digits: ";
    cin >> digits;
    printDecimal(digits);
}