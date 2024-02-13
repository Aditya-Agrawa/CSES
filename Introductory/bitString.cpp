#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
 
 
 
 
void solve()
{  
  ull n;
  cin>>n;

  ull answer=1;
  ull x=2;
  while(n){
     if(n&1){
      answer=(answer*x)%mod;
     }
     n>>=1;
     //answer<<=1;
     x=(x*x)%mod;
  }
 cout<<answer<<"\n";

}
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  clock_t tStart = clock();
  freopen("input.txt","r",stdin); //can need to change file . this one for taking input
  freopen("output.txt","w",stdout); // this one for output
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  solve();
  #ifndef ONLINE_JUDGE
  fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif
  return 0;
}