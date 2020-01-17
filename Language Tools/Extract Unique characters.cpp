
char* uniqueChar(char *str){
 
    int k=0;
        char *result=new char[500001];

    for(int i=0;str[i]!='\0';i++){
    	int j;
		for(j=0;j<i;j++){
    		if(str[i]==str[j])
    		break;
		}
		if(j==i){
			result[k++]=str[i];
		}
		
	}
    return result;
}
