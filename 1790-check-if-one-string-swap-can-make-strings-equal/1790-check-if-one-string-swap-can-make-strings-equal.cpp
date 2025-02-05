class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                c++;
            }
        }
        if(s1.size()<3 && c==1){
            return false;
        }
        if(c<3){
            return true;
        }
        return false;
    }
};