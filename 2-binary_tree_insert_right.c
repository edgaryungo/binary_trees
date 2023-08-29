#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL) {
        return (NULL);  // Return NULL if parent is NULL
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    
    if (new_node == NULL) {
        return (NULL);  // Return NULL on failure to allocate memory for the new node
    }

    if (parent->right != NULL){
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    parent->right = new_node;

    return (new_node);
}