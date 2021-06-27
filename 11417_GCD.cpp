# include<bits/stdc++.h> 
using namespace std;

int GCD(int x, int y){
	while((x%=y)&&(y%=x));
	
	return x+y;
}


int main(){
	
	int N;
	while(cin>>N && N){
		int G=0;
		for(int i=1;i<N;i++){
			for(int j=i+1;j<=N;j++){
				G+=GCD(i,j);
			}
		}
		cout<<G<<endl;
	}
	
	return 0;
}
