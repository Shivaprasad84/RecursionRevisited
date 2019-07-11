#include <iostream>
using namespace std;

void print(string s)
{
    if(s.length() > 0)
    {
        print(s.substr(1, s.length() - 1));
        cout << s[0];
    }   
}

int main()
{
    string s = "Shiva";
    print(s);
}
