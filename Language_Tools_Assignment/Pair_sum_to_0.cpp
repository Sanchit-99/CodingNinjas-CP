 	#include<map>
	void PairSum(int *input, int n) {	 
		
	
     	map<int,int> m;
        map<int,int>::iterator it1,it2;
        
        for(int i=0;i<n;i++){
            m[input[i]]++;
        }
         
        for(int i=0;i<n;i++){
            if(m.find(-input[i]) != m.end()){
                it1 = m.find(-input[i]);
                it2 = m.find(input[i]);
                int x = it1->second * it2->second; 
                while(x--){
                	cout<<min(it1->first,it2->first)<<" "<<max(it2->first,it1->first)<<endl;
				}
				m.erase(input[i]);
				m.erase(-input[i]);
				
            }
        }  	
     	
 	}
