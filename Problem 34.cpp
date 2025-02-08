#include <iostream>
using namespace std;

#define ll long long

ll factorial(int n){
	int ans = 1;
	for(int i=1; i<=n; i++){
		ans*=i;
	}
	if(n==0){
		ans = 1;
	}
	return ans;
}

bool digitSumFactorial(int n){
	int sum = 0;
	int check = n;
	while(n!=0){
		sum += factorial(n%10);
		n = n / 10;
	}
	return sum==check;
}

int main(){
	int sum = 0;
	for(int i=3; i<=100000; i++){
		if(digitSumFactorial(i)){
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
