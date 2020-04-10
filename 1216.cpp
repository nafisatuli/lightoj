#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int t;
    int r1,r2,h,p;
    double R,v;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
        cin >> r1 >> r2 >> h >> p;
        R=r2+(r1-r2)*((double)p/h);
        v=(1/3.0)*(R*R+R*r2+r2*r2)*p*PI;
        printf("Case %d: %lf\n",k,v);
    }
}
