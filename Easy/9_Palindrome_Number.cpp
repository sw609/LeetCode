#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        string s_x = to_string(x);
        string re_s_x;
        
        for (int i = s_x.size()-1; i > -1; --i){
            re_s_x += s_x[i];
        }
        
        return re_s_x == s_x;
        
    }
};

int main(){
    Solution obj;
    cout << obj.isPalindrome(121) << endl;
}