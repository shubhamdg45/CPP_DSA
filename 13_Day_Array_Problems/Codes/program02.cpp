/*sum of pair == given number
   Input:{1,2,3,4,5,6,7} , number =5
   Output:(1,4),(2,3)
*/

#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    cin>>x;
    bool pair=false;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==x){
                cout<<"(" <<arr[i]<<","<<arr[j]<<")"<<endl;
                 pair=true;
            }
           
        }
    }
    if(!pair){
        cout<<"no pair";

    }
 
}

