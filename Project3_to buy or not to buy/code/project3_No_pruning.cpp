#include<iostream>
#include<vector>
#include <time.h>
#include <fstream>
using namespace std;
int goal[256];//Target bead (string)
string select_input[10001];//Beads from the shop
string goal_string;//Target bead (string)
int select_length;//The length of the target bead
int ans_size=0xfffff;//The final number of extra beads needed 
int ans_temp=0;
int judge=1;
int finish=0;
int loss_judge=1;
int loss_num=0;//The number of missing beads
vector<int>ans_num;
void dfs(int index){
	if(index==select_length+1){
		//reache the last string of beads. return
		if(finish==0&&loss_judge==1){
			loss_judge=0;
			for(int i=0;i<256;i++){
				if(goal[i]>0){
					loss_num+=goal[i];
				}
			}
		}
		return;
	}
	judge=1;
	for(int i=0;i<256;i++){//Determine whether the target bead string has been assembled
		if(goal[i]>0){
			judge=0;
		}
	}
	if(judge==1&&ans_temp<ans_size){
		//If it's already done, and the number of beads needded is less than last time,
		//Reset ans_size
		ans_size=ans_temp;
		finish=1;
	}
	for(int i=0;i<select_input[index].length();i++){
		//Traverse the current bead string 
		//and reduce the corresponding number of the target bead string
		int temp=select_input[index][i];
		if(goal[temp]<=0){
			ans_temp++;
		}
		goal[temp]--;
	}
	ans_num.push_back(index); 
	dfs(index+1);//Search for the next bead string
	for(int i=0;i<select_input[index].length();i++){
		//Traverse the current bead string 
		//and add the corresponding number of the target bead string
		int temp=select_input[index][i];
		if(goal[temp]<0){
			ans_temp--;
		}
		goal[temp]++;
	}
	ans_num.pop_back(); 
	dfs(index+1);//Search for the next bead string
}
int main(){
	clock_t start,finish;
    start=clock();
	cin>>goal_string>>select_length;
	for(int i=0;i<goal_string.length();i++){
		goal[goal_string[i]]++;//input the target bead string
	}
	
	for(int i=0;i<select_length;i++){
		cin>>select_input[i];//input the bead strings in the shop
	}
	dfs(0);//Conduct the search
	if(ans_size<0xfffff){
		//If we can get the beads we need
		cout<<"Yes"<<" ";
		cout<<ans_size<<endl;
	}
	else{
		//If we can't get the beads we need
		cout<<"No"<<" ";
		cout<<loss_num<<endl;
	}
	finish=clock();
    //cout<<endl<<"the time cost is:" << double(finish - start) / CLOCKS_PER_SEC<<endl;

    return 0;
}
