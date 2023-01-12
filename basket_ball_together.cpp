#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
ll n,d;
cin>>n>>d;
deque<int>dq;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    dq.push_back(x);
}
sort(dq.begin(),dq.end(),greater<int>());
ll rem =n;
int no_wins=0;
while(!dq.empty())
{ 
    if(rem<=0) break;

    if(dq.front()>d)
    {
        no_wins++;
    dq.pop_front();
    rem--;
    }
    else
    {
        ll k = (((d+1)%dq.front()==0))?((d+1)/dq.front()):((d+1)/dq.front())+1;
        if(rem>=k)
        {
            no_wins++;
        }
        rem-=k;
        dq.pop_front();
    }

}
cout<<no_wins<<endl;
    return 0;
}