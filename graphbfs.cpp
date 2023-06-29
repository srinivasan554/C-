#include <iostream>
#include <list>

using namespace std;

class Graph
{
	int V;
	list<int>* adj;
public:
	 Graph(int v);

	 void addEdge(int v,int w);
	 
	 void BFS(int v);
	
};
Graph::Graph(int V){
	 	this->V = V;
	 	adj = new list<int>[V];
	 }
void Graph::addEdge(int v,int w){
	 	adj[v].push_back(w);
	 }
void Graph::BFS(int v){
	 	bool* visited = new bool[V];
	 	for(int i=0;i<V;i++){
	 		visited[i] = false;
	 	}
	 	visited[v] = true;
	 	list<int> q;
	 	q.push_back(v);
	 	while(!q.empty()){
	 		v = q.front();
	 		cout<<v<<" ";
	 		q.pop_front();
	 		list<int>::iterator itr;
	 		for(itr=adj[v].begin();itr!=adj[v].end();itr++){
	 			if(!visited[*itr]){
	 				visited[*itr] = true;
	 				q.push_back(*itr);
	 			}
	 		}

	 	}
	 }


int main(){
	Graph g(4);
	g.addEdge(0,2);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.BFS(2);
	return 0;
}
