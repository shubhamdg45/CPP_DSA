/*    
 *    ** SET **
 *
 *    arr[2,5,2,1,5]
 *
 *    set -> {1,2,5}
 *
 */

#include<iostream>
#include<set>
using namespace std;
int main(){

	int n;

	cin>>n;

	set<int>st;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;

	 st.insert(x);

	}

	return 0;
}
