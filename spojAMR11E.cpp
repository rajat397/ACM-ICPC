#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
ll nopf[1000001]={0};
for(ll i=2;i<1000001;i++)
{
    if(nopf[i]==0)
    {
        for(ll j=i;j<1000001;j+=i)
        {
            nopf[j]++;
        }
    }
}


ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll k=1,cnt=0;
    while(cnt<n)
    {
      if(nopf[k]>=3)
      cnt++;
      k++;
    }
    cout<<k-1<<endl;

}

}