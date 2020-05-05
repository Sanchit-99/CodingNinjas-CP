

void merging(int A[],int l,int m,int h){
    int i,j,k;
    int aux[h-l+1];
    i=l;
    j=m+1;
    k=0;
    
    while(i<=m && j<=h){
        if(A[i]<=A[j])
            aux[k++] = A[i++];
        else
            aux[k++] = A[j++];
    }
    
    while(i<=m){
        aux[k++] = A[i++];
    }
    while(j<=h){
         aux[k++] = A[j++];
    }
    k=0;
    for(int i=l;i<=h;i++){
        A[i] = aux[k++];
    }
    
}

void merge(int A[],int l,int h){
    
    if(l<h){
        int m = (l+h)/2;
        merge(A,l,m);
        merge(A,m+1,h);
        merging(A,l,m,h);
    }
    
}

void mergeSort(int input[], int size){
	
    merge(input,0,size-1);
       
        
}
