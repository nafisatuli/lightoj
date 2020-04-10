#include<bits/stdc++.h>
using namespace std;
vector<int>vv[20005];
queue<int>qq;
int res,mx,lyken,vampire,temp,check,visited[20005],color[20005];
void bfs(int src)
{
    qq.push(src);
    visited[src]=1;
    while(!qq.empty())
    {
        temp=qq.front();
        qq.pop();
        for(int i=0;i<vv[temp].size();i++)
        {
            check=vv[temp][i];
            if(color[temp]==0)
            {
                color[temp]=1;
                lyken++;
            }
            if(color[temp]==1&&color[check]==0)
            {
                color[check]=2;
                vampire++;
            }
            if(color[temp]==2&&color[check]==0)
            {
                color[check]=1;
                vampire++;
            }
        }
    }
}
int main()
{
    int t,e,u,v,k=1;
    int at_node_once[20005];
    cin >> t;
    while(t--)
    {
        res=0,mx=0;
        memset(vv,0,sizeof(vv));
        memset(at_node_once,0,sizeof(at_node_once));
        memset(visited,0,sizeof(visited));
        memset(color,0,sizeof(color));
        cin >> e;
        for(int i=1; i<=e; i++)
        {
            cin >> u >> v;
            vv[u].push_back(v);
            vv[v].push_back(u);
            if(at_node_once[u]==0)
                at_node_once[u]=1;
            if(at_node_once[v]==0)
                at_node_once[v]=1;
        }
        for(int i=0; i<20005; i++)
        {
            if(visited[i]==0&&at_node_once[i]==1)
            {
                lyken=0,vampire=0;
                bfs(i);
                if(lyken>vampire)
                    mx=lyken;
                else mx=vampire;
                res+=mx;
            }
        }
        printf("Case %d: %d\n",k,res);
        k++;
    }
}
