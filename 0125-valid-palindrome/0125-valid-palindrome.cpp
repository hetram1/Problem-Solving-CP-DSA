class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(),s.end(),[](char c){ return !isalnum(c);}),s.end());
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string r=s;
        reverse(r.begin(),r.end());
        return s==r;

    }
};