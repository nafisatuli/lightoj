#include<bits/stdc++.h>
using namespace std;
pair<int,int>temp;
queue< pair<int,int> >qq;
char ch[25][25];
int visit[25][25];
int x[4]= {1,-1,0,0};
int y[4]= {0,0,-1,1};
int cont,cx,cy,r,c,q,p,t1,t2;
void bfs(int j,int k)
{
    if(ch[j][k]=='.')
    {
        visit[j][k]=1;
        qq.push(make_pair(j,k));
        while(!qq.empty())
        {
            temp=qq.front();
            t1=temp.first;
            t2=temp.second;
            qq.pop();
            cont++;
            for(int k=0; k<4; k++)
            {
                cx=t1+x[k];
                cy=t2+y[k];
                if(visit[cx][cy]==0&&cx>=0&&cx<r&&cy>=0&&cy<c&&ch[cx][cy]!='#')
                {
                    visit[cx][cy]=1;
                    qq.push(make_pair(cx,cy));
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> c >> r;
        for(int j=0; j<r; j++)
        {
            for(int k=0; k<c; k++)cin >> ch[j][k];
        }
        for(int j=0; j<r; j++)
        {
            for(int k=0; k<c; k++)
            {
                if(ch[j][k]=='@')p=j,q=k,ch[j][k]='.';
            }
        }
        memset(visit,0,sizeof(visit));
        bfs(p,q);
        printf("Case %d: %d\n",i,cont);
        cont=0;
    }
    return 0;
}
