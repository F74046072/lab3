#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include"Clock.h"
using namespace std;

void insertion_sort(vector<int>&v){
	int insert,moveItem;
	for(int next=1;next<v.size();next++){
		insert=v.at(next);
		moveItem=next;
		while((moveItem>0)&&(v.at(moveItem-1)>insert)){
			v.at(moveItem)=v.at(moveItem-1);
			moveItem--;
		}
		v.at(moveItem)=insert;
	} 
}

int main()
{
		Clock clk;
		const int size=100000;
		vector<int>v1(size),v2;		
		srandom(time(NULL)); //Linux環境才可用 
		for(int i=0;i<size;i++) v1.at(i)=random();
		v2=v1;
		cout<<"size:"<<size<<" sorting..."<<endl;
		
		cout<<"sort()..."<<endl;
		clk.start();
		sort(v1.begin(),v1.end());
		cout<<"sort():"<<clk.getElapsedTime()<<"seconds"<<endl;
		cout<<"v1/v2 are "<<((v1==v2)?"the same\n":"different\n");
		
		cout<<"insertion_sort()..."<<endl;
		clk.start();
		insertion_sort(v2);
		cout<<"insertion_sort():"<<clk.getElapsedTime()<<"seconds"<<endl;
		cout<<"v1/v2 are "<<((v1==v2)?"the same\n":"different\n");	
		
		return 0;
}

