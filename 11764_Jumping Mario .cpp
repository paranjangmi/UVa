# include<bits/stdc++.h>
using namespace std;
int main(){
	int T,n;
	cin>>T;
	for(int c=1;c<=T;c++){
		cin>>n;
		int a[n],h=0,l=0;
		for(int i=0;i<n;i++){
			 cin>>a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				h++;
			}else if(a[i]<a[i-1]){
				l++;
			}
		}
		cout<<"Case "<<c<<": "<<h<<" "<<l<<endl;
		
	} 
	return 0;
}
