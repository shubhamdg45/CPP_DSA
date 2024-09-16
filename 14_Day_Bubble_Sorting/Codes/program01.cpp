/*    ** BUbble Sort **
 *	Bubble Sort is a simple sorting algorithm that repeatedly steps through 	the list to be sorted, compares adjacent items, and swaps them if they a	are in the wrong order
 *    Input: {7,5,6,3,2}
 *
 *    Output:{2,3,5,6,7}
 *
 */

#include<iostream>

using namespace std;

void Bubblesort(int arr[],int n){
	bool swapped;
	for(int i=0;i<n-1;i++){
				// why upto n-1  we use n-1 element with n 					so no need to go upto 
	swapped=false;
	for(int j=0;j<n-i-1;j++){

		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			swapped=true;
		}
	}
		if(!swapped){
			break;
		}
	}
}
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
		cout<<endl;
	}
}

int main(){

	int arr[5]={7,5,6,3,2};
	int n=5;

	Bubblesort(arr,n);
	printarray(arr,n);

	return 0;
}

