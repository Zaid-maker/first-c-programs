#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a, b, c, s, Area;
a = 45;
b = 44;
c = 35;
s = (a+b+c)/2;
Area = sqrt(s * (s-a)*(s-b)*(s-c));
printf("Area of Triangle =%f", Area);
getch();
}