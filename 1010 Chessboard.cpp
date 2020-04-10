#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,res,temp;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)swap(x,y);
        if(x==1||y==1)res=x*y;
        else if(x==2||y==2)
        {
            if(x==y)
                res=x*y;
            else if(y%2==1)
                res=y+1;
            else if(y%2==0)
            {
                temp=y/2;
                if(temp%2==0)res=(x*y)/2;
                else res=x+y;
            }
        }
        else res=(((x*y)/2)+((x*y)%2));
        printf("Case %d: %d\n",i,res);
    }
}
