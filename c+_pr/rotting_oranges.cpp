class Solution {
public:
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = { -1, 1, 0, 0};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0, countFresh = 0;
        
        vector <vector<int>> dist(n, vector<int>(m, INT_MAX));//n rows,m columns

        queue <pair<int, int>> q;

        // include those nodes which are already rotten and mark their distance as 0.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                    dist[i][j] = 0;

                }
                // count number of resh oranges
                if (grid[i][j] == 1) 
                countFresh++;
            }
        }

        // visit every cell and update their distance
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            // traverse all four direction
            for (int i = 0; i < 4; i++) {
                int xx = x + dx[i];
                int yy = y + dy[i];

                // cases where we need to go for next cells
                if (xx >= 0 && xx < n && yy >= 0 && yy < m && grid[xx][yy] == 1 && dist[xx][yy] == INT_MAX) {
                    q.push({xx, yy});

                    // update value of dist and ans

                    dist[xx][yy] = dist[x][y] + 1;

                    ans = max(ans, dist[xx][yy]);

                    // decrement fresh oranges
                    countFresh--;
                }
                
            }

        }
        // cases where we are not able to rotten all the oranges
        if (countFresh != 0) return -1;

        return ans;
    }
};