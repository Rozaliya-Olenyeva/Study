#include<iostream> 
using namespace std;
enum class Side{
	Right,Left 
}; 
enum class Thing{
	Wrong,Right 
};//����ͻ
int main(){
	Side s = Side::Right;
	Thing w =Thing::Wrong;
	cout << (s==w)<<endl;
	return 0;
} 
