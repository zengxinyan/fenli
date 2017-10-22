#include <stdio.h>
int main(){
int x;
double y,z;
printf("请输入一个小数:");
scanf("%lf",z);
printf("这个小数是:%lf",z);
x=z;
y=z-x;
printf("%lf的整数部分是:%d,小数部分是:%lf\n",z,x,y);
return 0;
}
