#include <bits/stdc++.h>
using namespace std;

#define ll long long

int numDivisors(ll n){
	int count = 0;
	for(int i=1; i*i<=n; ++i){
		if(n%i==0){
			if(i*i==n){
				count++;
			}
			else count+=2;
		}
	}
	return count;	
}

int main(){
	for(int i=10000; i<=15000; ++i){
		if(numDivisors(i*(i+1)/2)>500){
			cout << i*(i+1)/2 << endl;
			break;
		}
	}
	return 0;
}
