#include<iostream>
#include<iomanip> 
#include<string>
using namespace std;
struct student{ //ѧ����Ϣ�ṹ�� 
	int num; //ѧ�� 
	string name; //���� 
	char sex; //�Ա� 
	int age;//���� 
};
int main(){
	student moe ={20302077,"Moe",'F',19};
	cout << "Num:" << moe.num <<endl;
	cout << "Name:" << moe.name <<endl;
	cout << "Sex:"<< moe.sex<<endl;
	cout << "Age:"<< moe.age<<endl; 
} 
