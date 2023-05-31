#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: pointer to parent fo the node to create
 * @value: value stored in the new node
 * Return: pointer to the new node or Null if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
