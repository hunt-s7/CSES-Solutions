/*
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

    map<char,int> mp;
    map<char,int> :: iterator it;

    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    int odd=0;
    char key;
    
    string ans="",rev="";
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second%2!=0)
        {
            odd++;
            key=it->first;
        }
        if(odd>1)
        {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        for(int k=0;k<it->second/2;k++)
        {
            ans+=it->first;
            rev=it->first+rev;
        }
    }

    if(odd)
    {
        ans=ans+key+rev;
        cout<<ans<<endl;
    }
    else
    {
        ans=ans+rev;
        cout<<ans<<endl;
    }

    
        
}

<----------------------------------------------------------------->
*/
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin >> s;

    vector<int> a(26);
    for(char c : s) a[c - 'A']++;
    
    int check = 0;
    for(int i = 0; i < 26; i++) check += (a[i] % 2);
    //only one of the letters should be of odd frequency or all pair
    if(check > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    //organize the palindrome
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }

    cout << result << endl;
    return 0;
}
