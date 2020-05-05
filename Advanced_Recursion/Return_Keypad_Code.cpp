#include <string>
using namespace std;

string givepattern(int n){
	if(n == 2)
	return "abc";
	if(n == 3)
	return "def";
	if(n == 4)
	return "ghi";
	if(n == 5)
	return "jkl";
	if(n == 6)
	return "mno";
	if(n == 7)
	return "pqrs";
	if(n == 8)
	return "tuv";
	if(n == 9)
	return "wxyz";
}
int keypad(int num, string output[]){
    
    
   	if(num == 0){
		output[0] = "";
		return 1;
	}
	
	int smallsize = keypad(num/10,output);
	int x = num%10;
	string pattern = givepattern(x);
	//cout<<pattern<<endl;
	int sizeofcopy = pattern.size();
	
	int k=smallsize;
	for(int i=0;i<sizeofcopy - 1;i++){
		for(int j=0;j<smallsize;j++){
			output[k++] = output[j]; 
		}	
	}
	k=0;
	for(int i=0;i<sizeofcopy;i++){
		for(int j = 0;j<smallsize;j++){
			output[k++] = output [k] + pattern[i];
		}
	}
	
	return smallsize*sizeofcopy;
    
}
