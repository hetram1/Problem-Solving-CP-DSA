class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,int>m;
        int c=0;
        for(int i=0;i<key.size();i++){
            if(key[i]!=' ' && m.find(key[i])==m.end()){
                m[key[i]]=c++;
            }
        }
        string r="";
        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                r+=" ";
            }
            else{
                int a=m[message[i]];
                char b='a'+a;
                r+=b;
            }
        }
        return r;
    }
};