#include<stdio.h>
#include<iostream>
using namespace std;
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

float sum_elements(float a[], unsigned length);

void psum1(float a[], float p[], long int n);
void psum2(float a[], float p[], long int n);
