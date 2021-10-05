#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int 
using namespace std;

void solve(){
    int n;
    cin>>n;
    int setBit = 0;
    int b = n;
    while(b>0){
        setBit ++;
        b = b>>1;
    }
    int A1 = n - pow(2,setBit-1) + 1;
    int A2 = pow(2, setBit-1) - pow(2, setBit-2);
    int ans = max(A1, A2);
    cout<<ans<<endl;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t!=0){
	    solve();
	    t--;
	}
	return 0;
}
	  