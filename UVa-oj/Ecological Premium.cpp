/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

double inf = 1.0/0.0;
int main() {
    fio;
    int t;
    cin>>t;
    while(t--)
    {
      int f;
      cin>>f;
      long int a,b,c,sum=0;
      while(f--)
      {
          cin>>a>>b>>c;
          sum+=a*c;
      }
      cout<<sum<<'\n';
    }
    
	// your code goes here
	return 0;
}
