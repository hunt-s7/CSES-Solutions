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

    
    if(n==3 || n==2)
    cout<<"NO SOLUTION"<<endl;
    else
    {
        for(ll i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(ll i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        
    }
    
}