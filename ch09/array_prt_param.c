#include <stdlib.h>
void my_array_func(char ca[10]);
void my_pointer_func(char *pa);

int main(int argc, char const *argv[])
{
  char ga[] = "abcdefghijklm";
  printf(" size of global array = %d \n", sizeof(ga));
  printf(" addr of global array = %#x \n", &ga);
  printf(" addr of (ga[0]) param = %#x \n", &(ga[0]));
  printf(" addr of (ga[1]) param = %#x \n\n", &(ga[1]));

  my_array_func(ga);   // 参数 &ca 与 &pa 的地址一样？
  my_pointer_func(ga); // 参数 &ca 与 &pa 的地址一样？
  return 0;
}

void my_array_func(char ca[10])
{
  printf(" size of array param = %d \n", sizeof(ca));
  // &ca 取ca指针本身的地址
  printf(" addr of arrary param = %#x \n", &ca);
  // ca的内容是数组第一个元素的地址
  printf(" addr of ga array = %#x \n", ca);
  printf(" addr of (ca[0]) param = %#x \n", &(ca[0]));
  printf(" addr of (ca[1]) param = %#x \n", &(ca[1]));
  printf(" ++ca = %#x \n\n", ++ca);
}

void my_pointer_func(char *pa)
{
  printf(" size of ptr param = %d \n", sizeof(pa));
  // &pa 取pa指针本身的地址
  printf(" addr of ptr param = %#x \n", &pa);
  // pa的内容是数组第一个元素的地址
  printf(" addr of ga array = %#x \n", pa);
  printf(" addr of (pa[0]) param = %#x \n", &(pa[0]));
  printf(" addr of (pa[1]) param = %#x \n", &(pa[1]));
  printf(" ++pa = %#x \n\n", ++pa);
}
