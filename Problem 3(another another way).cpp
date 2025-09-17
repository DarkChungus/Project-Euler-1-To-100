#include <iostream>
#include <cmath>
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
	ll num = 600851475143;
	for(int i=sqrt(num); i>1; --i){
		if(num%i==0 && isPrime(i)){
			cout << i << endl;
			break;
		}
	}
	return 0;
}
