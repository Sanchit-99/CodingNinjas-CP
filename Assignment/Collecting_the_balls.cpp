#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll k,ll n){
    
    ll ballsSharmaHave = 0;
    ll curr = n;
   while(n>0){
       
       if(n<k){
           ballsSharmaHave += n;
       }else{
           ballsSharmaHave += k;
       }
       n = n-k;
       n = n - (n/10);
       
   }
    if(ballsSharmaHave*2  >= curr){
        return true;
    }else{
        return false;
    }
    
}

int main()
{
    ll n;
    cin>>n;
    
    ll start = 1;
    ll end = n;
    ll ans;
    while(start<=end){
        
        ll mid = (start+end)/2;
        if(check(mid,n)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        
    }
    cout<<ans<<endl;
    
	return 0;
}
