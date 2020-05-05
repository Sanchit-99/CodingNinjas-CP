// arr - input array
// size - size of array
// x - sum of triplets
#include<algorithm>
void FindTriplet(int arr[], int n, int x) {
    sort(arr,arr+n);
   for (int i=0; i<n-2; i++) 
    { 
        for (int j=i+1; j<n-1; j++) 
        { 
            for (int k=j+1; k<n; k++) 
            { 
                if (arr[i]+arr[j]+arr[k] == x) 
                { 
                    cout << arr[i] << " "<< arr[j] << " "<< arr[k] <<endl;
                } 
            } 
        } 
    } 
    
}
