# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int N,M,x1,x2,num;
	
	cin>>N;
	while(N--){
		int b1=0,b2=0;
		cin>>M;
		x1 = M;
		x2 = M;
		while(x1){
			if(x1%2==1) b1++;
			x1/=2;
		}
		
		while(x2){
			num = x2%10;
			while(num){
				if(num%2==1) b2++;
				num/=2;
			}			
			x2/=10;
		}
		cout<<b1<<" "<<b2<<endl;
		
	}

	return 0;
}
