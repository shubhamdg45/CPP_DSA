/*  
 *    ** Leap Year **
 *
 *    input: 2000
 *    
 *    output: Leap year
 *
 *    input 2 : 1999
 *
 *    output : Not leap year
 *
 */


#include<iostream>


int main(){

	int year;

	std::cout<<"Enter a Year : ";

	std::cin>>year;


	if(year % 400==0){
		std::cout<<"leap Year";
	}
	else if(year % 4==0 && year %100 !=0){
		std::cout<<"leap Year";
	}

	else
		std::cout<<"not leap year";

	return 0;
}

