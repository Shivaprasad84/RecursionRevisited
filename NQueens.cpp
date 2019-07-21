#include <iostream>
using namespace std;


int count = 0;
bool isSafe(int** board, int i, int j, int n)
{
    // Col safe
    for (int row = 0; row < i; row++)
    {
        if (board[row][j])
        {
            return false;
        }
    }

    // Left diagonal
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y])
            return false;
        x--;
        y--;
    }

    // Right diagonal
    x = i;
    y = j;
    while (x >= 0 && y < n)
    {
        if (board[x][y])
            return false;
        x--;
        y++;
    }

    return true;
}

bool solveNqueen(int** board, int i, int n)
{
    // Base Case
    if (i == n)
    {
        //Draw Board
        count++;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                {
                    cout << "Q ";
                }
                else
                {
                    cout << "_ ";
                }
            }
            cout << endl;
        }
        cout << endl << endl;
        return false;
    }

    // Recursive Case
    for (int j = 0; j < n; j++)
    {
        // is it safe to place the queen at position i, j ?
        if (isSafe(board, i, j, n))
        {
            // Place queen
            board[i][j] = 1;
            bool can_place_next_queen = solveNqueen(board, i + 1, n);
            if (can_place_next_queen)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int** board = new int*[n];
    for(int i = 0; i < n; i++)
    {
        board[i] = new int[n]();
    }

    solveNqueen(board, 0, n);
    cout << "Total number of configurations: " << count << endl;
}