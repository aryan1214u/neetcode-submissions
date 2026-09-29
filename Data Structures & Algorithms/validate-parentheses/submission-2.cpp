class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char> st ;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                i++ ;
            }
            else {
                if(st.empty()) return false;
                if(s[i]==')' && st.top()=='('){
                    st.pop();
                    
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                    
                }
                else if(s[i]=='}' && st.top()=='{'){
                    st.pop() ;
                    
                }
                else return false;
                i++;
                
            }
        }
        if(st.size()==0) return true ;
        else return false ;
    }
};
