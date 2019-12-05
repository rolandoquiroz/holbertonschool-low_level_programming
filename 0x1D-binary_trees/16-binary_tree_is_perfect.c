#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left)
		height_left = binary_tree_height(tree->left);
	if (tree->right)
		height_right = binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: full = 1 Not full = 0. If tree is NULL return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	size_t nodes_left = 0, nodes_right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left)
		nodes_left = binary_tree_is_full(tree->left);
	if (tree->right)
		nodes_right = binary_tree_is_full(tree->right);

	return (nodes_left && nodes_right);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: perfect = 1 Not perfect = 0. If tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int h_l = 0, h_r = 0, f_l = 0, f_r = 0;
	int p_l = 0, p_r = 0;


	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left)
	{
		h_l = binary_tree_height(tree->left);
		f_l = binary_tree_is_full(tree->left);
		p_l = binary_tree_is_perfect(tree->left);
	}
	if (tree->right)
	{
		h_r = binary_tree_height(tree->right);
		f_r = binary_tree_is_full(tree->right);
		p_r = binary_tree_is_perfect(tree->right);
	}

	return ((h_l == h_r) && (f_l && f_r) && (p_l && p_r));
}
