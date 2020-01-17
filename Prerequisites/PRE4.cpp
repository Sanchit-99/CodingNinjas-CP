#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    int j=n-1;
    while(i<j){
        int total=arr[i]+arr[j];
        cout<<total/10<<" "<<total%10<<endl;
        i++;
        j--;
    }
	return 0;
}
