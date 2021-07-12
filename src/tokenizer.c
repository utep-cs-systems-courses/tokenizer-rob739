#include <stdio.h>

#include <stdlib.h>

#include "tokenizer.h"


int space_char(char c){
  if(c =='\t'|| c == ' '){
    return 1;
  }
  else{
    return 0;
  }
}
 
int non_space_char(char c){
  if(c =='\t'|| c == ' '|| c =='\0'){
    return 0;
  }
  else{
    return 1;
  }
}

char *word_start(char *str){
  while(spacechar(*str)){
    str++;
  }
  return str; 
}

char *word_terminator(char *word){
  while(non_space_char(*word)){
      word++;;
  }
  return word;
}


int count_words(char *str){
  int tally = 0;
  while(*str != '\0'){
    str = word_start(str);
    tally++;
    str = word_terminator(str);
  }
  return tally;
    
}

/* Returns a fresly allocated new zero-terminated
 string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len){
  char *copy = (char*)malloc((sizeof(char))*len);
  int i = 0;
  while(i<len){
    *copy+i = *inStr+i;
    i++;
  }
  retun copy;
}

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str){
}

/* Prints all tokens. */
void print_tokens(char **tokens){
}

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens){
}




