#include <iostream>
using namespace std;

bool isPal(string s)
{
    if(s.length() <= 1)
    {
        return true;
    }
    else
    {
        char first = s[0];
        char last = s[s.length() - 1];
        if(first == last)
        {
            return isPal(s.substr(1, s.length() - 2));
        }
        else
        {
            return false;
        }
        
    }
}

int main()
{
    string pal_check = "MALAYALAM";
    cout << (isPal(pal_check) ? "Yes" : "No") << endl;

}