#include <iostream>
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


void keypad(int num,string output){
	
	if(num == 0){
		cout<<output<<endl;
		return;
	}
	
	
	int lastdigit = num%10;
	string pattern = givepattern(lastdigit);
	
	for(int i=0;i<pattern.size();i++){
			keypad(num/10,pattern[i] +output);
	}

}


void printKeypad(int num){

    keypad(num,"");
    
}
