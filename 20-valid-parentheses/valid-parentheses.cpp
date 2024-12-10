class Solution {
public:
    bool isValid(string s) {
        vector<char> charStack;

        for (int i = 0; i < s.length(); i++) {
            if (charStack.empty()==true && (s[i]==')' || s[i]==']' || s[i]=='}'))
                return false;
            else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                charStack.push_back(s[i]);
            else if (s[i] == ')') {
                if (charStack[charStack.size()-1] == '(')
                    charStack.pop_back();
                else
                    return false;
            }   
            else if (s[i] == ']') {
                if (charStack[charStack.size()-1] == '[')
                    charStack.pop_back();
                else
                    return false;
            }  
            else if (s[i] == '}') {
                if (charStack[charStack.size()-1] == '{')
                    charStack.pop_back();
                else
                    return false;
            }
        }
        if (charStack.empty())
            return true;
        else
            return false;
    }
};