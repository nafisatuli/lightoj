#include<bits/stdc++.h>
using namespace std;
vector<int>vt[30009], cost[30009];
int dis[30009], visit[30009], p, mx, xx, sz, cst;

int bfs(int st)
{
    queue<int>q;
    q.push(st);
    memset(dis, 0, sizeof(dis));
    memset(visit, -1, sizeof(visit));
    dis[st]=0, p, mx=0;

    while(!q.empty())
    {
        xx=q.front();
        q.pop();
        sz=vt[xx].size();
        if(visit[xx]==-1)
        {
            for(int i=0; i<sz; i++)
            {
                q.push(vt[xx][i]);
                cst=dis[xx]+cost[xx][i];
                if(visit[vt[xx][i]]==-1)
                {
                    if(dis[vt[xx][i]]<cst)
                    {
                        dis[vt[xx][i]]=cst;
                        if(mx<cst)
                        {
                            p=vt[xx][i];
                            mx=cst;
                        }
                    }
                }
            }
            visit[xx]=1;
        }
    }
    return p;
}

int main()
{
    int t, n, u, v, w, cs=1, st;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<n; i++)
        {
            cin>>u>>v>>w;
            vt[u].push_back(v);
            vt[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        st=bfs(0);
        st=bfs(st);
        cout<<"Case "<<cs++<<": "<<dis[p]<<endl;
        for(int i=0; i<30009; i++)
        {
            cost[i].clear();
            vt[i].clear();
        }
    }
    return 0;
}
