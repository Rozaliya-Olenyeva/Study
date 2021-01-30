#include<iostream> 
#include<string> 
using namespace std;
class examinfo{
	private:
		string name;//�γ��ǳ�
		enum{
			sgrade,spass,spercentage
		}mode; 
		union{
			char grade;//�ȼ��Ƶĳɼ�
			bool pass; //����Ƿ�ͨ��
			int percent; //�ٷ��Ƶĳɼ� 
		};
		public:
			//���ֹ��캯�����ֱ��õȼ����Ƿ�ȹ��Ͱٷֱȳ�ʼ��
			 examinfo(string name,char grade)
			 :name(name),mode(sgrade),grade(grade){
			 }
			 examinfo(string name,bool pass)
			 :name(name),mode(spass),pass(pass){
			 }
			 examinfo(string name,int percent)
			 :name(name),mode(spercentage),percent(percent){
			 }
			 void show();
};
void examinfo::show(){
	cout << name <<":";
	switch (mode){
		case sgrade: cout << grade;break;
		case spass : cout << (pass ? "Pass":"Fail");break;
		case spercentage : cout << percent;break;
	}
	cout <<endl;
	
}
int main(){
	examinfo course1("English",'B');
	examinfo course2("Calculus",true);
	examinfo course3("C++ Programming",85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}
