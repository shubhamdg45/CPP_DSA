
/*
 *   ** Convert Binary to Decimal **
 *
 *   Input : 1101
 *
 *   output : 13
 *
 */


#include<iostream>

using namespace std;


int main(){


	int n;

	cout<<" Enter the Binary NUmber : ";

	cin>>n;
	int rem,ans=0,mul=1;
	while(n>0){

		rem = n%10;

		n=n/10;

		ans=rem * mul +ans;
		mul=mul*2;
	}
		cout<<ans;
		return 0;

}
