#include <string.h>
#include <stdio.h>
/*#include "tokenizer.h"
#include "history.h"*/


int main()
{
  char input[100];

  while(input[0] != '@'){
    printf(">");
    fgets(input,sizeof(input),stdin);
    printf("%s",input);
    
  }
   
  return 0;


}
