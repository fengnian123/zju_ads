#include <iostream>
#include <vector>
#include <map>
#include <string>
#include<algorithm>
#include <thread>
#include <chrono>
#include<map>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){
	ofstream oFile;
	oFile.open("rand_test.txt",ios::out);//Open the rand_test.txt for writing
	cout<<"please input the times of tests: ";
	int times;
	cin>>times;//input the number of tests 
	oFile<<times;
	oFile<<endl;
	cout<<"please input the number of beads in the shop: ";
	int num;
	cin>>num;//input the number of beads in the shop in every test
	srand((unsigned)time(NULL));
	for(int ii=0;ii<times;ii++){
		int input_length=rand()%1000+1;//Generate a random bead length(1~1000)
		for(int i=0;i<input_length;i++){
			int type=rand()%3;//Generate a random number to determine the type of character
			int rand_char;
			if(type==0){//Generated number
				rand_char=(rand() % (90-65+1))+ 65;
			}
			else if(type==1){//Generate lowercase letters
				rand_char=(rand() % (57-48+1))+ 48;
			}
			else if(type==2){//Generate capital letters
				rand_char=(rand() % (122-97+1))+ 97;
			}
			oFile<<char(rand_char); 
			cout<<char(rand_char);
		}
		oFile<<endl;
		cout<<endl;
		oFile<<num<<endl;
		cout<<num<<endl;
		for(int i=0;i<num;i++){
			int string_length=rand()%1000+1;//Generate a random bead length(1~1000)
			for(int j=0;j<string_length;j++){
				int type=rand()%3;//Generate a random number to determine the type of character
				int rand_char;
				if(type==0){//Generated number
					rand_char=(rand() % (90-65+1))+ 65;
				}
				else if(type==1){//Generate lowercase letters
					rand_char=(rand() % (57-48+1))+ 48;
				}
				else if(type==2){//Generate capital letters
					rand_char=(rand() % (122-97+1))+ 97;
				}
				oFile<<char(rand_char); 
				cout<<char(rand_char); 
			}
			oFile<<endl;
			cout<<endl;
		}
	}
	cout<<endl;
	oFile<<endl;
	oFile.close();
}
