#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double ab,ac,bc,r,res,temp;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> ab >> ac >> bc >> r;
        temp=sqrt(r)/sqrt(r+1);
        res=ab*temp;
        printf("Case %d: %.10lf\n",i,res);
    }
}
