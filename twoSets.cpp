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
    ll sum = (n*(n+1))/2;

    if(sum%2==0)
    {
        
        set<int> s1,s2;
        bool ch=false;
        ll t=n;
        if(n%2==0)
        {
            for(ll i=1;i<=n/2;i+=2)
            {
                s1.insert(i);
                s1.insert(t);
                s2.insert(i+1);
                s2.insert(t-1);
                t-=2;

                

            }
            ch=true;
        }
        else
        {
            s1.insert(1);
            s2.insert(3);
            s1.insert(2);
        }
        if(n>4 && ch==false)
        for(int i=4;i<=(n+4)/2;i+=2)
        {   
            s1.insert(i);
            s1.insert(t);
            s2.insert(i+1);
            s2.insert(t-1);
            t-=2;
        }

        set<int> :: iterator it;
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        for(it=s1.begin();it!=s1.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        for(it=s2.begin();it!=s2.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
}