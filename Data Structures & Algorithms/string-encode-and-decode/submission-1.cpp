#include<bits/stdc++.h>

class Solution {
public:

    string encode(vector<string>& strs) 
    {

        string ans = "";

        for(string str:strs)
        {
            ans.append(to_string(str.size()));
            ans.push_back('#');
            ans.append(str);
        }

        return ans;

    }

    vector<string> decode(string s) 
    {
        vector<string> res;
        int i = 0 , j;

        while(i < s.size())
        {
            j = i;

            while(s[j] != '#')
            {
                j++;
            }

            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            res.push_back(word);
            i = j+1+len;
        }

        return res;
    }
};
