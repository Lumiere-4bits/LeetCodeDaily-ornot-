#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        // nếu chiều dài 2 string khác nhau trả về false
        if(s.length() != goal.length()) return false;
        int n = s.length();
        string tmp = s; // tạm thời lưu string s
        for(int i = 0 ; i < n ; i++){
            if(tmp == goal) return true; // nếu 2 string = nhau -> return true
            char ch = tmp[0]; // lấy ký tự đầu tiên của string s
            tmp.erase(0,1); // xóa đi phần tử đầu tiên của string s
            tmp.push_back(ch); // gắn vào cuối string s
        }
        return false;
    }
};