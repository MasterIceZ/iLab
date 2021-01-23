#include<bits/stdc++.h>
using namespace std;

int main(){
	float balance,price;
	scanf("%f",&balance);
	while(balance > 0){
		scanf("%f",&price);
		if(balance - price < 0){
			printf("Error\n");
			break;
		}
		else{
			balance -= price;
			printf("Balance : %.2f\n",balance);
		}
	}
}
