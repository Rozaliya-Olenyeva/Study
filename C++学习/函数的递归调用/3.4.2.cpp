#include <iostream>
using namespace std;
int fac(int n){
	int f;
	if(n == 0){
		f = 1;
	}
	else{
		f = fac(n -1) * n;
	}
	return f;
}
int main(){
	int n;
	cout <<"������n����ֵ";
	cin >> n;
	int y = fac(n);
	cout << n << "!=" <<y <<endl;
	return 0; 
} 
