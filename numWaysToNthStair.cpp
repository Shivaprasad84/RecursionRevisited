#include <iostream>
#include <map>
using namespace std;

map<int, int> m;
int numWays(int n)
{
    if(m[n])
        return m[n];
    if(n == 0 || n == 1)
        return 1;
    m[n] = numWays(n-1) + numWays(n-2);
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Number of ways to reach Nth stair taking one or two steps at a time: " << numWays(N) << endl;
}
