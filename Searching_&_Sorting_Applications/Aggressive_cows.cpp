#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll arr[],int n,ll distance,int cows){
    
    ll last_pos = arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]-last_pos >= distance){
            count++;
            last_pos = arr[i];
        }
        if(cows == count){
            return true;
        }
    }
    return false;
    
}

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        ll start = 0;
        ll end = arr[n-1] - arr[0];
        ll ans=-1;
        
        while(start<=end){
            
            ll mid = start + (end-start)/2;
            
            if(check(arr,n,mid,c)){
                start=mid+1;
                ans = mid;
            }else{
                end = mid-1;
            }
            
        } 
        cout<<ans<<endl;
  
    }
    return 0;
	
}
