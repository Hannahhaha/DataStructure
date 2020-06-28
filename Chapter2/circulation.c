
 # include"stdio.h"
 int main()
 {
	int i, sum = 0, n=101; //把sum初始定义为0
	for (i = 1; i <  n; i++)//遍历1到100,把所有和相加保存到sum
	 {
		sum = sum + i;
	 }
	printf("%d", sum);//输出sum的值
	return 0;
 }

