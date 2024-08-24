/*    
 *    ** Search an Element**
 *
 *    Input: {10,20,7,11,8,4} 
 *    Find 11 in array if present give me position of 11.  if not present -1;
 *	
 *    Output: 3 
 *
 *    input: 17
 *    output:-1
 *
 */

#include<iostream>

using namespace std;


int searchelement(int arr[],int n,int target){

	for(int i=0;i<n;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}

int main(){

	int n;

	cin>>n;
	int target;
	cin>>target;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<searchelement(arr,n,target);


	return 0;

}


