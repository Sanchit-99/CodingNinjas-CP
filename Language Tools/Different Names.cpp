#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
    getline(cin,str);
    map<string,int> m;
    stringstream ss(str);
    int count=0;
    do{
        string word;
        ss>>word;
        m[word]++;
    }while(ss);
    map<string,int>::iterator it;
   	for(it=m.begin();it!=m.end();it++){
   		if(it->second >=2){
   			cout<<it->first<<" "<<it->second<<endl;
   			count++;
		   }
	   }
	   if(count == 0){
	   	cout<<-1;
	   }
	return 0;
}
