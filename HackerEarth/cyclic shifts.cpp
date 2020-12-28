#include <bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int binary[16]={0};
        int n,m;
        char c;
        cin>>n>>m>>c;
        for(int i=0;i<16;i++)
        {
            binary[i]=n%2;
            n=n/2;
        }
        reverse(binary,binary+16);
        vector<int> b;
        if(c=='L')
        {
            int k=m;
            for(int i=k;i<16;i++)
            {
                b.push_back(binary[i]);
            }
            for(int i=0;i<=k-1;i++)
            {
                b.push_back(binary[i]);
            }
            int ans=0;
            for(int i=15;i>=0;i--)
            {
                if(b[i])
                {
                    ans+=(int)pow(2,15-i);
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            int k=16-m;
            for(int i=k;i<16;i++)
            {
                b.push_back(binary[i]);
            }
            for(int i=0;i<=k-1;i++)
            {
                b.push_back(binary[i]);
            }
            int ans=0;
            for(int i=15;i>=0;i--)
            {
                if(b[i])
                {
                    ans+=(int)pow(2,15-i);
                }
            }
            cout<<ans<<endl;
        }
    }
}
