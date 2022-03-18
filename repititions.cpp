#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    string s;
    cin>>s;
    ll ans=1,mx=1;
    char prev=s[0];
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]==prev)
        {
            mx++;
            if(ans<mx)
            ans=mx;
        }
        else
        {
            mx=1;
            prev=s[i];
        }
    }
    cout<<ans<<endl;

}