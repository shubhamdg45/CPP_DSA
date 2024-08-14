/* Check Number is positive ,negative,zero.
	 
	 input= 23
	 output: Positive

	 input=-45
	 output: Negative

	 input=0;

	 output: Zero



*/


#include<iostream>
using namespace std;

int main(){
	
	int Number;
	cin>>Number;
	
	if(Number > 0){

		cout<< " Number is positive" ;

	}

	else if(Number == 0){

		cout<< " NUmber is 0";

	}

	else 
		cout<<" Number is negative";


	return 0;
}
