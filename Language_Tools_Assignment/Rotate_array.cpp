// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int n) {
    
    while(d--){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    }

}	
