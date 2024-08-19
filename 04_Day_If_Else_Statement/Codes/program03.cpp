/* print week days
  if you press one then print monday

*/

#include<iostream>
using namespace std;

int main(){

	int n;

	cin>>n;

	if(n==1){

		cout<<"today is Monday";

	}


	else if(n==2){

                cout<<"today is Tueday";

        
	}


	else if(n==3){

                cout<<"today is Wednesday";

        }
	
	else if(n==4){

                cout<<"today is Thursday";

        }
	
	else if(n==5){

                cout<<"today is Friday";

        }
	
	else if(n==6){

                cout<<"today is Saturday";

        }
	
	else if(n==7){

                cout<<"today is Sunday";

        }

	else
		cout<< " enter correct number";

	return 0;
}

