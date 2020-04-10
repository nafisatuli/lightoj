#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10005];
int visit[10005],money[10005];
int t,n,m,sum,avg,temp,tot,u,v;
void dfs(int node)
{
    visit[node]=1;
    temp+=money[node],tot++;
    for(int i=0; i<vec[node].size(); i++)
    {
        if(visit[vec[node][i]]==-1)
        {
            dfs(vec[node][i]);
        }
    }
}
int main()
{
    int flag;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n >> m;
        memset(visit,-1,sizeof(visit));
        for(int i=0; i<10005; i++)vec[i].clear();
        sum=0,flag=0;
        for(int i=1; i<=n; i++)
        {
            cin >> money[i];
            sum+=money[i];
        }
        avg=sum/n;
        for(int i=1; i<=m; i++)
        {
            cin >> u >> v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        for(int i=1; i<=n; i++)
        {
            tot=0,temp=0;
            if(visit[i]==-1)
            {
                dfs(i);
                if(temp%tot!=0)
                {
                    flag=1;
                    break;
                }
                else if(avg!=temp/tot)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)printf("Case %d: No\n",k);
        else printf("Case %d: Yes\n",k);
    }
}
