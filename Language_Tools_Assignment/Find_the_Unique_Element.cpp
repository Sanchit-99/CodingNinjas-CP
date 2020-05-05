// arr - input array
// size - size of array
#include<algorithm>

int FindUnique(int arr[], int n){

    int xo=0;
   for(int i=0;i<n;i++){
       xo=xo^arr[i];
   }
    return xo;
}
