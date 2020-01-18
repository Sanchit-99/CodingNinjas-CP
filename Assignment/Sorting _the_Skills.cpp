#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    
    if(n==1){
    	return true;
	}
    bool result;
    for(int i=0;i<n;i++){
    	if(i!=n-1){
        if(arr[i]<arr[i+1]){
            result =true;
        }
        else{
            return false;
        }
    }
    }
    
    return result;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            if(i!=n-1){
             if(arr[i+1] == arr[i] - 1){
                 swap(arr[i],arr[i+1]);
             }
            }
        }
        
        if(issorted(arr,n)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
	return 0;
}
