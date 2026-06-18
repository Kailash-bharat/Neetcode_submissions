class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto &ch:s){
            switch(ch){
                case ']':{
                    if(st.empty() || st.top()!='[') return false;
                    st.pop();
                    break;
                }
                case '}':{
                    if(st.empty() || st.top()!='{') return false;
                    st.pop();
                    break;
                }
                case ')':{
                    if(st.empty() || st.top()!='(') return false;
                    st.pop();
                    break;
                }
                default: st.push(ch);
            }
        }

        if(st.empty()) return true;
        return false;
    }
};
