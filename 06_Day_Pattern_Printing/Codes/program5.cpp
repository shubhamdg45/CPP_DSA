// a a a a a 
// b b b b b 
// c c c c c
// d d d d d
//
#include<iostream>

using namespace std;

int main(){
	char c='a';
	for(int i=1;i<=4;i++){
		//char c='a';// alternate cha name= 'a'+(row-1);
		for(int j=1;j<=4;j++){

			cout<<c;   // print name;
			

		}
		c=c+1;
		cout<<endl;
	}


	return 0;
}
