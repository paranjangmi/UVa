# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int S;
	while(cin>>S){
		int N, I;
		double p;
		while(S--){
			cin>>N>>p>>I;
			if(p==0){
				cout<<0.0000<<endl;
				continue;
			}
			double first = pow(1.0-p, I-1) * p;
			double r = pow(1.0-p, N);	
			cout<<fixed<<setprecision(4)<<first/(1.0-r)<<endl;
		}
	}
	
	
	return 0;
}
