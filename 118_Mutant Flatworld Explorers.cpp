#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    int gx,gy;
    cin>>gx>>gy;
    int x,y;
    char pos;
    char ori[4] = {'N','E','S','W'};
    string instr;
    bool flag[gx+1][gy+1] = {false};
    while(cin>>x>>y>>pos){
    	bool lost=false;
    	int pid;
    	for(int i=0;i<4;i++){
    		if(pos==ori[i]){
    			pid = i;
    			break;
			}
		}
    	getline(cin,instr);
    	getline(cin,instr);
    	for(int i=0;i<instr.size();i++){
    		if(instr[i]=='L'){
    			if(pid-1<0) pid=3;
    			else pid-=1;
				pos = ori[pid];
			}else if(instr[i]=='R'){
				if(pid+1>3) pid=0;
				else pid+=1;
				pos = ori[pid];
			}else{
				if(pos=='N'){
					if(y+1>gy){
						if(!flag[x][y]){
							flag[x][y]=true;
							cout<<x<<" "<<y<<" "<<pos<<" LOST\n";
							lost = true;
							break;
						}
					}else{
						y+=1;
					}
				}else if(pos=='E'){
					if(x+1>gx){
						if(!flag[x][y]){
							flag[x][y]=true;
							cout<<x<<" "<<y<<" "<<pos<<" LOST\n";
							lost = true;
							break;
						}
					}else{
						x+=1;
					}
				}else if(pos=='S'){
					if(y-1<0){
						if(!flag[x][y]){
							flag[x][y]=true;
							cout<<x<<" "<<y<<" "<<pos<<" LOST\n";
							lost = true;
							break;
						}
					}else{
						y-=1;
					}
				}else{
					if(x-1<0){
						if(!flag[x][y]){
							flag[x][y]=true;
							cout<<x<<" "<<y<<" "<<pos<<" LOST\n";
							lost = true;
							break;
						}
					}else{
						x-=1;
					}
				}
			}
		}
		if(!lost)
			cout<<x<<" "<<y<<" "<<pos<<endl;
	}
    return 0;
}
