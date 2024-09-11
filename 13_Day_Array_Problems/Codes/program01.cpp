/*difference between sum of even-sum of odd
    input:{1,2,3,4,5,6,7}
    Output:4;
*/


#include<iostream>
using namespace std;

int main(){
        int arr[7]={1,2,3,4,5,6,7};
        int sum=0;
        int sum2=0;
        for(int i=0;i<7;i++){
                if(i%2==0){
                    sum=sum+arr[i];
                }
                else{
                    sum2=sum2+arr[i];
                }
        }
                cout<<sum-sum2;
        
}
