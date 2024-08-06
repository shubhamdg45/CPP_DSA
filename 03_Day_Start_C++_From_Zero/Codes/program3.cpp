// variabe declare 

#include<iostream>

using namespace std;


int main(){

	// int variable it takes 4 bytes 
	
	int a=10,b=20,c=30;
	cout<<a << " " << " " << b <<" "<< c <<endl;
	cout<<"Size of int : "<<sizeof(a)<<endl;
	//float variable it take 4 bytes
	
	float d=1.23;
	cout<<d<<endl;
	cout<<"Size of float : "<<sizeof(d)<<endl;
	// double variable it takes 8 bytes
	
	double e=1.23456;
	cout<<e<<endl;

	cout<<"Size of double : "<<sizeof(e)<<endl;

	// boolean variable it takes 1 bytes
	//
	  
	bool f=1;

	cout<<f<<endl;

	cout<<"Size of boolean : "<<sizeof(f)<<endl;



	return 0;
}
