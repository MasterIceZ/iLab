/*
 * Solved By : Hydrolyzed_
 * Notation  : O(n)
 * */

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>v){
	map<int,int>mp;
	for(auto x : v){
		mp[x]++;
	}
	for(auto x : mp){
		if(x.second>=2){
			return x.first;
		}
	}
}

vector<int> read_v(){
	int n;
	cin >> n;
	vector<int>v(n);
	for(auto &x : v){
		cin >> x;
	}
	return v;
}

int32_t main (){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int>v = read_v(); // Read Input
	int ans = solve(v); // Solve for answer
	cout << ans << '\n'; // Print out Answer
	return 0;
}
