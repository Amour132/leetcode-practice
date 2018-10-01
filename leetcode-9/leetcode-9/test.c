#include <stdio.h>
#pragma warning(disable:4996)


_Bool isPalindrome(int x) 
{
	int y = x;
	if (x < 0)
	{
		return 0;
	}
	else if (x == 0)
	{
		return 1;
	}
	else
	{
		int ret = 0;
		while (1)
		{
			int i = x % 10;
			ret = ret * 10 + i;
			x = x / 10;
			if (x == 0)
			{
				break;
			}
		}
		if (ret == y)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int x = 0;
	while (1)
	{
		scanf("%d", &x);
		printf("%d\n",isPalindrome(x));
	}


}