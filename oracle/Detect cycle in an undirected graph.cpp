Given a undirected graph  your task is to complete the method isCycle  to detect if there is a cycle in the undirected graph or not. You should not read any input from stdin/console.
There are multiple test cases. For each test case, this method will be called individually.
 

Input (only to be used for Expected Output):
The first line of the input contains an integer 'T' denoting the number of test cases. Then 'T' test cases follow. Each test case consists of two lines. 
Description of  test cases is as follows:
The First line of each test case contains two integers 'N' and 'M'  which denotes the no of vertices and no of edges respectively.
The Second line of each test case contains 'M'  space separated pairs u and v denoting that there is a bidirectional  edge from u to v .

Output:
The method should return true if there is a cycle else it should return false.

Constraints:
1 <=T<= 100
1<=N,M<=100
0 <=u,v<= N-1

Example:
Input:
2
2 2
0 1 0 0
4 3
0 1 1 2 2 3

Output:
1
0

**************************************************************************************************************************

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};*/
/*You are required to complete this method*/

bool iscyclicutil(list<int>* adj , int v , int par , vector<bool> &vis){
    vis[v] = true;
    for(auto i=adj[v].begin() ; i != adj[v].end() ; i++){
        if(!vis[*i]){
            if(iscyclicutil(adj , *i , v , vis))return true;
        }
        else if(*i != par){return true;}
    }
    return false;
}

bool Graph :: isCyclic()
{
  vector<bool> visited(V , false);
  for(int i=0 ; i<V ; i++){
      if(!visited[i]){
          if(iscyclicutil(adj , i , -1, visited))return true;
      }
  }
  return false;
}
