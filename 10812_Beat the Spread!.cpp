# include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	cin>>n;
	while(n--){
		int x,y,sum,diff;
		cin>>sum>>diff;
		# two teams can both got 0 score 
		if(sum<diff || (sum+diff)%2!=0 || (sum-diff)%2!=0) cout<<"impossible"<<endl;
		else{
			x = (sum+diff)/2;
			y = (sum-diff)/2;
			cout<<x<<" "<<y<<endl;
		}
	}
	return 0;
}
