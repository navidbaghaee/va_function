#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void test_func(uint count,uint arg2,...);

int main()
{
    test_func(5,10,15,35,45,17);
    return 0;
}
void test_func(uint count,uint arg2,...)
{
   uint temp = arg2;
   va_list parg;
   va_start(parg,arg2);
   while(count != 0)
   {
     printf("ARG = %d\r\n",temp);  
     temp = va_arg(parg,uint);
     count--;
   }
    va_end(parg);
}