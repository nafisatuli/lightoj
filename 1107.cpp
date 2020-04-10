#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,x1,y1,x2,y2,a,b;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> m;
        printf("Case %d:\n",i);
        while(m--)
        {
            cin >> a >> b;
            if((a>=x1&&a<=x2)&&(b>=y1&&b<=y2))
                cout << "Yes\n";
            else cout << "No\n";
        }
    }
}
