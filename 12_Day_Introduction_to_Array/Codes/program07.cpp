/*  
 *    ** Fibonacci series **
 *
 *    input : 7;
 *
 *    Output: 0 1 1 2 3 5 8
 *  
 */

#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[1000];

	 arr[0]=0;
	 arr[1]=1;

	for(int i=2;i<=n-1;i++){

		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=0;i<n;i++){

		cout<<arr[i]<<" ";
	}
	return 0;
}
