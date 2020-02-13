class Solution {
public:
    string reverseWords(string s) {
        string out;
        string strout;
        stack< string > sta;
        int index=0;
        for (int index = 0; index < s.size(); index++)
            {
                if(s[index]!=' ')
                {
                    out.push_back(s[index]);
                }
                else
                {
                    if(out.size()!=0)
                    {
                    sta.push(out);
                    out.clear();
                    }
                }
                
            }
            if(out.size()!=0)
            {
                sta.push(out);
                out.clear();
            }
        while (sta.size() > 0) {
            if (sta.size() != 1) {
                strout += sta.top();
                strout += " ";
                sta.pop();
            } else if (sta.size() == 1) {
                strout += sta.top();
                sta.pop();
            }
        }
        return strout;
    }
};
