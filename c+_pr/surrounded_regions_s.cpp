class Solution {
public:
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};


void solve(vector<vector<char>>& board) {
int rows=board.size();
int cols=board[0].size();

vector <vector<int>> visited(rows, vector<int>(cols,0));
vector <vector<int>> nocapture(rows, vector<int>(cols,0));

//int visited[rows][cols];
//int nocapture[rows][cols];

for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        visited[i][j]=0;
        nocapture[i][j]=0;
    }
}

for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {     
        //string str1=board[i][j];
        //string str2="O";
        if((i==0 || j==0 || j==cols-1 || i==rows-1) && board[i][j]=='O')
            nocapture[i][j]=1;

    }
}
pair<int,int> prev;

for(int r=0;r<rows;r++)
{
    for(int c=0;c<cols;c++)
{
       
    if((r==0 || c==0 || r==rows-1 || c==cols-1) && board[r][c]=='O')
         {       prev={r,c};
                dfs(board,visited,nocapture,r,c,prev);}
               
                }
                                }
    for(int r=0;r<rows;r++)
{
    for(int c=0;c<cols;c++)
{
     if(nocapture[r][c]==0)   
        board[r][c]='X';
        
    }
    }
}

void dfs(vector<vector<char>>& board,vector <vector<int>> &visited,vector <vector<int>> &nocapture,int r,int c, pair<int,int>prev)
{
  int rows=board.size();
  int cols=board[0].size();

if(r==rows ||c==cols||r<0||c<0 ||visited[r][c]==1||board[r][c]=='X')
    {return;}
      
     
     if(board[r][c]=='O' && nocapture[prev.first][prev.second]==1)
            {
                nocapture[r][c]=1;
                
            }
     visited[r][c]=1;

            dfs(board,visited,nocapture,r+1,c,prev);
            dfs(board,visited,nocapture,r-1,c,prev);
            dfs(board,visited,nocapture,r,c+1,prev);
            dfs(board,visited,nocapture,r,c-1,prev);
                        
}


};