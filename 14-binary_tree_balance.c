#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right_h = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (left_h - right_h);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
		return (0);

	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_h > right_h ? left_h : right_h);
}

