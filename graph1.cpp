#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

class Graph{
	public:
		map<int,bool> visited;
		map<int,list<int> > adj;
		void createEdge(int start,int end);
		void DFS(int v);
		void printGraph(vector<int> adj[],int V);
};

void Graph::createEdge(int start,int end){
	//this only works for undirected graph only!!!
	adj[start].push_back(end);
	//adj[end].push_back(start);
}
void Graph::DFS(int v){
	visited[v] = true;
	cout<<v<<" ";
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++){
		if(!visited[*i]){
			DFS(*i);
		}
	}
}
void Graph::printGraph(vector<int> adj[],int V){
	for(int i=0;i<V;i++){
		cout<<"adjencency list of vertice "<<i<<"->";
		for(int j =0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ->";
		}
		cout<<endl;
	}
}
int main(){
	//int V = 4;
	//vector<int> adj[V];
	Graph g;
	g.createEdge(0,1);
	g.createEdge(0,2);
	g.createEdge(1,0);
	g.createEdge(1,3);
	g.createEdge(2,0);
	g.createEdge(2,3);
	g.createEdge(3,1);
	g.createEdge(3,2);
	//printGraph(adj,V);
	g.DFS(0);

	return 0;
}
