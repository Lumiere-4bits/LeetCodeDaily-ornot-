#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string compressedString(string word) {
        string res = ""; //tạo 1 string rỗng chứa kết quả
        int cnt; //biến đếm số kí tự xuất hiện liên tiếp
        int n = word.size(); int i = 0;
        while(i < n){ //duyệt qua từng kí tự trong string word
            cnt = 0;    //khởi tạo cnt = 0
            char ch = word[i]; //lấy kí tự đầu tiên của string word
            while(i < n && ch == word[i] && cnt < 9){ 
                cnt++;
                i++;
            }
            res += ((char)cnt + '0'); 
            res += ch;
        }
        return res;
    }
};