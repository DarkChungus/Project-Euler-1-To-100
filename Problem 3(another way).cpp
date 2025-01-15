#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

bool isPrime(ll n){
	int c = 1;
	for(int i=1; i<=sqrt(n)+1; i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ll num = 600851475143;
	int ans;
	for(int i=round(sqrt(num))+1;i>=1;i--){
		if(num%i==0&&isPrime(i)){
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
