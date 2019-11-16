#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long powr(int a,int b)
{
    if(b==0)
    return 1;
    long long res=powr(a,b/2);
    if(b%2)
    return res*res*a;
    else 
    return res*res;
}
int main()
{
    fio;
    int n;
    cin>>n;
    long long ares;
    ares = powr(4,n-3);
    cout<<(9*n-3)*ares<<'\n';
    
}