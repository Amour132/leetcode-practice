class MinStack {
private:
	stack<int> s1; 
	stack<int> min;//创建一个辅助栈
public:
	/** initialize your data structure here. */
	MinStack() {
	}

	void push(int x) {
		s1.push(x);
		if (min.empty() || min.top() >= x) //如果最小站为空或者栈顶
			min.push(x);                   //小于s1栈顶则入栈
	}

	void pop() {
		if (s1.top() == min.top())//如果栈顶元素相同则说明栈顶为最小值
		{                         //一旦出栈最小栈也应该出栈
			s1.pop();
			min.pop();
		}
		else
		{
			s1.pop();
		}
	}

	int top() {
		return s1.top();

	}

	int getMin() {
		return min.top();
	}
};

/**
* Your MinStack object will be instantiated and called as such:
* MinStack obj = new MinStack();
* obj.push(x);
* obj.pop();
* int param_3 = obj.top();
* int param_4 = obj.getMin();
*/