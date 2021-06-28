# include<bits/stdc++.h> 
using namespace std;
bool cmp(int a,int b){
	return (abs(a)<abs(b));
}
int main(){
	int p,n;
	cin>>p;
	while(p--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		bool f=(a[0]>0);
		int tmp=1,mx=0;
		for(int i=1;i<n;i++){
			if(!f==(a[i]>0)){
				tmp++;
				f=(a[i]>0);
			}
		}
		cout<<tmp<<endl;
	}
	
	return 0;
}
