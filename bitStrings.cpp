#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define mod 1000000007

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    ll n;
    cin>>n;
    ll res=1;
    for(int i=0;i<n;i++)
    {
        res=(2*res)%mod;
    }
    cout<<res<<endl;

    
        
}