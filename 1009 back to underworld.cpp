#include<bits/stdc++.h>
using namespace std;
vector<int>vv[20005];
queue<int>qq;
int color[20005],sum=0,temp,src;
void bfs(int node)
{
    long long lyken=0,vampire=0;
    qq.push(node);
    color[node]=1;
    lyken++;
    while(!qq.empty())
    {
        temp=qq.front();
        qq.pop();
        for(int i=0; i<vv[temp].size(); i++)
            src=vv[temp][i];
        if(color[src]==0)
        {
            qq.push(src);
            if(color[temp]==1)
            {
                color[src]=0;
                vampire++;
            }
            else
            {
                color[src]=1;
                lyken++;
            }
        }
    }
    sum+=max(lyken,vampire);
    cout << sum << endl;
}
int main()
{
    int t,u,v,e;
    vector<int>node;
    int at_node_once[20005],visit[20005];;
    cin >> t;
    while(t--)
    {
        memset(visit,0,sizeof(visit));
        memset(vv,0,sizeof(vv));
        cin >> e;
        for(int i=1; i<=e; i++)
        {
            cin >> u >> v;
            vv[u].push_back(v);
            vv[v].push_back(u);
            if(at_node_once[u]==0)
            {
                node.push_back(u);
                at_node_once[u]=1;
            }
            if(at_node_once[v]==0)
            {
                node.push_back(v);
                at_node_once[v]=1;
            }
            memset(visit,0,sizeof(visit));
            for(int i=0; i<node.size(); i++)
            {
                if(visit[i]==0)
                {
                    visit[i]=1;
                    bfs(i);
                }
            }
        }
    }
}
