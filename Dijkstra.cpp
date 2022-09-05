#include<bits/stdc++.h>
#define INF 1e7
int node,edges;
int source ;
using namespace std;
int main()
{
  cin>>node>>edges;
  vector<int>dist(node+1,INF);
  vector<vector<pair<int,int>>>graph(node+1);
  for(int i = 0 ;i<edges ;i++)
  	{
      int u,v,w;
      cin>>u>>v>>w;
      graph[u].push_back({v,w});
      graph[v].push_back({u,w});
  	}
  	set<pair<int,int>> st;
  	source = node ;
  	dist[source]=0;
  	st.insert({0,source});
  	while(!st.empty())
  	{
  	  auto x = *(st.begin());
  	  st.erase(x);
  	  for(auto it : graph[x.second])
  	  {
         if(dist[it.first]> it.second + dist[x.second])
         {
         	st.erase({dist[it.first],it.first})
         	dist[it.first] = it.second + dist[x.second];
         	st.insert({dist[it.first],it.first});
         }
  	  }
  	}
  	for(int i=1;i<=node;i++)
  	{
  		if(dist[i]==INF)
  			cout<<"-1"<<endl;
  		else
  			cout<<source<<"---->"<<i<<" "<<dist[i]<<endl;;
  	}


}