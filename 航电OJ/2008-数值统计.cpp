#include<iostream>
using namespace std;
int main(){
	int k;//k �Ǹ�������˼
	while(cin >> k){
		if(k==0){
			break;
		} 
		int negative_number = 0; //���� 
		int zero_num = 0; // 0
		int positive_number = 0; //���� 
		for(int i = 0;i < k; i++){
			double num;
			cin >> num;
			if(num > 0){
				positive_number++; 
			}
			else if( num == 0){
				zero_num++;
			}
			else{
				negative_number++;
			}
		}
		cout << negative_number << ' ' << zero_num << ' ' << positive_number << endl;
	} 
	return 0;
}
