/*   
 *   **Reverse Element in Array **
 *
 *   input : {12,10,11,13,14}
 *
 *   output: {14,13,11,10,12}
 *
 *
 */
#include<iostream>

using namespace std;

void reversearray(int arr[],int n){

	for(int i=0;i<n/2;i++){

		swap(arr[i],arr[n-i-1]);
	}
	for(int i=0;i<n;i++){

		cout<<arr[i];
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reversearray(arr,n);
	return 0;
}
