#include <bits/stdc++.h>
using namespace std;

string binarys(int n)
{
    string res="";
    while(n!=0)
    {
        char x=n%2 + '0';
        res=x + res;
        n/=2;
    }
    //cout<<res<<endl;
    return res;
}

int main()
{
    int n;
    cin>>n;

    //int a[n];

    for(int i=0;i<(1<<n);i++)
    {
        //cout<<i<<endl;
        string ans=binarys(i);
        //cout<<ans<<endl;
        if(ans.length()<n)
        {
            for(int j=0;j<n-ans.length();j++)
            {
                cout<<"0";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}