#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> obj={11,32,24,67,99,55,50};
	cout << "Ԫ�ظ�����"<<obj.size() << endl;;
	sort(obj.begin(),obj.end());
	cout << endl << "------------ֱ�����------------" << endl << endl;
	for(int i=0;i<obj.size();i++){
		cout <<obj[i] << " ";
	}
	cout << endl << "------------�õ�����------------" << endl << endl;
	vector<int>::iterator it;
	for(it=obj.begin();it!=obj.end();it++){
		cout << *it << " ";
	} 
	cout << endl << "------------��תԪ��------------" << endl << endl;
	reverse(obj.begin(),obj.end());
	for(int i=0;i<obj.size();i++){
		cout << obj[i] <<" ";
	}
	cout << endl << "------------���Ԫ��------------" << endl << endl;
	obj.clear();//�����������������
	for(int i=0;i<obj.size();i++)
	{
        cout<<obj[i]<<endl;
    }
    cout << "Ԫ�ظ�����"<<obj.size();
    cout << endl << "------------˳��Ԫ��------------" << endl << endl;
    for(int i=0;i<0;i++)
    {
    	obj.push_back(i);
	}
	for(it=obj.begin();it!=obj.end();it++)
	{
		
	}
}




//bool moe(int a , int b){
//	return a<b;
//}
//int main(){
//	vector <int> obj;
//	for(int i=0;i<10;i++)
//	{
//		obj.push_back(i);
//		cout << obj[i]   << ",";
//	}
//	for(int i=0;i<5;i++)
//	{
//		obj.pop_back();
//	}
//	cout << endl;
//	cout << obj.size();
//	cout << endl;
//	for(int i=0;i<obj.size();i++)
//	{
//		cout << obj[i]<< ",";
//	}
//	cout << endl;
//	
////	obj.clear();
////    for(int i=0;i<obj.size();i++)
////	{
////        cout<<obj[i]<<endl;
////    }
//	reverse(obj.begin(),obj.end());
//	cout <<"---------------------����--------------------"<<endl; 
//	for(int i=0;i<obj.size();i++)
//    {
//        cout<<obj[i]<<",";
//    }
//    cout << endl;
//    cout <<"---------------------����--------------------"<<endl; 
//    sort(obj.begin(),obj.end(),moe); 
//    	for(int i=0;i<obj.size();i++)
//    {
//        cout<<obj[i]<<",";
//    }
//    cout <<endl<<"---------------------����--------------------"<<endl; 
//    vector <int>::iterator it;
//    for(it=obj.begin();it!=obj.end();it++)
//    {
//    	cout << *it << " ";
//	}
//	return 0;
//}
