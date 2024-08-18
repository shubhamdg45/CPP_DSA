/*  
 *  ** convert into Octal **
 *
 *   Input : 10
 *
 *   Output : 12
 *
 */

#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<"Enter the NUmber :";

	cin>>n;
	int rem,ans=0,mul=1;
	while(n>0){
	rem = n%8;
	n=n/8;

	ans =rem *mul + ans;
	mul=mul * 10;
	
	}
	cout<<ans;
	return 0;
}
