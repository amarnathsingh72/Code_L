class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int n=strs.size()-1;
        string last=strs[n];
        string res="";
// pehele hum string ko sort karte
        for (int i=0;i<first.length() && i<last.length();i++){
            if(first[i]==last[i]){
                res=res+first[i];
            }
            else{
                break;
            }
        } 
        return res;
    }
};