#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buy=10001;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]) buy=prices[i];
            if(maxprofit<(prices[i]-buy)) maxprofit=(prices[i]-buy);
        
        }
        return maxprofit;
    }
};

int main(){
	vector<int> nums;//{0,1,2,4,5,6}
	int input;
	
	Solution mysol;
	cout<<"please enter the prices, if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums.push_back(input);
	}
	
	cout<<"the max profit is"<<endl;
	cout<<mysol.maxProfit(nums)<<endl;
	
	system("pause");
	return 0;
}