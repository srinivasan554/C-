#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
int maxsize = 0;

void bfs(vector<vector<int>>& grid,int r,int c){
	queue<pair<int,int>> q;
	vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
	visited[r][c] = true;
	int size = 0;
	size++;
	q.push({r,c});
	while(!q.empty()){
		pair<int,int> p = q.front();
		q.pop();
		for(int i=0;i<directions.size();i++){
			int newr = p.first + directions[i][0];
			int newc = p.second + directions[i][1];
			if(newr>=0 && newc>=0 && newr<grid.size() && newc<grid[0].size() && !visited[newr][newc] && grid[newr][newc]==1){
				visited[newr][newc] = true;
				size++;
				q.push({newr,newc});
			}
		}
	}
	if(size > maxsize) maxsize = size;
	return;
}

int main(){
	vector<vector<int>> grid{{1,1,0,0,0},{0,1,1,0,0},{0,0,1,0,1},{1,0,1,0,1},{0,1,0,1,1}};
	for(int i=0;i<grid.size();i++){
		for(int j=0;j<grid[i].size();j++){
			if(grid[i][j]==1){
				bfs(grid,i,j);
			}
		}
	}
	cout<<maxsize<<endl;
	return 0;
}
