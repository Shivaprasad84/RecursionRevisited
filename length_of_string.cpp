#include <iostream>
using namespace std;

int length(char* str)
{
    static int count = 0;
    if(*str == '\0')
        return count;
    else
    {
        return (count = 1 + length(++str));
    }
}

int main()
{
    char* str = new char[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << length(str) << endl;
}