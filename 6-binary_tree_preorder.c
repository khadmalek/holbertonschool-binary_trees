#include "binary_trees.h"
/**
 * binary_tree_preorder - function that checks if a given node is a root
 * @tree: tree pointer structur
 * @func: function (print)
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Vérifie si l'arbre ou la fonction est NULL */
	if (!tree || !func)
		return;

	/* Applique la fonction à la valeur du nœud courant */
	func(tree->n);

	/* Parcours récursif du sous-arbre gauche en pré-ordre */
	binary_tree_preorder(tree->left, func);

	/* Parcours récursif du sous-arbre droit en pré-ordre */
	binary_tree_preorder(tree->right, func);
}
