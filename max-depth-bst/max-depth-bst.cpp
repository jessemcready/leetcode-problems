/*
* Given a binary search tree, find the max depth.
*/

int BinarySearchTree::findDepthOfTree(Node *t_node) {
	// case for empty tree
	if (t_node == nullptr) {
		return 0;
	}
	// case for just root node, no children
	if (t_node->m_left == nullptr && t_node->m_right == nullptr) {
		return 1;
	}

	// otherwise find the depth of each subtree and take the max + 1 for the root node
	return std::max(findDepthOfTree(t_node->m_left), findDepthOfTree(t_node->m_right)) + 1;
}
