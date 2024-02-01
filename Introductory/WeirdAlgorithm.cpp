#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
 
 
 
 
 
void solve()
{  
   ull n;
   cin>>n;
   cout<<n<<" ";
   while(n!=1){
    if(n&1){
      n=n*3+1;
      cout<<n<<" ";
    }
    else{
      n>>=1;
      cout<<n<<" ";
    }
   } 
  
 
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  
  // int t=1;cin>>t;
  // while(t--)
  // {
    solve();
  // }
  return 0;
}