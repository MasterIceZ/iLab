#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


char table[10][10];

void init(){
	memset(table, '#', sizeof table);
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j){
			table[i][j] = ' ' ; 
		}
	}
}

void print(pair<int,int>pos){
	for(int i=0;i<=4;++i){
		for(int j=0;j<=4;++j){
			if(i == pos.first and j == pos.second){
				cout << "o" ;
			}
			else{
			cout << table[i][j];
		
			}
		}
		cout << endl;
	}
}

int main (){
	init();

	pair<int,int> pos = make_pair(3,1);

	print(pos);

	cout << "Enter W/A/S/D : " << endl;
	while(1){
		char opr = getch();
		system("cls"); // for windows
		//system("clear"); // for unix

		switch(opr){
			case 'w' :
				pos.first -= pos.first==1?0:1;
				break;
			case 'a' :
				pos.second -= pos.second==1?0:1;
				break;
			case 's' :
				pos.first += pos.first==3?0:1;
				break;
			case 'd' :
				pos.second += pos.second==3?0:1;
				break;
			default :
				cout << "Error" << endl;
		}
		print(pos);
		cout << "Enter W/A/S/D : " << endl;
	}

	return 0;
}
