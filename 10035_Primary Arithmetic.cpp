# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int num1, num2;
	while(cin>>num1>>num2){
		if(num1==0 && num2==0) break;
		int cnt=0, sum, tmp=0;
		while(num1||num2){
			sum = num1%10+num2%10+tmp;
			if(sum>=10){
				tmp=sum/10;
				cnt++;
			}else{
				tmp=0;
			}
			num1/=10;
			num2/=10;
		}
		if(cnt==0){
			cout<<"No carry operation."<<endl;
		}else if(cnt==1){
			cout<<"1 carry operation."<<endl;	
		}else{
			cout<<cnt<<" carry operations."<<endl;
		}
	}
	

	return 0;
}
