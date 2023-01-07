#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
// Two pointer approach

int no_wins=0;
int i=n-1;
while(n)
{
    int team_need = (d+1)/a[i];
    if((d+1)%a[i]!=0)
    team_need+=1;
    if((team_need<n))
    {
        no_wins++;
        n-=team_need;
    }
    else
    break;
}

cout<<no_wins<<endl;
    return 0;
}