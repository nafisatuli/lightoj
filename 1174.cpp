#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vv[1000];
int n,e,cost=1;
int dis1[1000],dis2[1000];
void Dijkstra(int s1)
{
    for(int i=0;i<n;i++)dis1[i]=1e9;
    priority_queue<pair<int,int> > qq;
    dis1[s1]=0;
    qq.push({0,s1});
    while(!qq.empty())
    {
        int temp=qq.top().second;
        qq.pop();
        for(int i=0;i<vv[temp].size();i++)
        {
            if(dis1[temp]+vv[temp][i].second<dis1[vv[temp][i].first])
            {
                dis1[vv[temp][i].first]=dis1[temp]+vv[temp][i].second;
                qq.push({-dis1[vv[temp][i].first],vv[temp][i].first});
            }
        }
    }

}
void Dijkstra2(int s2)
{
    for(int i=0;i<n;i++)dis2[i]=1e9;
    priority_queue<pair<int,int> > qq;
    dis2[s2]=0;
    qq.push({0,s2});
    while(!qq.empty())
    {
        int temp=qq.top().second;
        qq.pop();
        for(int i=0;i<vv[temp].size();i++)
        {
            if(dis2[temp]+vv[temp][i].second<dis2[vv[temp][i].first])
            {
                dis2[vv[temp][i].first]=dis2[temp]+vv[temp][i].second;
                qq.push({-dis2[vv[temp][i].first],vv[temp][i].first});
            }
        }
    }
}
int main()
{
    int t,u,v,start,endd;
    cin >> t;
    for(int w=1;w<=t;w++)
    {
        cin >> n >> e;
        for(int i=0;i<e;i++)
        {
            cin >> u >> v;
            vv[u].push_back(make_pair(v,cost));
            vv[v].push_back(make_pair(u,cost));
        }
        cin >> start >> endd;
        Dijkstra(start);
        Dijkstra2(endd);
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,dis1[i]+dis2[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout << dis1[i] << " " << dis2[i] << endl;
        }
        printf("Case %d: %d\n",w,mx);
        for(int i=0;i<n;i++)vv[i].clear();
    }
}
