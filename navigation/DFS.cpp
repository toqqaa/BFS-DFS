#include <bits/stdc++.h>
using namespace std;

#define ROW 5
#define COL 5

// priority (up, right, left, down)
int dRow[] = {-1, 0, 0, 1};
int dCol[] = {0, 1, -1, 0};

// if a cell is be visited or not
bool cellisvisited(bool vis[][COL], int row, int col, int grid[][COL])
{
    
    if (row < 0 || col < 0 || row >= ROW || col >= COL)
        return false;

    // If cell is already visited or is an obstacle
    if (vis[row][col] || grid[row][col] == -1)
        return false;

    
    return true;
}


void DFS(int grid[][COL], bool vis[][COL], pair<int, int> start, pair<int, int> goal)
{
   
    stack<pair<int, int>> s;

    
    s.push(start);

    vis[start.first][start.second] = true;

    while (!s.empty())
    {
        pair<int, int> cell = s.top();
        int x = cell.first;
        int y = cell.second;

        cout << grid[x][y] << " ";

        if (x == goal.first && y == goal.second)
        {
            cout << "\nThe Goal is reached\n";
            return;
        }

        s.pop();

        for (int i = 3; i >= 0; i--)
        {
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];

            if (cellisvisited(vis, adjx, adjy, grid))
            {
                s.push({adjx, adjy});
                vis[adjx][adjy] = true;
            }
        }
    }

    cout << "\nThe Goal is not reached\n";
}

int main()
{
    int grid[ROW][COL] = {
        {-1, 2, 3, -1, -1},
        {6, 7, -1, -1, -1},
        {11, 12, 13, -1, -1},
        {-1, 17, 18, 19, -1},
        {-1, 22, -1, -1, 25}};

    // Start point
    pair<int, int> start = {3, 1};

    //  goal point
    pair<int, int> goal = {0, 1};

    bool vis[ROW][COL];
    memset(vis, false, sizeof vis);

    DFS(grid, vis, start, goal);

    return 0;
}
