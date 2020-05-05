//Momos Market
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int n; // n-> no of shops
    cin>>n;
    int price[n];
    int prefixsum[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
        if(i==0){
        	prefixsum[i]=price[i];
		}else{
			prefixsum[i]=price[i]+prefixsum[i-1];
		}
	//	cout<<prefixsum[i]<<" ";
    }
    int q; //q - > no of days;
	cin>>q;
    while(q--){
        
       int x;
       cin>>x;
       
       int start = 0;
       int end = n-1;
       int noshebuys=0;
       int saving=0;
       while(start<=end){
       	
       		int mid = (start+end)/2;
       		if(prefixsum[mid]<=x){
       			//int pos = lower_bound(prefixsum,prefixsum+n,prefixsum[mid])-prefixsum;
       			noshebuys = mid+1;
       			saving  = x-prefixsum[mid];
       			start=mid+1;
			}else{
                if(mid == 0){
                    saving = x;
                }
				end = mid-1;
			}
       		
	   }
	   cout<<noshebuys<<" "<<saving<<endl;
        
    }
	return 0;
}
