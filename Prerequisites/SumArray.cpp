#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
            if((i+j) == (n-1) && i!=j){
                sum=sum+arr[i][j];
            }
            if((i==0 || i==n-1 ) && (i!=j) && ((i+j) != (n-1))){
                sum=sum+arr[i][j];
            }      
            if((j==0 || j==n-1 ) && (i!=j) && ((i+j) != (n-1))){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<< sum;
    for(int i=0;i<n;i++)
        delete arr[i];
    delete[] arr;
    return 0;
}
