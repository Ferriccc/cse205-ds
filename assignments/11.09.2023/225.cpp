class MyStack {
public:
    using int2 = pair<int, int>;
    priority_queue<int2> pq;
    int counter = 0;
    MyStack() {
    }

    void push(int x) {
        pq.push({counter++, x});
    }

    int pop() {
        int x = pq.top().second;
        counter--;
        pq.pop();
        return x;
    }

    int top() {
        return pq.top().second;
    }

    bool empty() {
        return pq.empty();
    }
};
