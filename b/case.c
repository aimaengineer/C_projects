#include "changecase.h"

char low_char(char s) {
    
  if(s>='A' && s<='Z')
    s+=32;
  return s;  
    
}

char up_char(char s) {
  
  if(s>='a' && s<='z')
    s-=32;
  return s;
}