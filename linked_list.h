#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ll_node ll_node, *ll_node_ptr;

struct ll_node //sets the node up
{
    float value; //8 bytes used. Every node wastes 4 bytes here
    ll_node_ptr next; //8 bytes used
};

ll_node_ptr ll_add_front( ll_node_ptr t, float v );
ll_node_ptr ll_rev( ll_node_ptr t );
void ll_free( ll_node_ptr t );
void ll_print( ll_node_ptr t );

#endif
