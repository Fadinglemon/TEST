#include<iostream>
#define Max 1000
using namespace std;
int main(){
	freopen("D:\\new\\msoinput.txt","r",stdin);
	int n;
	cin>>n;
	//n=1;
	while(n--){
		int v[Max],m,s;
		int i=1,j;
		cin>>v[0];
		s=v[0];
		while(v[i-1]!=-11111){
			cin>>v[i++];
			m=0;
			for(j=i;j>0;){
				m+=v[--j];
				if(s<m)s=m;
			}
		}
		cout<<s<<endl;
	//	for(i=0;i<5;i++)cout<<v[i]<<' ';
	}
}