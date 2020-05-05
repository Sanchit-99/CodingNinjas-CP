// arr - input array
// size - size of array
#include<map>
int MissingNumber(int arr[], int size){
    
    map<int,int> m;
    map<int,int>::iterator it;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
    for(it=m.begin();it!=m.end();it++){
        if(it->second >=2){
            return it->first;
        }
    }
}
