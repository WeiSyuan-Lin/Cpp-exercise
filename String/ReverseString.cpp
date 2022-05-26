#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++, j--;
        }
    }
};
int main(){
	
	vector<char> test;
	char word;

	Solution mysol;
	
	cout<<"please enter the words, if finished, enter 0  "<<endl;
	while(cin>>word and word!= '0'){
	      test.push_back(word);
	}
   	
	cout<<"Reverse String is "<<endl;
	
	mysol.reverseString(test);
	for(int i=0;i<test.size();i++){
		cout<<test[i]<<endl;
	}
	
 
	system("pause");
	return 0;
}