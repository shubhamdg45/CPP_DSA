// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
//
#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<" enter a number: ";

	cin>> n;


	for(int row=1;row<=5;row++){

		for(int col=1;col<=5;col++){

			cout<<"10"<<" ";
		}

		cout<<endl;
	}


	return 0;
}

