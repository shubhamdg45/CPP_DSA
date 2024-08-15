/*
        ** Sum of Digit **

        number =1234
        output=10 
*/
#include<iostream>
using namespace std;
int main(){
    int n,ld;
    cin>>n;
    int sum=0;
    while(n>9){
        sum=0;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
       
    }
   n=sum;
    }
     cout<<sum;
}

