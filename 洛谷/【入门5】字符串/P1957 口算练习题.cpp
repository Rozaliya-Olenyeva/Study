#include<bits/stdc++.h>
using namespace std;
int n,a,b;
string c;
char l_c;
int len(int number)
{
	int x=0;
	if(number==0)
		return 1;
	if(number>0)
		while(number){
			number/=10;
			++x;
		}
	if(number<0){
		x=1;
		number=-number;
		while(number){
			number/=10;
			++x;
		}
	}
	return x;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>c;
		int x;
		switch(c[0]){
			case 'a': cin>>a>>b;
				printf("%d+%d=%d\n",a,b,a+b);x=len(a+b)+2;
				l_c=c[0];break;
			case 'b': cin>>a>>b;
				printf("%d-%d=%d\n",a,b,a-b);x=len(a-b)+2;
				l_c=c[0];break;
			case 'c': cin>>a>>b;
				printf("%d*%d=%d\n",a,b,a*b);x=len(a*b)+2;
				l_c=c[0];break;
			default:
				cin>>b;
				a=0;
				int l=c.size();
				for(int i=0;i<l;++i)
					a=a*10+c[i]-'0';
				switch(l_c)	{
					case 'a':
						printf("%d+%d=%d\n",a,b,a+b);x=len(a+b)+2;break;
					case 'b':
						printf("%d-%d=%d\n",a,b,a-b);x=len(a-b)+2;break;
					case 'c':
						printf("%d*%d=%d\n",a,b,a*b);x=len(a*b)+2;break;
					default:break;
				}	
				break;
		}
		x=len(a)+len(b)+x;
		printf("%d\n",x);
	}
	return 0;
}
