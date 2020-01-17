int sum(int input[], int n) {
  
    if(n == 1){
        return input[0];
    }
    return sum(input+1,n-1) + input[0];
    

}
