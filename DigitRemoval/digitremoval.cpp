#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int 
using namespace std;
int solve(int n, int d)
{
    int N = n;
    int digit ,count =0,c = 0;
    while(N>0)
    {
        digit = N % 10;
        N /= 10;
        c++;
        if(digit == d)
        {
            N = N*pow(10,c)+(digit+1)*pow(10,c-1);
            count=N-n;
            c = 0;
        }
    }
    return count;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n, d;
	    cin>>n>>d;
	    cout<<solve(n, d)<<endl;
	}
	return 0;
}