#include <iostream>

using namespace std;

int board[8][8];
void setQueen(int i, int j)
{
    for (int x = 0; x <= 7; ++x)
    {
       ++board[x][j];
        ++board[i][x];
        int foo;
        foo = j - i + x;
       if (foo >= 0 && foo <= 7)
            ++board [x][foo];
       foo = j + i - x;
        if (foo >= 0 && foo <= 7)
            ++board [x][foo];
    }
    board[i][j] = -1;
}

void resetqueen(int i, int j)
{
    for (int x = 0; x <= 7; ++x)
    {
        --board[x][j];
        --board[i][x];
        int foo;
        foo = j - i + x;        
if (foo >= 0 && foo <= 7)
            --board [x][foo];
        foo = j + i - x;
        if (foo >= 0 && foo <= 7)
            --board [x][foo];
    }

        board[i][j] = 0;
}

bool tryQueen(int i)
{
    bool result = false;
    for (int j = 0; j <= 7; j++)
    {
        if (board[i][j] == 0)
        {
            setQueen (i, j);
            if (i == 7)
                result = true;
            else
            {
                result = tryQueen(i + 1);
                if (!result)
                    resetqueen(i, j);
            }
        }
    }
    return result;
}

int main()
{
    for (int i = 0; i <= 7; ++i)
       for (int j = 0; j <= 7; ++j)
            board [i][j] = 0;
    tryQueen (0);
    for (int i = 0; i <= 7; ++i)
    {
        for (int j = 0; j <= 7; ++j)
            if (board[i][j] == -1)
                cout << "Q ";
            else
                cout <<". ";
                cout << "\n";
    }
    return 0;
}
