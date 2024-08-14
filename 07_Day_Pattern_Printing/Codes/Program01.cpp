/*
 *   ** Print Pattern**
 *
 *   Input=5
 *
 *   output:
 *
 *        A
 *      A B
 *    A B C
    A B C D
  A B C D E

 */

#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter a Number : ";

	cin>>n;

	//char name='A';


	for(int i=1;i<=n;i++){
		char name='A';
 
		for(int j=1;j<=5-i;j++){

			cout<<" ";
		}

		for(int j=1;j<=i;j++){   /*for(char name='A';name<'A'+i-1;name++){

					   	cout<<name;
						*/
  			                            
			cout<<name;      
			name++;
		        
		}
		cout<<endl;
	}


	return 0;
}
