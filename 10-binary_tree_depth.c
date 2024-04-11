#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if the tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree) /* Vérifie si le nœud existe (si l'arbre n'est pas NULL) */
	{
		while (tree->parent) /* Tant que le nœud a un parent */
		{
			tree = tree->parent; /* Déplace le pointeur vers le parent */
			depth++; /* Incrémente la profondeur */
		}
	}

	return (depth); /* Retourne la profondeur du nœud */
}
