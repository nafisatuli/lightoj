#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
        cin >> n >> m;
        int temp=abs(n-m);
        int res=0;
        res+=(temp*4)+(n*4)+19;
        printf("Case %d: %d\n",k,res);
    }
}
