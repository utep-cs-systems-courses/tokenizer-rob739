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

char *copy_str(char *inStr, short len){
  char *copy = (char*)malloc((sizeof(char))*len);
  int i = 0;
  while(i<len){
    *copy+i = *inStr+i;
    i++;
  }
  retun copy;
}

char **tokenize(char* str){
  
  int num_of_tokens = count_words(str);
  char ** tokens = (char**)malloc(sizeof(char*) * num_of_tokens);

  char *start_of_token;
  char *end_of_token= str;
  int token_size;
    
  for(int i = 0;i < num_of_tokens;i++){
    start_of_token = word_start(end_of_token);
    end_of_token = wordterminator(start_of_token);
    token_size = end_of_token - start_of_token;
    *tokens+i = copy_str(start_of_token,token_size);
  }  

  return tokens;
}


void print_tokens(char **tokens){
  while(*tokens){
    printf("\n%s",*tokens);
    tokens++;
  }
}

void free_tokens(char **tokens){
  while(*tokens){
    free(*tokens);
    tokens++;
  }
}

int string_length(char *str){
  int tally= 0;
  while(*str != '\0'){
    str++,tally++;
  }
  return tally;
}










