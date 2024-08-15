//sum of even number digit
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ld;
    int sum=0;
    while(n>0){
        ld=n%10;
        n/=10;
        if(ld%2==0){
            sum=sum+ld;

        }
    }
    cout<<sum;
}