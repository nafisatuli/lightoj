#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int t;
    double R,n,r;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> R >> n;
        r=(sin(PI/n)*R)/(sin(PI/n)+1);
        printf("Case %d: %lf\n",i,r);
    }
}
