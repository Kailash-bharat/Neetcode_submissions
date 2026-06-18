class MinStack {
private:
    vector<int> st;
    int pos;

public:
    MinStack() {
        pos=-1;
    }
    
    void push(int val) {
        st.push_back(val);
        pos++;
        return;
    }
    
    void pop() {
        if(pos>-1){
            st.pop_back();
            pos--;
        }
        return;
    }
    
    int top() {
        return st[pos];
    }
    
    int getMin() {
        int mini=INT_MAX;
        for(auto&i:st){
            mini=min(mini,i);
        }
        return mini;
    }
};
