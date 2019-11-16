#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define loop(i, a, b) for(int i = (a); i < (b); i++)
#define loopb(i, a, b) for(int i = (a); i > (b); --i)

typedef pair <int,int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef vector <ll> vl;

int main(){
    int n,x;
    cin>>n;
    int a[100002][2];
    memset(a,0,sizeof(a));
    loop(i,0,n){
      cin>>x;
      if(x>0) a[x][0] = 1;
      else if(x<0) a[abs(x)][1] = 1;
    }
    int cnt = 0;
    loop(i,1,100002){
      loop(j,0,2)
         if(a[i][j]>0)
            {cnt++;}
    }
    cout<<cnt<<endl;
    return 0;
}