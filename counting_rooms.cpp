#include<iostream>
#include<vector>
using namespace std;


void dfs(vector<vector<char>>&g , int i , int j){
	if (i < 0 || i >= (int)g.size() || j < 0 || j >= (int)g[0].size())
        return;
        
	if (g[i][j] == '#')
        return;
        
     g[i][j] = '#';
	
	dfs(g,i+1,j);
	dfs(g,i,j+1);
	dfs(g,i-1,j);
	dfs(g,i,j-1);
}
 int main(){
 	int n , m; cin>>n>>m;
 	int count = 0 ;
 	
 	vector<vector<char>> g(n,vector<char>(m));
 	for(int i = 0 ; i < n ; i++){
 		for(int j =0 ; j< m ; j++)
 		cin>>g[i][j];
 	}
 	for(int i =0 ; i< n ;i++){
 		for(int j =0;j<m;j++){
 			if(g[i][j] == '.'){
 				count++;
 				dfs(g,i,j);
 			}
 		}
 	}
 	cout<<count;
 }