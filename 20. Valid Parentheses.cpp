class Solution {
    public:
        bool isValid(string s) {
            stack<char> check;
            for(int i=0; i<s.length(); i++)
            {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    check.push(s[i]);
                    continue;
                }
                else if(check.size()==0) return false;
                else if((s[i] == ')' && check.top() != '(')
                        || (s[i] == '}' && check.top() != '{')
                        || (s[i] == ']' && check.top() != '[')
                        )
                {
                        return false;
                }
                check.pop();
            }
            if(check.size()!=0) return false;
            return true;
        }
    };