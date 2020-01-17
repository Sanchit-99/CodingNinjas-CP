#include<bits/stdc++.h>
using namespace std;

struct Rank{
    int total;
    string name;
    int rollno;
};

bool compare(Rank r1,Rank r2){
	if(r1.total == r2.total){
		return (r1.rollno<r2.rollno);
	}
	else{
		return (r1.total>r2.total);
	}

}

int main()
{
    int n;
    cin>>n;
   	struct Rank r[n];
   	int roll=1;
     for(int i=0;i<n;i++){
         int n1,n2,n3;
         cin>>r[i].name;
         cin>>n1>>n2>>n3;
         r[i].total = n1+n2+n3;
         r[i].rollno=roll++;
     }
     
     sort(r,r+n,compare);
     int k=1;
     for(int i=0;i<n;i++){
         cout<<k++<<" "<<r[i].name<<endl;
     }
    
    
    
	return 0;
}
