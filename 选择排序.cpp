#include<bits/stdc++.h>
using namespace std;
//��������� 
vector<int>randm(int n){
	vector<int> a;
	srand((int)time(NULL));
	for(int i=0;i<n;i++){
		a.push_back(rand()%(10000+1));
	}
	return a;
}
//��������� 

//ð������
vector<int> maopao(vector<int> &y){
	vector<int>nums;
	nums.assign(y.begin(),y.end());
	for(int i =0;i<nums.size();i++){
		for(int j=0;j<nums.size()-1-i;j++){
			if(nums[j]>nums[j+1]){
				int t=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=t;
			}
		}
	} 
	return nums;
}
//ð������

//ѡ������ 
vector <int> xuanze(vector<int> &nums)
{
	vector<int>obj;
	obj.assign(nums.begin(),nums.end());
	for(int i=0;i<obj.size();i++)
	{
		int mix_cur;
		for(int j=mix_cur+1;j<obj.size();j++)
		{
			if(obj[j]<obj[mix_cur])
			{
				mix_cur=j;
			}
		}
		int temp=obj[i];
		obj[i]=obj[mix_cur];
		obj[mix_cur]=temp;
	}
}
//ѡ������
 
int main(){
	vector<int> b;
	int k;
	cout<< "�����Ҫ���ɵ����������:"; 
	cin >> k;
	cout<< endl<<"--------------------------------"<<endl;
	b=randm(k);
	
	//�������� 
	for(auto i:b)
	{
		cout << i << "\t";
	}
	//��������
	
	// ð������
	cout<<endl<< endl<<"--------------ð��--------------"<<endl;
	vector<int> c = maopao(b);
	for(auto i :c){
		cout << i <<"\t";
	}
	cout<< endl<<"--------------ð��--------------"<<endl<<endl;
	// ð������ 
	
	// ѡ������
	cout<<endl<< endl<<"--------------ѡ��--------------"<<endl;
	vector<int> d = maopao(b);
	for(auto i :d){
		cout << i <<"\t";
	}
	cout<< endl<<"--------------ѡ��--------------"<<endl<<endl;
	// ѡ������ 
	return 0;
}
