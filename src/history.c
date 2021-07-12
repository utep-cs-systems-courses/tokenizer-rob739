#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"



List* init_history(){
  List* history = (List*)malloc(sizeof(Item)*50);
  return history;
}


void add_history(List *list, char *str){
  Item *iterator_node = list->root;

  if(iterator_node == NULL){
    Item *new_node = (Item*)malloc(sizeof(Item));
    char *new_str = copy_str(str,string_length(str));
    new_node->id= 1, new_node->str= new_str, new_node->next= NULL;
    list->root = new_node;
  }

  else{
    int pos = 2;
    while(iterator_node->next != NULL){
      iterator_node = iterator_node->next;
      pos++;
    }
    iterator_node->next= (Item*)malloc(sizeof(Item));
    iterator_node->next->id= pos;
    iterator_node->next->str= str;
  }
}


char *get_history(List *list, int id){
  Item* iterator_node= list->root;
  
  while(iterator_node != NULL){
    if(iterator_node->id == id){
      return iterator_node->str;
    }
    else{
      iterator_node = iterator_node->next;
    }
  }
  printf("id not valid for memroy pos.");
  return 0;
}



void print_history(List *list){
  Item *iter= list->root;
  while(iter != NULL){
    printf("[%d] %s\n",iter->id,iter->str);
    iter=iter->next;
  }
}


/*Free the history list and the strings it references. */
void free_history(List *list){
  Item *iter = list->root;

  while (iter != NULL){
    free(iter);
    iter = iter->next;
  }
  free(list);
}
