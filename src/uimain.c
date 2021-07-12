
#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
//#include "history.h"


int main()
{
  char input[100];

  while(input[0] != '@'){
    printf(">");
    fgets(input,sizeof(input),stdin);
    char* temp = &input[0];
    char** testing = tokenize(temp);
    print_tokens(testing);
    free_tokens(testing);
  }
   
  return 0;


}
