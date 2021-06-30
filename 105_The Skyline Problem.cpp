#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    int l,r,h,max_R=0;
    int arr[10005]={0};
    while(cin>>l>>h>>r && !cin.eof()){
    	if(r>max_R) max_R=r;
    	for(int i=l;i<r;i++){
    		if(h>arr[i]) arr[i]=h;
		}
	}
	for(int i=1;i<=max_R;i++){
		if(i==1) cout<<i<<" "<<arr[i];
		else if(arr[i-1]!=arr[i]){
			cout<<" "<<i<<" "<<arr[i];
		}
	}
	cout<<endl;
	    
    return 0;
}
