// 3 number sides of triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>b && (b+c)>a && (a+c)>b){
        cout<<"They can be sides of triangle";
    }
    else{
        cout<<"not sides of triangle";
    }

}