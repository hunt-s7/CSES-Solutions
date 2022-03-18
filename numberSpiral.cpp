#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    ll n;
    cin>>n;
    
    while(n--)
    {
        ll u,v;
        cin>>u>>v;

        ll ans,x;
        // 1 for row, 0 for col
        
        x=max(u,v);
        ans=(x-1)*(x-1);
        ll res=0;

        if(x%2==0)
        {
            if(x==v)
            {
                res=ans+u;
            }
            else
            {
                res=ans+2*x-v;
            }
        }
        else
        {
            if(x==u)
            {
                res = ans+v;
            }
            else
            {
                res=ans+2*x-u;
            }
        }

        cout<<res<<endl;

    }
}