#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int 
using namespace std;
void solve(){
    int a,b,c,d;
    int ans=0;
    cin>>a>>b>>c>>d;
    if(a+b+c <=d)
        ans=1;
    else if(a+b <= d)
        ans =2;
    else ans=3;
    cout<<ans<<"\n";
    
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t!=0)
  {
      t--;
      solve();
      
  }
 
  return 0;
}