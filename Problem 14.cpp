#include <iostream>
using namespace std;

#define ll long long

ll countCollatz(ll n){
	ll counter = 0;
	while(n!=1){
		if(n%2==0){
			n /= 2;
			counter++;
		}
		else{
			n = 3 * n + 1;
			counter++;
		}
	}
	return counter;
}

int main(){
	ll maxm = 0;
	ll oldMax = 0;
	ll ans = 0;
	for(int i=1; i<1000000; i++){
		ll b = countCollatz(i);
		maxm = max(maxm, b);
		if(maxm>oldMax){
			ans = i;
		}
		oldMax = maxm;
	}
	cout << ans << endl;
	return 0;
}
