class MinStack {
private:
	stack<int> s1; 
	stack<int> min;//����һ������ջ
public:
	/** initialize your data structure here. */
	MinStack() {
	}

	void push(int x) {
		s1.push(x);
		if (min.empty() || min.top() >= x) //�����СվΪ�ջ���ջ��
			min.push(x);                   //С��s1ջ������ջ
	}

	void pop() {
		if (s1.top() == min.top())//���ջ��Ԫ����ͬ��˵��ջ��Ϊ��Сֵ
		{                         //һ����ջ��СջҲӦ�ó�ջ
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