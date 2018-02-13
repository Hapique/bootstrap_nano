#include "nano.hpp"

int main(void)
{
	Component cmpt;
	node_t* node = cmpt.get_head();

	cmpt.add_node(node, TRUE);
	cmpt.add_node(node);
	node = node->next.at(0);
	cmpt.add_node(node, TRUE);
	cmpt.add_node(node, FALSE);
	node = node->next.at(0);
	cmpt.add_node(node, FALSE);
	cmpt.add_node(node, TRUE);
	cmpt.print_node(cmpt.get_head());
	return 0;
}