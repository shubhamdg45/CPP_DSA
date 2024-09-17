/*      **Selection sort**
 *
 *      1. consider first element as smallest element
 *      2. find smallest element and swap element with first element
 *      3. repeat until array will be sorted
 *       
 *
 *      Input:{64,12,22,56,78}
 *      Output:{12,22,56,78}
 *
 *      Time complexcity: o(n^2)
 */


#include<iostream>

using namespace std;

void selectionsort(int arr[],int n){

	for(int i=0;i<n-1;i++){

		int min=i;

		for(int j=i+1;j<n;j++){

			if(arr[j]<arr[min]){
				min=j;
			}
		}
			swap(arr[i],arr[min]);
		
	}
}

void printarray(int arr[],int n){

	for(int i=0;i<n;i++){

		cout<<arr[i]<<endl;
	}
}

int main(){

	int arr[5]={64,12,22,56,78};
	int n=5;

	selectionsort(arr,n);
	printarray(arr,n);
	

	return 0;
}
	
			


