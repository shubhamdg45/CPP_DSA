/*
 *    **minimum element**
 *
 *    input:{2 6 1 8 5}
 *    Output: 1
 *
 *
 */
#include<iostream>

using namespace std;

int minelement(int arr[],int n){
	int min=arr[0];

	for(int i=0;i<n;i++){

		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<minelement(arr,n);
	return 0;
}

