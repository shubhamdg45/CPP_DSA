/*determine the profit
 input cp=100 sp=150

 output: loss :50
*/
#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit;
    cout<<"enter a cost cost price :";
    cin>>cp;
    cout<<"enter a selling price :";
    cin>>sp;
    if(cp<sp){
        cout<<"profit occured";
        profit=cp-sp;
        cout<<profit;
    }
    else if(cp==sp){
        cout<<"no loss";
        
    }
    else{
        cout<<"loss ="<<sp-cp;
    }

}