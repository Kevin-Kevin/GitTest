#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char str[5];
  char str2[5];
  scanf("%s", str);
  scanf("%s",str2);

  printf("str = %s , srt2 = %s",str,str2);
  printf("srt len = %d",strlen(str));
  
  return 0;
}