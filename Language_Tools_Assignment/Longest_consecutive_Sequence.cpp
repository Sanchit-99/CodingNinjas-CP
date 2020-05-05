#include <bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        m[arr[i]]=i;
    }
    int startfrom;
    int maxlength=0;
    int in=INT_MAX;
    for(int i=0;i<n;i++){	
    		
			if(m[arr[i]]!=-1)
			{
				int index=i;
	        	int curr=0;
	        	int sf=arr[i];
	        	curr++;
	        	m[arr[i]]=-1;
	        	
	        	int f=1;
				while(m.find(arr[i]+f)!=m.end()){
	        			m[arr[i]+f]=-1;
	        			curr++;
	        			f++;
				}
				
	        	int b=1;
				while(m.find(arr[i]-b)!=m.end()){
	        			index = m[arr[i]-b];
						m[arr[i]-b]=-1;
	        			curr++;
	        			b++;
	        			sf--;
					
				}
				
				if(curr>maxlength || curr == maxlength && index<in){
					maxlength = curr;
					startfrom = sf;
					in = index; 
				}
			}	
    }
    
    vector<int> result;
    for(int i=1;i<=maxlength;i++){
    	result.push_back(startfrom);
    	startfrom++;
	}
	
	return result;
    
}
