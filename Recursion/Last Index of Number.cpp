int lastIndex(int input[], int size, int x) {
 
    if(size == 0){
        return -1;
    }
    if(x == input[size-1]){
        return size-1;
    }
    
    int temp = lastIndex(input,size-1,x);
    
    if(temp == -1){
        return -1;
    }
    else{
        return temp;
    }

}
