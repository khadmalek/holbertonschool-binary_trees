#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight == rightHeight)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	}

	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftCount = 0, rightCount = 0;

	if (tree == NULL) /* Vérifie si l'arbre est vide (NULL) */
		return (0);

	if (tree->left != NULL) /* Vérifie s'il y a un nœud gauche */
		leftCount = binary_tree_height(tree->left) + 1;
		/* Calcule la hauteur du sous-arbre gauche récursivement */

	if (tree->right != NULL) /* Vérifie s'il y a un nœud droit */
		rightCount = binary_tree_height(tree->right) + 1;
		/* Calcule la hauteur du sous-arbre droit récursivement */

	if (leftCount > rightCount) /*Compare la hauteur du sous-arbre g et d */
		return (leftCount); /* Retourne la hauteur du sous-arbre gauche */

	return (rightCount); /* Retourne la hauteur du sous-arbre droit */
}
