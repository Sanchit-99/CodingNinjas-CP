void swapp(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int partition(int a[],int l,int h){
	
	int small=0;
	for(int i=l+1;i<=h;i++){
		if(a[i]<=a[l]){
			small++;
		}
	}
	int c= l+small;
	swapp(&a[l],&a[c]);
	int i=l,j=h;
	while(i<c && j>c){
	 
	if(a[i]<=a[c]){
		i++;
	}else if(a[j]>a[c]){
		j--;	
	}else{
		swapp(&a[i],&a[j]);	
	}
	
	}
	return c;
	
}

void quick(int a[],int l,int h){
	int c;
	if(l<h){
		c = partition(a,l,h);
		quick(a,l,c-1);
		quick(a,c+1,h);
	}
}

void quickSort(int input[], int size) {
	
	quick(input,0,size-1);
	
}
