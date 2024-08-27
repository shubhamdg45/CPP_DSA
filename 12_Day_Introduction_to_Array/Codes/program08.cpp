/*    ** Calculate the average of elements in an array of size 18**
 *
 *	input:{1,2,3,4,5}
 *
 *	output: 3    sum of all element /number of element
 *
 *
 */

#include<iostream>

using namespace std;


int averageof(int arr[],int n){

	int sum=0;

	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}

	int average=sum/n;

	return average;

}

int main(){
	int n;
	cin>>n;
	int arr[18];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<averageof(arr,n);


	return 0;
}
