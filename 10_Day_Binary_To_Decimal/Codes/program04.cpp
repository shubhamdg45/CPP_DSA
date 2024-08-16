/*  
 *  ** octal to decimal **
 *
 *  input : 12
 *
 *  output : 10
 *
 */

#include<iostream>

using namespace std;


int main(){
	int n;

	cout<<" Enter the Octal Number :";

	cin>>n;
	int rem,ans=0,mul=1;
	while(n>0){

		rem =n%10;

		n=n/10;

		ans =rem *mul +ans;
		mul =mul * 8;
	}
		cout<<ans;




	return 0;
}
