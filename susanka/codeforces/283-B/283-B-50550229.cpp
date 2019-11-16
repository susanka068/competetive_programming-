#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
using namespace std;

llint N,arr[200010];
llint dp[200010][2];
bool visited[200010][2];

llint solveFor(llint idx,llint dir)
{
    //cout<<idx<<" "<<dir<<endl;
    if(idx<=0||idx>N)
    {
        return 0;
    }
    if(visited[idx][dir])
    {
        return dp[idx][dir];
    }
    else
    {
        visited[idx][dir] = true;
        int directionToGo = 1;
        if(!dir)
            directionToGo = -1;
        llint ans = solveFor(idx + directionToGo*arr[idx], 1 - dir);
        if(ans!=-1)
            ans+=arr[idx];
        return dp[idx][dir] = ans;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(dp,-1,sizeof dp);
    cin>>N;
    for(int i=2;i<=N;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=N-1;i++)
    {
        arr[1] = i;
        visited[1][0] = visited[1][1] = false;
        dp[1][0] = dp[1][1] = -1;
        cout<<solveFor(1,1)<<endl;
    }
    return 0;
}