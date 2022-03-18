#include <bits/stdc++.h>
using namespace std;

set<string> v;

void permute(string s,int l,int r)
{
    if(l==r)
    v.insert(s);
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[i],s[l]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}

int main()
{
    string s;
    cin>>s;

    permute(s,0,s.length()-1);

    //sort(v.begin(),v.end());

    cout<<v.size()<<endl;
    set<string> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}