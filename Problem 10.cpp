#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	for(int i=2; i<=n/2; ++i){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	ll sum = 0;
	for(int i=3; i<=2000000; i+=2){
		if(isPrime(i)){
			sum += i;
		}
	}
	sum+=2;
	cout << sum << endl;
	return 0;
}
