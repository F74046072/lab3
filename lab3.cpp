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
	vector<int>vec(num); //決定vector長度 
	
	for(int i=0,weight;i<num;i++){ //存入vector
		Read>>vec[i];
	}
	sort(vec.begin(),vec.end()); //排序 
	int topSum=0;
	for(int i=0;i<5;i++){ //將後5個加總起來(小排到大)
		topSum=topSum+vec.at((num-1)-i);
	}
	cout<<topSum<<endl;
}

