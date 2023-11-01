# Binary Tree Project

## Overview

This project provides a simple C implementation of a binary tree and common operations on binary trees. A binary tree is a data structure composed of nodes, where each node has at most two children, which are referred to as the left child and the right child.

## Features

The project includes the following features and operations:

- Creating a binary tree
- Inserting nodes into the binary tree
- Traversing the binary tree (in-order, pre-order, post-order)
- Free the bnary tree
- Calculating the height, size, depth, leaves, nodes and balance factor of the binary tree


## Usage

To use the binary tree library in your C project, you can follow these steps:

1. Clone or download the repository.

2. Include the binary tree library in your C code:
```
#include <stdio.h>
#include "binary_tree.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
```
