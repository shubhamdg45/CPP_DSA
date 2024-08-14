/* weather area of rectangle is greater than parameter

    input: area=100,perimeter=50

    ouput:  area is greater than perimeter
    */
#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"Enter a length :";
    cin>> l;
    cout<<"enter a breath :";
    cin>>b;
    //area of rectangle
    a=l*b;
    //perimeter of rectangle
    p=2*(l+b);
    if(a>p){
        cout<<"area of rectangle is greater than perimeter";

    }
    else if(a==p){
        cout<<"area of rectangle is equal to perimeter ";
    }
    else
        cout<<" area of rectangle is less than perimeter";


}
