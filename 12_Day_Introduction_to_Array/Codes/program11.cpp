/*    ** sum of element in array**
 *
 *
 *    input: {1,2,3,4}
 *
 *    Output: 10
 *
 */

#include<iostream>

using namespace std;

int sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){

		sum =sum + arr[i];
	}
	return sum;
}
int main(){
	int arr[5]={1,2,3,4,5};

	cout<<sum(arr,5);
}


