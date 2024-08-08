/*
 * print pattern 
 *
 * Input:4
 *
 * Output:
 *
 * a
 * bb
 * ccc
 * dddd

 */
#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<"enter the number: ";

	cin>>n;
	char name='a';
	for(int i=1;i<=n;i++){

		for(int j=1;j<=i;j++){

			cout<<name + i-1;
		}
		cout<<endl;
	}


	return 0;
}
