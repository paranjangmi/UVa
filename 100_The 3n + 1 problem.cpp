# include<bits/stdc++.h> 
using namespace std;

int cnt(int n){
	int c=1;
	while(n!=1){
		if(n%2==1) n=3*n+1;
		else n=n/2;
		c++;
	} 
	return c;
}



int main(){
	
	int i,j;
	while(cin>>i>>j){
		int m=0;
		for(int k=min(i,j);k<=max(i,j);k++){
			m = max(m,cnt(k));
		}
		cout<<i<<" "<<j<<" "<<m<<endl;
	}
	
	return 0;
}
