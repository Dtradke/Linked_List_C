#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

//int first = 1;

ll_node_ptr ll_add_front( ll_node_ptr t, float v )
{
    if( !t )//adds if the list is empty
    {
        ll_node_ptr new_t = (ll_node_ptr)malloc (sizeof (new_t[0]));
        new_t->value = v;
        new_t->next = NULL;
        return new_t;
    }

    else
    {
      ll_node_ptr new_t = (ll_node_ptr)malloc (sizeof (new_t[0]));
      new_t->value = v;
      new_t->next = t;
      return new_t;
    }
    return t;
}

ll_node_ptr ll_rev( ll_node_ptr t )
{
    ll_node_ptr previous = NULL;
    ll_node_ptr current = t;

    if(t == NULL)
    {
      return t;
    }
    while(t != NULL)
    {
      current = t->next;
      t->next = previous;
      previous = t;
      t = current;
    }
    return previous;
}

void ll_free( ll_node_ptr t )
{
    if(t == NULL)
    {
      return;
    }
    ll_free(t->next);
    free(t);
}

void ll_print( ll_node_ptr t )
{
  if(t == NULL)
  {
    char array[20] = "[empty list]";
    printf("%s\n", array);
    return;
  }
    while(t != NULL)
    {
        float x = t->value;
        printf(" %.2f ->", x);
        t = t->next;
    }
}
