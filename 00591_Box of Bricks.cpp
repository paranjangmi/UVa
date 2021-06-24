# include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,cnt=0;
	while(cin>>n && n){
		int h[n],sum=0,avg,ans=0;
		cnt++;
		for(int i=0;i<n;i++){
			cin>>h[i];
			sum+=h[i];
		}
		avg = sum/n;
		for(int i=0;i<n;i++){
			if(h[i]>avg){
				ans+=h[i]-avg;
			}
		}
		cout<<"Set #"<<cnt<<endl;
		cout<<"The minimum number of moves is "<<ans<<".\n";
	}
	
	return 0;
}
