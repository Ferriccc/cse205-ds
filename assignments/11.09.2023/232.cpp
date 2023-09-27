class MyQueue {
    stack<int> st1, st2;

public:
    MyQueue() {
    }

    void push(int x) {
        for (int i = 0; !st1.empty(); i++) {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        for (int i = 0; !st2.empty(); i++) {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop() {
        int x = st1.top();
        st1.pop();
        return x;
    }

    int peek() {
        return st1.top();
    }

    bool empty() {
        return st1.empty();
    }
};
