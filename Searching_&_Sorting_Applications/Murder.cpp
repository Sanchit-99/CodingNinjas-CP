#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll merging(int*a, int si , int mid, int ei ){
    ll  count = 0;
    int i = si, j = mid+1;
    int temp[ei-si+1];
    int k = 0;
    while(i <= mid && j <= ei){
        if(a[i]<a[j]){
            count += (a[i] * (ei-j+1));
          //  cout << count << " is count \n";
                temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
        }
    }
    while(i < mid+1){
        temp[k++] = a[i++];
    }
    while(j <= ei){
        temp[k++] = a[j++];
    }
    for(int i=si, k=0;i<=ei;i++, k++){
      a[i] = temp[k];
    }
    return count;
}

ll merge(int*a, int si, int ei){
    if(si >= ei){
        return 0;
    }
    //cout << "working";
    int mid = si+ (ei-si)/2;
    ll left_ans = merge(a, si, mid);
    ll right_ans = merge(a, mid+1, ei);
    ll count = merging(a, si, mid,  ei);
    // cout << left_ans << " " << right_ans << " " << count << endl;
    return left_ans + right_ans + count;
}

int main() {

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int*a = new int[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ll ans = merge(a, 0, n-1);
        cout << ans << endl;
    }
}
