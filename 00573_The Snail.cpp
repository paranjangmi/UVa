# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double H,U,D,F;
	while(cin>>H>>U>>D>>F){
		double n=U,f=U*(F/100.0);
		int cnt=1;
		if(H==0) break;
		while(n>=0 && n<=H){
			cnt++;
			if(cnt%2==0){
				n=n-D;
			}else{
				U=U-f;
				if(U<0) continue;
				n=n+U;			
			}
		}
		if(n<0){
			cout<<"failure on day "<<ceil(cnt/2.0)<<endl;
		}else{
			cout<<"success on day "<<ceil(cnt/2.0)<<endl;
		}		
	}
	return 0;
}
