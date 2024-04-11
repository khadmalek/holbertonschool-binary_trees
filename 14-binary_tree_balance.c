#include "binary_trees.h"

/**
* binary_tree_height - Mesure la hauteur d'un arbre binaire
* @tree: Pointeur vers la racine de l'arbre à mesurer
*
* Return: 0 si l'arbre est NULL, sinon la hauteur de l'arbre
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/* +1 pour obtenir la hauteur de l'arbre de manière récursive */
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	return ((left_height > right_height) ? left_height : right_height);
}

/**
* binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
* @tree: Pointeur vers la racine de l'arbre à mesurer
*
* Return: 0 si l'arbre est NULL, sinon le facteur d'équilibre
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
