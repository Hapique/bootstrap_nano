#include "nano.hpp"

Component::Component(void)
{
	_head = new node_t;
	_head->state = UNDEFINED;
}

Component::Component(state_t state)
{
	_head = new node_t;
	_head->state = state;
}

Component::~Component(void)
{
	delete _head;
}

node_t* Component::get_head(void) const
{
	return _head;
}

void Component::add_node(node_t* node, state_t data)
{
	node_t* next = new node_t;
	next->state = data;
	node->next.push_back(next);
}

std::string Component::state_as_str(state_t state) const
{
	std::string str;

	if (state == FALSE)
		str = "false";
	else if (state == TRUE)
		str = "true";
	else
		str = "undefined";
	return str;
}

void Component::print_node(node_t* node, std::string disp) const
{
	for (unsigned int i = 0 ; i < node->next.size() ; i++) {
		std::cout << disp << i << ": " 
		<< state_as_str(node->next.at(i)->state) << '\n';
		print_node(node->next.at(i), disp.insert(0, "|---"));
		disp.erase(0, 4);
	}
}