#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>ip(n);
    vector<int>hsh(10,0); hsh[1]=n;
    for(auto &x:ip) cin>>x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= 9; j++)
        {
            if(ip[i]%j==0) hsh[j]++;
        }
        
    }
    cout<<'{';
    for (int i = 1; i < 10; i++)
    {
        cout<<i<<":"<<hsh[i]<<",";
    }
    cout<<'}';
    return 0;
}