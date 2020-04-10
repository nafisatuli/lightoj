#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vv[20005];
int visited[20005],color[20005],at_node_once[20005];;
int dis1,dis2,res,mx,temp;
void dfs(int node)
{
    if(visited[node]==1)return;
    visited[node]=1;
    for(int i=0; i<vv[node].size(); i++)
    {
        temp=vv[node][i];
        if(color[node]==0)
        {
            color[node]=1;
            dis1++;
        }
        if(color[node]==1&&color[temp]==0)
        {
            color[temp]=2;
            dis2++;
        }
        if(color[node]==2&&color[temp]==0)
        {
            color[temp]=1;
            dis1++;
        }
        dfs(temp);
    }
}
int main()
{
    int t,e,u,v,k=1;
    cin >> t;
    while(t--)
    {
        res=0,mx=0;
        memset(at_node_once,0,sizeof(at_node_once));
        memset(vv,0,sizeof(vv));
        memset(color,0,sizeof(color));
        memset(visited,0,sizeof(visited));
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
                dis1=0,dis2=0;
                dfs(i);
                if(dis1<dis2)
                {
                    mx=dis2;
                }
                else
                {
                    mx=dis1;
                }
                res+=mx;
            }
        }
        printf("Case %d: %d\n",k,res);
        k++;
    }
}
