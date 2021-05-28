# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int n;
	while(cin>>n){
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dif[n-1];
		for(int i=0;i<n-1;i++){
			dif[i] = abs(a[i+1]-a[i]);
		}
		sort(dif,dif+n-1);
		bool flag = true;
		for(int i=0;i<n-2;i++){
			if(dif[0]!=1 || dif[i+1]!=dif[i]+1){
				cout<<"Not jolly"<<endl;
				flag = false;
				break;
			}
		}
		if(flag) cout<<"Jolly"<<endl;
		
	}
	

	return 0;
}
