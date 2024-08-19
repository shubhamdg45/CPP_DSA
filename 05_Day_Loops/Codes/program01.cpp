
/*  **calculate sum of n natural number**

 input : 5
 Output: 15

*/
#include<iostream>

using namespace std;


int main(){

	int n;
	int sum=0;
	cout<< "Enter a number : ";

	cin>> n;
	
	for(int i=1;i<=n;i++){

			sum =sum +i;
	}

	cout<< sum;

	



	return 0;

}
