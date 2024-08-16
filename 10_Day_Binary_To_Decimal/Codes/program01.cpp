/*
 *   ** Binary To Decimal Conversion **
 *
 *   Input: 13             13%2=1
 *			   13/2;
 *			   ans=rem*mul
 *   Output: 1101
 *
 */


#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<" Enter The Number : ";

	cin>>n;
	int rem,ans=0,mul=1;
	while(n>0){

		rem=n%2;

		n=n/2;

		ans=rem*mul+ans;
		mul =mul*10;
	}
	cout<<ans;

	

	return 0;
}
