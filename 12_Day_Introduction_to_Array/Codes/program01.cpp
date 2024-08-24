/*
 *      ** max element in array**
 *
 *      intput: {2,5,3,6,8}
 *
 *      output : 8;
 *
 */

#include<iostream>

using namespace std;

int maxelement(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<n;i++){

		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<maxelement(arr,n);


	return 0;
}

