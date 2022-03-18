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
    
    for(ll i=1;i<=n;i++)
    {
        ll ans;
        ll x=i*i;
        ans=(x*(x-1))/2;

        ans -= 4*(i-1)*(i-2);
        cout<<ans<<endl;

    }
}