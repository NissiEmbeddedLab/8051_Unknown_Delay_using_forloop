#include<reg51.h>
unsigned int x;
void main(void)
{
 for(;;)
 { 
 P1 = 0x55;
 for(x=0;x<40000;x++);
 P1 = 0xAA;
 for(x=0;x<40000;x++);
 }
}