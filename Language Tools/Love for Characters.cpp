#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int s_count=0,a_count=0,p_count=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'a'){
            a_count++;
        }
        if(s[i] == 's'){
            s_count++;
        }
        if(s[i] == 'p'){
            p_count++;
        }
    }
    cout<<a_count<<" "<<s_count<<" "<<p_count;
	return 0;
}
