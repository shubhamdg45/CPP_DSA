/*
 *
 *     ** FIND SECOND MAX ELEMENT IN ARRAY**
 *
 *     intput: {1,2,3,4,5}
 *
 *     output: 4;
 *
 *     1st approach sort the array print 1 element 
 *     time complexicity : o(nlog n);
 *
 *     2nd approach using 1 for loop 
 *     time complexcity : 0(n)
 *
 *
 */

#include<iostream>
#include<limits.h>
using namespace std;

int secmax(int arr[],int n){


	int secmax=INT_MIN;
	int max=arr[0];

	for(int i=0;i<n;i++){

		if(arr[i]>max){
			secmax=max;
			max=arr[i];
		}

		if(secmax<arr[i] && max>arr[i]){
			secmax=arr[i];}
	}

	return secmax;
}
int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<secmax(arr,n);


	return 0;
}
