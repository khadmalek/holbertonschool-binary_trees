#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);
	/* Check if the current node has at least one child */
	if (tree->left || tree->right)
		nodes_count += 1;

	/* Recursively count nodes in the left subtree */
	nodes_count += binary_tree_nodes(tree->left);

	/* Recursively count nodes in the right subtree */
	nodes_count += binary_tree_nodes(tree->right);

	return (nodes_count);
}
