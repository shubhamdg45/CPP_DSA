/* how many digit in a number
        Input = 1234
        Output=4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
    return 0;
}

