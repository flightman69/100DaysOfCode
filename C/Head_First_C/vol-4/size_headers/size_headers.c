#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
  printf("The value of INT_MAX is : %z\n", INT_MAX);
  printf("The Value of INT_MIN is : %z\n",INT_MIN );
  printf("An int takes %z bytes of memory\n\n\n",sizeof(int) );
  printf("The Value of FLOAT_MAXN is : \n", FLT_MAX);
  printf("The value of FLOAT_MIN is :\n", FLT_MIN );
  printf("A float takes %z bytes of memory\n\n\n",sizeof(float) );

  return 0;
}
