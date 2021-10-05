#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int 
using namespace std;
void solve(){
    int x, ans = 1;
    cin>>x;
    if(x == 0){
        cout<<1<<endl;
        
    }
    else if(x == 1 || x == 2){
        cout<<2<<endl;
        
    }
    else{
        while(ans*2 <= x){
            ans*=2;
            
        }
        if(ans == x){
            cout<<x<<endl;
            
        }
        else if(x ==(2*ans-1)){
            cout<<x+1<<endl;
            
        }
        else{
            cout<<ans<<endl;
            
        }
        
    }
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
	   
