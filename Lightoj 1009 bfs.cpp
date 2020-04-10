#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vv[20005];
queue<int>qq;
int color[20005],visited[20005],temp,src,check;
ll sum;
void bfs(int src)
{
    ll lyken=0,vampire=0;
    qq.push(src);
    color[src]=0;
    visited[src]=1;
    lyken++;
    while(!qq.empty())
    {
        temp=qq.front();
        qq.pop();
        for(int i=0; i<vv[temp].size(); i++)
        {
            check=vv[temp][i];
            if(visited[check]==0)
            {
                if(color[temp]==0)
                {
                    color[check]=1;
                    vampire++;
                }
                else
                {
                    color[check]=0;
                    lyken++;
                    visited[check]=1;
                    qq.push(check);
                }
            }
        }
    }
    sum=0;
    sum=max(lyken,vampire);
}
int main()
{
    int t,e,u,v;
    vector<int>node;
    int at_node[20005];
    cin >> t;
    while(t--)
    {
        ll res=0;
        memset(vv,0,sizeof(vv));
        memset(color,0,sizeof(color));
        memset(visited,0,sizeof(visited));
        cin >> e;
        for(int i=1; i<=e; i++)
        {
            cin >> u >> v;
            vv[u].push_back(v);
            vv[v].push_back(u);
        }
        for(int i=0; i<20005; i++)
        {
            if(visited[i]==0&&!vv[i].empty())
            {
                bfs(i);
                res+=sum;
            }
        }
        cout << res << endl;
    }
}
