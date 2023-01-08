#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1="he was born in 12-01-2002 and 12-02-2010",ans="",s2="";
	int n=s1.length(),t=0;
	for(int i=0; i<n; i++){
		if(s1[i+2]=='-'&&s1[i+5]=='-'){
			int k=i;
			t=i;
			for(int j=0;j<10;j++){
				ans+=s1[k];
				k++;
			}
			break;
		}
	}
	for(int i=t+10; i<n; i++){
		if(s1[i+2]=='-'&&s1[i+5]=='-'){
			int k=i;
			for(int j=0; j<10; j++){
				s2+=s1[k];
				k++;
			}
		}
	}
	char a,b;
	int x=0,y=0;
	for(int i=0; i<ans.length();i++){
		if(i>2&&i<5){
			a=ans[i];
			x=x*10+(a-'0');
		}
		else if (i>5){
			b=ans[i];
			y=y*10+(b-'0');
		}
	}
	char c,d;
	int h=0,s=0;
	for(int i=0; i<s2.length();i++){
		if(i>2&&i<5){
			c=s2[i];
			h=h*10+(c-'0');
		}
		else if (i>5){
			d=s2[i];
			s=s*10+(d-'0');
		}
	}
	int diff=0;
	if(h>x){
		diff=1;
	}
	diff+=(s-y);
	cout<<diff;
	return 0;
}
