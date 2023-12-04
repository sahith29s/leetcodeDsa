void getMinimum(stack<int> *s, int &min)
{
    if (s->empty())
    {
        return;
    }

    int top = s->top();
    if (top < min)
    {
        min = top;
    }
    
    s->pop();
    getMinimum(s , min);
    s->push(top);
}

class MinStack {
public:
    stack<int> *s = new stack<int>;

    MinStack() {
    }
    
    void push(int val) {
        s->push(val);
    }
    
    void pop() {
        if(!s->empty())
            s->pop();
    }
    
    int top() {
        return s->top();
    }
    
    int getMin() {
        int min = INT32_MAX;
        getMinimum(s , min);
        return min;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
