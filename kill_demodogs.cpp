#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define n1 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll ans =0;
ans =((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<ans<<endl;
}

    return 0;
}