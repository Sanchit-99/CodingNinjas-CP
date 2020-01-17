#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e_sum=0,o_sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2 == 0 && arr[i]%2 == 0){
            e_sum+=arr[i];
        } 
        if(i%2 != 0 && arr[i]%2 != 0){
            o_sum+=arr[i];
        }
    }
    cout<<e_sum<<" "<<o_sum;
    return 0;
}
