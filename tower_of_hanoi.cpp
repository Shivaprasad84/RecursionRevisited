#include <iostream>
using namespace std;

void towers(int n, int src, int dst, int spare)
{
    if(n == 1)
        cout << "Move a disk from tower " << src << " to " << dst << endl;
    else
    {
        towers(n-1, src, spare, dst);
        towers(1, src, dst, spare);
        towers(n-1, spare, dst, src);
    }
    
}

int main()
{
    int TowerSize;
    cout << "Enter the number of disks: ";
    cin >> TowerSize;
    towers(TowerSize, 1, 2, 3);
}