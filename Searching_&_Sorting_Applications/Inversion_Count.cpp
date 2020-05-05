
typedef long long ll;
ll merge(int arr[],int l,int m,int h){
	
	int aux[h-l+1];
	int i,j,k;
	i=l;j=m+1;k=0;
	ll count=0;
	int len=m+1;
	
	
	while(i<=m && j<=h){
		if(arr[i]<=arr[j])
			aux[k++]=arr[i++];
		else{
			aux[k++]=arr[j++];
			count = count + (len-i);
		}
	}
	
	while(i<=m){
		aux[k++]=arr[i++];
	}
	
	while(j<=h){
		aux[k++]=arr[j++];	
	}
	
	int x=0;
	for(int i=l;i<=h;i++){
		arr[i]=aux[x++];
	}
	
	return count;
	
}

ll mergesort(int arr[],int l,int h){
	ll wholecount=0;
	if(l<h){
		int mid = (l+h)/2;
		ll leftcount = mergesort(arr,l,mid);
		ll rightcount = mergesort(arr,mid+1,h);
		ll mergecount = merge(arr,l,mid,h);
		return leftcount + rightcount + mergecount;
	}
		return wholecount;
	
	
}

long long solve(int A[], int n)
{
	ll count=mergesort(A,0,n-1);
    return count;
}
