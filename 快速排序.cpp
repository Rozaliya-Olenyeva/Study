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

//�������� 
void QuickSort(vector<int> &nums,int left,int right)
{
	if(left>=right)
	return;
	int i=left,j=right,base=nums[left];
	while(i<j)
	{
		while(nums[j]>=base&&i<j)j--;
		while(nums[i]<=base&&i<j)i++;
		
		if(i<j){
			swap(nums[i],nums[j]);
		}
	}
	nums[left] = nums[i];
	nums[i] = base;
	QuickSort(nums,left,i-1);
	QuickSort(nums,i+1,right);
}
//�������� 

int main()
{
	int k;
	cout<<"�����Ҫ��������ɵĸ�����";
	cin >> k;
	cout<<"--------------------------------"<<endl;
	vector<int> a=randm(k) ;
	for(auto i:a){
		cout <<i<<"\t";
	}
	cout<<endl<<"--------------------------------"<<endl;
	QuickSort(a,0,a.size()-1);
	for(auto i:a){
		cout << i <<"\t";
	}
	return 0;
}
