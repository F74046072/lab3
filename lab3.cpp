#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ifstream Read("file.in",ios::in);
	if(!Read){
		cerr<<"fail to read"<<endl;
		exit(1);
	}
	int num;
	Read>>num;
	vector<int>vec(num); //�M�wvector���� 
	
	for(int i=0,weight;i<num;i++){ //�s�Jvector
		Read>>vec[i];
	}
	sort(vec.begin(),vec.end()); //�Ƨ� 
	int topSum=0;
	for(int i=0;i<5;i++){ //�N��5�ӥ[�`�_��(�p�ƨ�j)
		topSum=topSum+vec.at((num-1)-i);
	}
	cout<<topSum<<endl;
}

