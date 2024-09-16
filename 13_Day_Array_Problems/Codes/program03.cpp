/*
    Peak element in array
    input:{1,2,3,4,5,6,7}
    output:7
*/

#include<iostream>
using namespace std;
bool found=false;
void peak(int arr[],int n){
    for(int i=0;i<n;i++){ 
        if((i==0 || arr[i]>=arr[i-1]) && (i==n-1 || arr[i]>=arr[i+1])){
            cout<<arr[i]<<endl;
            found=true;
        }
   
    }
    if(!found){
      cout<<"no element found";
    }
   
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    peak(arr,n);
}