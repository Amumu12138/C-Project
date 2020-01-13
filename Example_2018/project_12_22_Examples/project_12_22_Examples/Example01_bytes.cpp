#include"Example01_bytes.h"
//打印十六进制字节
void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("0x%.2x", start[i]);
		printf("\t");
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes(byte_pointer(&x), sizeof(x));
}
void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(x));
}
void show_pointer(void *x)
{
	show_bytes(byte_pointer(&x), sizeof(void *));
}
/*
	*练习题2.25 计算数组a中所有元素的和，其中元素的数量由参数length给出
*/
float sum_elements(float a[], unsigned length)
{
	int i;
	float result = 0;
	printf("length - 1 = %d", length - 1);		//length - 1 = -1,%d输出仍为有符号整型

	for (i = 0; i <= length - 1; i++)			//length - 1 = Umax
		result += a[i];
	return result;
}

/* 前置和函数*/
/* Computer prefix sum of vextor a*/
void psum1(float a[],float p[], long int n){
	long int i;
	p[0] = a[0];
	for (i = 1; i < n; i++)
		p[i] = p[i - 1] + a[i];
}

void psum2(float a[], float p[], long int n){
	long int i;
	p[0] = a[0];
	for (i = 1; i < n - 1; i += 2){
		float mid_val = p[i - 1] + a[i];
		p[i] = mid_val;
		p[i + 1] = mid_val + a[i + 1];
	}
	/* for odd n, finish remaining element*/
	if (i < n) p[i] = p[i + 1] + a[i];
}
	
/*
* 指针完成值交换
*/
int exchange_test(int *xp, int y) {
	int x = *xp;
	*xp = y;
	return x;
}