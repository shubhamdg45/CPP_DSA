/*  **calculate power**
   input :10,pow=2
   Output: 100
*/
#include<iostream>

using namespace std;

int main(){

	int n,pow,num;

	cout<<"Enter the number:";
	cin>>n;

	cout<<"enter the power : ";
	cin>>pow;

	num =n;
	for(int i=1;i<pow;i++){

		num=num * n;
	}

	cout<<num;




	return 0;
}
