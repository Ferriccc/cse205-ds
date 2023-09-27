class MinStack {
    stack<long long> st;
    long long minEle;

public:
    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minEle = val;
        } else if (val < minEle) {
            st.push((long long)2 * val - minEle);
            minEle = val;
        } else {
            st.push(val);
        }
    }

    void pop() {
        long long popped = st.top();
        st.pop();
        if (popped < minEle)
            minEle = 2 * minEle - popped;
    }

    int top() {
        return (st.top() < minEle) ? minEle : st.top();
    }

    int getMin() {
        return minEle;
    }
};
