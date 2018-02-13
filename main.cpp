#include "nano.hpp"

int main(void)
{
	Component cmpt;
	node_t* node = cmpt.get_head();

	cmpt.add_node(node, TRUE);
	cmpt.add_node(node);
	cmpt.print_node(node);
	cmpt.print_node(node->next.at(0));
	cmpt.print_node(node->next.at(1));
	return 0;
}