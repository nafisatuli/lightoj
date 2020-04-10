#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x[6],v,tt,res;
    cin >> t;
    for(int k=1; k<=t; k++)
    {
        cin >> n;
        x[0]=x[1]=x[2]=0;
        x[3]=x[4]=x[5]=1001;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin >> tt;
                x[j]=max(tt,x[j]);
            }
            for(int j=3; j<6; j++)
            {
                cin >> tt;
                x[j]=min(tt,x[j]);
            }
        }
        if(x[0]<x[3]&&x[1]<x[4]&&x[2]<x[5])
        {
            res=abs((x[0]-x[3])*(x[1]-x[4])*(x[2]-x[5]));
            printf("Case %d: %d\n",k,res);
        }
        else
            printf("Case %d: 0\n",k);
    }
}
