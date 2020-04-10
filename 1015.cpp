#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int sum=0,x,t;
        cin >> t;
        while(t--)
        {
            cin >> x;
            if(x>0)
                sum+=x;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
