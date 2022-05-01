#include<bits/stdc++.h>
using namespace std;
vector<int> g[1000];
void add_edge(int from, int to)
{
g[from].push_back(to); g[to].push_back(from);
}
void dfs(int cur, bool visited[]) {
visited[cur] = true;
for(auto adj: g[cur])
if(!visited[adj])
dfs(adj, visited);
}
bool isconnected(int n, bool visited[]) {
int start=-1;
for(int i=0 ; i<n ; ++i)
{
if(!visited[i] && g[i].size() > 0)
{
if(start == -1)
{
dfs(i, visited);
start = i;
}
else
{
cout<<"the graph is not eulerian"<<endl; return false;
}
}
visited[i] = true;
}
 return true;
}
void checkgraph(int n)
{
bool visited[n];
fill(visited, visited+n, false); if(isconnected(n, visited))
{
int oddv = 0;
for(int i=0 ; i<n ; ++i)
if(g[i].size()%2 == 1)
oddv++;
if(oddv == 0)
cout<<"the graph has euler circuit"<<endl; else if(oddv == 2)
cout<<"the graph has euler path"<<endl; else
cout<<"the graph is not eulerian"<<endl;
}
}
int main()
{
for(int i=0 ; i<5 ; ++i) g[i].clear(); add_edge(3, 4);
add_edge(4, 2);
add_edge(2, 3);
add_edge(4, 1);
add_edge(1, 0);
checkgraph(5);
for(int i=0 ; i<5 ; ++i) g[i].clear(); add_edge(3, 4);
add_edge(4, 2);
add_edge(2, 3);
add_edge(4, 1);
add_edge(1, 0);
add_edge(0, 4);
checkgraph(5);
for(int i=0 ; i<5 ; ++i) g[i].clear(); add_edge(3, 4);
add_edge(4, 2);
add_edge(2, 3);
add_edge(4, 1);
add_edge(1, 0);
add_edge(3, 1);
checkgraph(5);
for(int i=0 ; i<3 ; ++i) g[i].clear(); add_edge(2, 1);
add_edge(1, 0);

add_edge(0, 2);
checkgraph(3);
for(int i=0 ; i<3 ; ++i) g[i].clear(); checkgraph(3);
return 0;
}
