
/*  Print Pattern 
 *
 * input: 5
 * output:
 *  1
 *  2 1
 *  3 2 1
 *  4 3 2 1
 *  5 4 3 2 1
 *
 *
 *
 */
#include<iostream>

using namespace std;

int main(){

	int n;

	cout<<"Enter the number : ";
	cin>>n;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=i;i++){

			cout<< i << " ";
		}
		cout<<endl;
	}


	return 0;
}
