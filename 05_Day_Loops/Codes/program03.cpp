<<<<<<< HEAD:05_Day_Loops/Codes/program5.cpp
/*   **calculate power**

	

=======
/*  **calculate power**
   input :10,pow=2
   Output: 100
>>>>>>> 84b30fd5960bc2b782c0eb6de891e655754a9920:05_Day_Loops/Codes/program03.cpp
*/
#include<iostream>

using namespace std;

int main(){

	int n,pow,num;

	cout<<"Enter the number:";
	cin>>n;

	cout<<"enter the power : ";
	cin>>pow;

	num =n;
	for(int i=1;i<pow;i++){

		num=num * n;
	}

	cout<<num;




	return 0;
}
