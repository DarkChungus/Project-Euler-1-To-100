#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	for(int i=2; i<=n/2; ++i){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int index = 1;
	for(int i=3; i<=150000; i++){
		if(isPrime(i)){
			index++;
		}
		if(index==10001){
			cout << i << endl;
			break;
		}
	}
	return 0;
}
