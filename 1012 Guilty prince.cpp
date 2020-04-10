#include<bits/stdc++.h>
using namespace std;
char ch[25][25];
int visit[25][25];
int x[4]= {1,-1,0,0};
int y[4]= {0,0,-1,1};
int cont,cx,cy,r,c,q,p;
void dfs(int j,int k)
{
    if(ch[j][k]=='.'||ch[j][k]=='@')
    {
        visit[j][k]=1;
        cont++;
        for(int i=0; i<4; i++)
        {
            cx=x[i]+j;
            cy=y[i]+k;
            if(visit[cx][cy]==0&&cx>=0&&cx<r&&cy>=0&&cy<c) dfs(cx,cy);
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
            for(int k=0; k<c; k++)
                cin >> ch[j][k];
        }
        for(int j=0; j<r; j++)
        {
            for(int k=0; k<c; k++)
            {
                if(ch[j][k]=='@')p=j,q=k;
            }
        }
        memset(visit,0,sizeof(visit));
        dfs(p,q);
        printf("Case %d: %d\n",i,cont);
        cont=0;
    }
}
