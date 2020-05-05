#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {

    int t;
    cin>>t;
    while(t--){
        ll n,rem;
        int sum=0;
        cin>>n;
        while(n!=0){
            rem = n%10;
            sum+=rem;
            n/=10;
        }
        cout<<sum<<endl;
    }
    
}
