#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle){
        int j=0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[j]){
                j++;
                if(j==needle.size()){
                    return i-j+1;
                
                }     
            }
            else{
                i=i-j;
                j=0;     
            }
        }
        return -1;
    }
};
int main(){
	string haystack ;
	string needle  ;

	Solution mysol;
	
    cout<<"please enter the haystack  "<<endl;
	cin>>haystack ;
	
	cout<<"please enter the needle   "<<endl;
	cin>>needle  ;
	
	cout<<"index of the first occurrence "<<endl;
    cout<<mysol.strStr(haystack,needle)<<endl;
	
	system("pause");
	return 0;
}