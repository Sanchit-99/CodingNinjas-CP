int power(int x, int n) {

    if(n == 0){
        return 1;
    }
    int smalloutput = power(x,n-1);
    
    return x*smalloutput;
    
}
