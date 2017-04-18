#include "linked_list.h"
#include <stdio.h>

int main( int argc, char **argv )
{
    ll_node_ptr t1 = NULL;
    t1 = ll_add_front( t1, 4.2 );
    t1 = ll_add_front( t1, 1.0 );
    t1 = ll_add_front( t1, 10.9 );
    ll_print(t1);
    t1 = ll_rev(t1);
    printf("\n");
    ll_print(t1);
    ll_free(t1);
    return 0;
}
