#include <stdio.h>
#include <math.h>

typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, int len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);
void show_double(double x);