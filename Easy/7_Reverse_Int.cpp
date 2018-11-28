#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        if (x == 0 || x <= INT_MIN/10 || x >= INT_MAX/10){
            return 0;
        }else{
            int sign = 1;
            if (x < 0){
                sign = -1;
            }
            string s = to_string(x);
            string s_output;
            for (int i = s.size()-1; i > -1; --i){
                s_output += s[i];
            }
            int output = stol(s_output) * sign;
            if (output <= INT_MIN/10 || output >= INT_MAX/10){
                return 0;
            }
            return output;
        }
    }
};

//真的是要被leetcode的testcase给整哭了
//本来以为用INT—MAX或者INT—MIN应该就可以了
//tm又给我整出LONG_MIN和LONG_MAX之内的数字
//well，明天上午再看吧。。。

int main(){
    Solution obj;
    cout << obj.reverse(-2147483412) << endl;
}