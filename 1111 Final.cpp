#include<bits/stdc++.h>
using namespace std;
vector<int>vv[10005];
queue<int>qq;
int aa[10005],visit[10005],cont[10005];
int mx,frnt,temp;
void clr()
{
    memset(cont,0,sizeof(cont));
    for(int i=1; i<=10005; i++)
    {
        vv[i].clear();
    }
}
void bfs(int node)
{
    memset(visit,-1,sizeof(visit));
    qq.push(node);
    visit[node]=1;
    cont[node]++;
    while(!qq.empty())
    {
        frnt=qq.front();
        qq.pop();
        for(int i=0; i<vv[frnt].size(); i++)
        {
            temp=vv[frnt][i];
            if(visit[temp]==-1)
            {
                cont[temp]++;
                visit[temp]=1;
                qq.push(temp);
            }
        }
    }
}
int main()
{
    int t,k,n,m,u,v;
    cin >> t;
    for(int z=1; z<=t; z++)
    {
        mx=-1;
        cin >> k >> n >> m;
        for(int i=1; i<=k; i++)
            cin >> aa[i];
        clr();
        for(int i=1; i<=m; i++)
        {
            cin >> u >> v;
            vv[u].push_back(v);
            mx=max(mx,max(u,v));
        }
        int res=0;
        for(int i=1; i<=k; i++)
            bfs(aa[i]);
        for(int i=1; i<=mx; i++)
        {
            if(cont[i]==k)
                res++;
        }
        printf("Case %d: %d\n",z,res);
    }
}
