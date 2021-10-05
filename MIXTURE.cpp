#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int 
using namespace std;
void solve(){
    int A;
    int B;
    cin>>A>>B;
    if(A==0)
        cout<<"Liquid\n";
    else if (B==0)
        cout<<"Solid\n";
    else if(A>0 && B>0)
        cout<<"Solution\n";
    
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