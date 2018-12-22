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