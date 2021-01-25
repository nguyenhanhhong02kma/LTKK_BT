//Bai27_ Ham trong C//
//Ham nguuoi dung dinh nghia//
/*cach khai bao ham:
<kieu du lieu>  <ten ham>  (<cac tham so>)
{
//than ham
return <value>;
Eg:
int hamtong(int a, int b)
{
int hamtong= a+b;
return hamtong;
} */
// viet ctrinh may tinh bo tui//
#include<stdio.h>
int hamtong (int a, int b)
{
	int hamtong = a+b;
	return hamtong;
}
int hieu(int a, int b)
{
	return a-b;
}
int main()
{
int a=7, b=5;
printf("\n%d+%d=%d", a,b, hamtong(a,b));
printf("\n%d+%d=%d", a,b, a-b);
}


