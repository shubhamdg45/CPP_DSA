/*
 *      ** Reverse interger **
 *
 *      input: 1234
 *      Output:4321
 *
 *      input:-123
 *      output:-321
 *
 */

#include<iostream>

int main(){
	int n;

	std::cout<<"Enter the Number : ";

	std::cin>> n;
	int rem,ans=0;
	while (n !=0){
	
		rem = n%10;

		n/=10;

		ans=ans*10 +rem;

		
	}
	
		std::cout<<ans;




	return 0;
}
