#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l,m,n;
	cin >> l >> m >> n;
	while(n--){
		int now = l+1;
		int mark = 1;
		for(int i=0;i<m;++i){
			int op;
			cin >> op;
			if(op==1){
				now++;
			}
			else{
				now--;
			}
			if(2*l+1 < now){
				mark = 0;
			}
			if(now < 1){
				mark = 0;
			}
		}
		cout << mark << endl ;
	}
	return 0;
}
