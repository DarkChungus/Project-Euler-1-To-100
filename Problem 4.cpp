#include <iostream>
using namespace std;

bool isPalin(int n){
	int originalNumber = n;
	int reversedNumber = 0;
	while(n>0){
		int digit = n%10;
		reversedNumber = reversedNumber * 10 + digit;
		n /= 10;
	}
	if(reversedNumber==originalNumber){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int ans = 1;
	for(int i=999; i>=100; i--){
		for(int j=999; j>=100; j--){
			if(isPalin(i*j)){
				ans = max(i*j, ans);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
