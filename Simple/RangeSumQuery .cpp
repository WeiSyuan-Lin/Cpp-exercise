#include<iostream>
#include<vector>
using namespace std;
class NumArray {
vector<int>arr;
public:
    
    NumArray(vector<int>& nums) {
        arr=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
};

int main(){
	vector<int>nums={-2,0,3,-5,2,-1};
	NumArray numArray(nums);
	
	cout<<numArray.sumRange(0, 2)<<endl; // return (-2) + 0 + 3 = 1
	cout<<numArray.sumRange(2, 5)<<endl; // return 3 + (-5) + 2 + (-1) = -1
	cout<<numArray.sumRange(0, 5)<<endl;
	return 0;
}
