/*   **Output of Program**
 *	
 *	if we declare same variable with different data type it shows following 	error
 *	error: conflicting declaration 'double var'
 *
 *
 *
 */

#include<iostream>

using namespace std;

int main(){

	int var=50;
	
	double var=10.0;

	cout<<var; //it shows error.



	return 0;
}
