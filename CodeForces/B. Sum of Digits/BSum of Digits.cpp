#include <iostream>
#include<string>
using namespace std;

int main() {
	 string spell;
	 cin>>spell;
	 int counter=0;
	 int len=spell.length();
	while(len>1){
		int sum=0;
		for(int i=0;i<len;i++){
			sum+=spell[i]-'0';
		}
		 spell=to_string(sum);
         len=spell.length();
         ++counter;
	 }
	 cout<<counter;
	return 0;
}
