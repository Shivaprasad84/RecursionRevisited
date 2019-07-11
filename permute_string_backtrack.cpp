#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// Backtracking --> permute --> choose/explore/unchoose
void permuteHelper(string s, string chosen, set<string>& alreadyChosen)
{
    // cout << "permuteHelper(\"" << s << "\", \"" << chosen << "\");" << endl;
    if(s.empty())
    {
        if(!binary_search(alreadyChosen.begin(), alreadyChosen.end(), chosen))
        {
            alreadyChosen.insert(chosen);
            cout << chosen << endl;
        }
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            // Choose
            char c = s[i];
            chosen += c;
            s.erase(i, 1);

            // Explore
            permuteHelper(s, chosen, alreadyChosen);

            // Un Choose
            s.insert(i, 1, c);
            chosen.erase(chosen.length() - 1);
        }
    }
    
}

void permute(string s)
{
    sort(s.begin(), s.end());
    set<string> alreadyChosen;
    permuteHelper(s, "", alreadyChosen);
}

int main()
{
    string s = "1234";
    permute(s);
}