#include<iostream>
#define Max 1000
using namespace std;
int main(){
	freopen("D:\\new\\msoinput.txt","r",stdin);
	int n;
	cin>>n;
	//n=1;
	while(n--){
		int v[Max],m,s;//s��¼�����֮ǰ�����������ͣ�m��¼ �����֮ǰ������������
		int i=0;
		cin>>v[i];
		m=v[0],s=v[0];
		cin>>v[++i];
		while (v[i]!=-11111){
			s+=v[i];
			s=(s>v[i])?s:v[i];
			m=(m>s)?m:s;
			cin>>v[++i];
		} 
		cout<<m<<endl;
	
	}
}