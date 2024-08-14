// n divisible by 5&3
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"number is divisible by 5 & 3";
    }
    else
        cout<<"not divisible";
}