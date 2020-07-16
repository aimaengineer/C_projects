#include "changecase.h"
#include <stdio.h>
#include <string.h>
int main() {
  char *ptr1,*ptr2,*ptr3;
  char s[256];
  char sub[10];
  char str[256];
  int count = 0;
  
  /* Upcase */
  printf("Please enter string\n");
  scanf("%s", s);
  do {
    s[count] = up_char(s[count]);
    count++;
  }
  while(s[count] != '\0');
  printf("%s\n", s);
  
  /*find substring*/
  printf("Please enter string\n");
  scanf("%s", str);
  printf("Please enter substring\n");
  scanf("%s", sub);
  int i = 0,j = 0, fl = 0;
  ptr1=str;
  ptr2=sub;
  
  for(i=0; i<strlen(str); i++) {
    if (*ptr1 = *ptr2) {
      ptr3 = ptr1;
      for(j = 0; j<strlen(sub); j++) {
        if(*ptr3 == *ptr2) {
          ptr3++;
          ptr2++;
        }
        else
          break;
      }	
      ptr2 = sub;
      if (j == strlen(sub)) {
        fl = 1;
        printf("Substring is start from %d symbol\n", i);
      }
    }
    ptr1++;
  }
  if (fl == 0) {
    printf("Substring not found\n");
  }
return (0);
}