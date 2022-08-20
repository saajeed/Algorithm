#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int>adjList[node+1];
    for(int i = 0; i < edge ; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i = 1 ;i <=node ; i ++)
    {
        for(auto j : adjList[i])
            //cout<<j<<" ";
        cout<<endl;
    }
   int startNode,endNode;
    cin>>startNode;
    vector<vector<int>>levelByLevel;
    vector<bool>visited(node+1);
    for(int i=1; i<=node ; i++)
        visited[i]=false;
    queue<int>q;
    visited[startNode]=true;
    q.push(startNode);
    while(!q.empty())
    {
         vector<int> res;
        int size = q.size();
        while(size--)
        {
           
            int x = q.front();
            res.push_back(x);
            q.pop();
            for(auto &i : adjList[x])
            {
                if(visited[i]==false)
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
       }
       levelByLevel.push_back(res);
       res.clear();
    }
    for(int i=0;i<levelByLevel.size();i++)
    {
        cout<<"Level : "<<i+1<<endl;
        for(auto &el : levelByLevel[i])
            cout<<el<<" ";
        cout<<endl;
    }


}
/**6 7
1 2
1 4
1 6
2 4
4 3
4 5
3 5**/