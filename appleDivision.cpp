#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll w;
    if(sum%2==0)
    w=sum/2;
    else
    {
        w=sum/2;
        w+=1;
    }
    //cout<<w<<endl;
    sort(v.begin(),v.end());
    vector<vector<ll> > dp(n+1,vector<ll> (w+1));

    for(ll i=0;i<=w;i++)
    dp[0][i]=0;
    for(ll i=0;i<=n;i++)
    dp[i][0]=0;

    for(ll i=0;i<n;i++)
    {
        
        for(ll j=1;j<=w;j++)
        {
            if(j<v[i])
            dp[i+1][j]=dp[i][j];
            else
            dp[i+1][j]=max(dp[i][j-v[i]]+v[i],dp[i][j]);

        }
    }
    /*for(ll i=0;i<n+1;i++)
    {
        for(ll j=0;j<w+1;j++)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/    
        
    ll max=dp[n][w];
    sum=sum-max;
    //cout<<sum<<" " <<max<<endl;
    cout<<abs(sum-max)<<endl;
}