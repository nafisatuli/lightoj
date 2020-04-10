#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int t;
    double n,res;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        res=((n+n)*(n+n))-(PI*n*n);
        //cout << res << endl;
        printf("Case %d: %.2lf\n",i,res);
    }
}
