#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int res,res1,p;
        cin >> p;
        if(p>10)
        {
            res=p/2;
            res1=p-res;
            cout << res << " " << res1 << endl;
        }
        else cout << "0" << " " << p << endl;
    }
}
