#include<bits/stdc++.h>
using namespace std;
int main(){
	int xygs;//��Ҫ����
	int a[3][2];
	int hf[3]; 
	
	//�������� 
	cin >> xygs;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin >> a[i][j];
		}
	}
	//�������� 
	
	for(int i=0;i<3;i++){
		hf[i]= (xygs%a[i][0]==0)?(xygs/a[i][0])*a[i][1]:((xygs/a[i][0])+1)*a[i][1];
	}
	
	int sc=hf[0];
	for(int i =0;i<3;i++){
		if(hf[i]<sc){
			sc=hf[i];
		}
	}
	cout <<sc;
	
}
