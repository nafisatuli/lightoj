#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int tree[400005];
int n,t,q,x,y;
int init(int node, int b, int e)
{
    int temp1,temp2;
    if(b==e)
    {
        tree[node] = arr[b];
        return arr[b];
    }
    else
    {
        int Left=node*2;
        int Right=node*2+1;
        int mid=(b+e)/2;
        temp1=init(Left,b,mid);
        temp2=init(Right,mid+1,e);
        tree[node]=min(temp1,temp2);
        return tree[node];
    }
}
int query(int node, int b, int e, int x, int y)
{
    if(x>e||y<b)
        return INT_MAX;
    if(b>=x&&e<=y)
        return tree[node];
    else
    {
        int Left=node*2;
        int Right=node*2+1;
        int mid=(b+e)/2;
        int p1=query(Left,b,mid,x,y);
        int p2=query(Right,mid+1,e,x,y);
        return min(p1,p2);
    }
}
int main()
{
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d %d",&n,&q);
        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        init(1,1,n);
        printf("Case %d:\n",k);
        for(int i=0; i<q; i++)
        {
            scanf("%d %d",&x,&y);
            printf("%d\n",query(1,1,n,x,y));
        }
    }
    return 0;
}

