#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr[i],1));
        v.push_back(make_pair(dep[i],0));
    }
    sort(v.begin(),v.end());
    int current=0,maximum=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second == 1){
            current++;
            maximum = max(maximum,current);
        }else{
            current--;
        }
    }
    cout<<maximum;
    
}
