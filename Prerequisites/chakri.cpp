#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int diff=0;
    
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i] && diff<(arr[j]-arr[i])){
                diff=arr[j]-arr[i];
            }
        }
    }
    cout<< diff;
    return 0;
    
}
