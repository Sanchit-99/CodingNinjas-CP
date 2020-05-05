//Taj Mahal Entry
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    ll count=0;
    while(arr[i]-count > 0){
        i = (i+1)%n;
        count++;
    }
    cout<<i+1;
	return 0;
}
