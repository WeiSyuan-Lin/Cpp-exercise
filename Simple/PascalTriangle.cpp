#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows<1) return res;
        vector<int> row(1,1);
        res.push_back(row);
        
        for(int i=2; i<=numRows; i++) {
            int prev = 1;
            for(int j=1; j<i-1; j++) {
                int temp = row[j];
                row[j] += prev;
                prev = temp;
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res;
    }
};

int main(){
	
	int input;
	
	vector<vector<int>> ans;
	Solution mysol;
	
	cout<<"enter the number of row"<<endl;
	cin>>input;
	
	ans=mysol.generate(input);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			
		cout<<ans[i][j];
		
		if(j==ans[i].size()-1){
			cout<<endl;
			}
		}
	}
	
	system("pause");
	return 0;
}