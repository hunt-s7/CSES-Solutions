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

    ll a[n];
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll total = (n*(n+1))/2;
    cout<<total-sum<<endl;
}