//Distribute Candies

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll arr[],ll n,ll candy,ll k){
    
    ll satisfied_people =0;
    
    for(ll i=0;i<n;i++){
        satisfied_people = satisfied_people + (arr[i]/candy);
        if(satisfied_people >= k){
            return true;
        }
    }
    return false;
 
}

int main() {
    
    int t;
    cin>>t;
    while(t--){
        ll n,k;    //n-> no of boxes
        cin>>n>>k;  // k-> no of students
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll start = 0;
        ll end = arr[n-1];
        ll ans=-1;
        while(start<=end){
            
           ll mid = (start+end)/2;
            
            if(check(arr,n,mid,k)){
                ans= mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
            
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}
