#include<iostream>
using namespace std;
int i= 1; //i Ϊȫ�ֱ��������о�̬������
void other(){
	static int a =2;
	static int b ;
	//a,bΪ��̬�ֲ�����������ȫ���������ֲ��ɼ���
	//ֻ��һ�ν��뺯��ʱ����ʼ��
	int c = 10 ; //CΪ�ֲ����������ж�̬������
	//ÿ�ν��뺯��ʱ�����ʼ������ c��
	a += 2;
	i += 32;
	c += 5;
	cout << "-----Other-----\n";
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	cout << endl;
	b =a;
} 
int main(){
	static int a;// ��̬�ֲ����� ����ȫ���������ֲ��ɼ���
	int b = -10; //b,c Ϊ�ֲ����������ж�̬�����ڡ�
	int c =0;
	cout << "-----Main-----" << endl;
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	c += 8; other();
	cout << "-----Main2-----" << endl;
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c <<endl;
	i +=10 ; other();
	return 0;
	
}
