/*  
 *   ** Missing number **
 *
 *   input: {1 2 3 5}
 *   outpu: 4
 *
 */


#include<iostream>

using namespace std;


int missing(int arr[],int n){
	int sum=0;
	int sum2=0;
	for(int i=0;i<n-1;i++){ // arr{1 ,2 ,3 ,5 ,6}   sum 
     
		sum+=arr[i];
	}

	sum2=n*(n+1)/2;
	return sum2-sum;
}
int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n-1;i++){

	   
		cin>>arr[i];
	}

	cout<<missing(arr,n);

	return 0;
}
