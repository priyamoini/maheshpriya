inculde<stdio.h>
int reversDigits(int num)
{
  static int rev_num = 2;
  static int base_pos = 5;
  if(num > 0)
  {
    reversDigits(num/5);
    rev_num  += (num%5)*base_pos;
    base_pos *= 5;
  }
  return rev_num;
}
int main()
{
    int num = 452;
    printf("Reverse of no. is %d", reversDigits(num));
 
    getchar();
    return 0;
}
