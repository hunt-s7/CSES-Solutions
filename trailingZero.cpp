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
    ll res=0;
    for(int i=5;n/i>=1;i*=5)
    {
        res+=n/i;
    }
    cout<<res<<endl;

    
        
}