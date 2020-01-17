#include<bits/stdc++.h>
using namespace std;
int main() {

    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
   int curr=0;
    for(int i=0;i<n;i++){
        curr=arr[i];
        for(int j=i+1;j<=n;j++){
           
            if(target == curr){
                cout<<"true"<<endl;
                if(i+1==j){
                	cout<<arr[i];
				}else{
                cout<<arr[i]<<" "<<arr[j-1];
				}
                goto label;
            }
             curr=curr+arr[j];
        }
    }
     cout<<"false";
     label:
     	return 0;
    
	
}
