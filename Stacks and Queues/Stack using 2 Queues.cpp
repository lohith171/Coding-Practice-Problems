//https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q1,q2;
    MyStack() {
        while(!q1.empty()){
            q1.pop();
        }
        while(!q2.empty())q2.pop();
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int k=-1;
        while(!q1.empty()){
            if(q1.size()!=1){
                q2.push(q1.front());
            }else{
                k=q1.front();
            }
            q1.pop();
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return k;
    }
    
    /** Get the top element. */
    int top() {
         int k=-1;
        while(!q1.empty()){
           if(q1.size()==1)k=q1.front();
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return k;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
