#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
char A,B,C;
int main()
{
    cin>>a[0]>>a[1]>>a[2];
    cin>>A>>B>>C;
    sort(a,a+3);//����_(:�١���)_����
    cout<<a[A-'A']<<" "<<a[B-'A']<<" "<<a[C-'A'];//��ĸ�Ǵ�д����ȥ��A����õ�0��A��,1��B��,2��C����
    return 0;
}
