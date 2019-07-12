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

void diceSumHelper(int dice, vector<int>& chosen, int desiredSum, int sumSofar)
{
    if(dice == 0)
    {
        if(sumSofar == desiredSum)
        {
            print(chosen);
        }
    }
    else
    {
        for(int i = 1; i <= 6; i++)
        {
            if(sumSofar + i + 1*(dice - 1) <= desiredSum && sumSofar + i + 6*(dice - 1) >= desiredSum)
            {
                chosen.push_back(i); // choose
                diceSumHelper(dice-1, chosen, desiredSum, sumSofar + i); // explore
                chosen.pop_back(); // un-choose
            }
        }
    }
    
}

void diceSum(int dice, int desiredSum)
{
    vector<int> chosen;
    int sumSoFar = 0;
    diceSumHelper(dice, chosen, desiredSum, sumSoFar);

}

int main()
{
    int desiredSum, dice;
    cout << "Enter the number of die: ";
    cin >> dice;
    cout << "Enter the desiredSum: ";
    cin >> desiredSum;
    diceSum(dice, desiredSum);
    
}