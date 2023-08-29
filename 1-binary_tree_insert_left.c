#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return (NULL);  // Return NULL if parent is NULL
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    
    if (new_node == NULL) {
        return (NULL);  // Return NULL on failure to allocate memory for the new node
    }

    if (parent->left != NULL){
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);

}