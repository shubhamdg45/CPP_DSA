/*
 *  ** Add digit Leetcode Problem **
 *
 *   Input : 12345
 *
 *   output: 1+2+3+4+5=15  1+5=6
 *
 */

#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<"Enter the Number : ";

	cin>>n;
	int sum=0,rem;
	while(n>9){
	
	while(n>0){

		rem=n%10;

		n=n/10;

		sum=sum+rem;
	}
	 	
		n=sum;
		cout<<sum;
        }






	return 0;
}
