#include <bits/stdc++.h>
using namespace std;

int toh(int n,int start,int aux,int end)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        cout<<start<<" "<<end<<endl;

        return 0;
    }
    toh(n-1,start,end,aux);
    cout<< start<<" "<<end<<endl;
    toh(n-1,aux,start,end);
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int ans = pow(2,n)-1;
    cout<<ans<<endl;
    toh(n,1,2,3);
}