#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*
class Solution{


public:
	string longestCommonPerfix(vector<string> &strs){
		int i,j;
		bool flag;
		int min = 0;
		vector<string>::iterator it;
		for(it=strs.begin();it!=strs.end();it++){
			if(min > it.size())
				min = it.size();
		}
		
	
			
		
		
	}		
};
*/
int main(){
	vector<string> strs;
	string s = "dhjskadhsa";
	strs.push_back(s);
	cout<<strs[0]<<endl;
	cout<<strs[0].length()<<endl;
	cout<<s[1]<<endl;
	cout<<strs[0][1]<<endl;
	return 0;
}
