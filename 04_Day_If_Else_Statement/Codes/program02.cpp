/* check character weather vowel or conso

  input: a ,e, i, o, u,A,E,I,O,U;

  output: Vowel



*/

#include<iostream>
using namespace std;

int main(){

	char c;

	cin>>c;
	
	if(c=='a' || c=='e' ||c=='o' ||c=='i' || c=='u'){
		cout<<"character is vowel";
	}
	else if(c=='A' || c=='E' ||c=='I' ||c=='O' || c=='U'){

		cout<<"character is vowel";
	}

	else
		cout<<"character is conso";



	return 0;
}
