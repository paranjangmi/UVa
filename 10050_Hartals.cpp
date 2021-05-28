# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int T;
	cin>>T;
	while(T--){
		int N,P,h;
		cin>>N>>P;
		int a[N+5]={0};
		for(int i=0;i<P;i++){
			cin>>h;
			int j=1;
			while(j<=N){
				if(j%h==0){
					a[j]++;
				}
				j++;
			}
		}
		int cnt=0;
		for(int i=1;i<=N;i++){
			if(a[i]>0 && i%7 && i%7!=6){
				cnt++;
			}
		}
		cout<<cnt<<endl;
		
	} 

	return 0;
}
