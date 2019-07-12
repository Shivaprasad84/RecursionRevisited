#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& vec)
{
    cout << "( ";
    for(auto v : vec)
        cout << v << " ";
    cout << ")" << endl;
}

void diceHelper(int dice, vector<int> &chosen)
{
    if (dice == 0)
    {
        print(chosen);
    }
    else
    {
        for (int i = 1; i <= 6; i++)
        {
            //choose
            chosen.push_back(i);
            //explore
            diceHelper(dice - 1, chosen);
            //unchoose
            chosen.pop_back();

        }
    }
}

void diceRoll(int dice)
{
    vector<int> chosen;
    diceHelper(dice, chosen);
}

int main()
{
    int dice;
    cout << "Enter number of die: ";
    cin >> dice;
    diceRoll(dice);
}