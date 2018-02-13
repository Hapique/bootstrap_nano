#ifndef NANO_HPP
#define NANO_HPP

#include <vector>
#include <iostream>

typedef enum state {
	FALSE,
	TRUE,
	UNDEFINED
} state_t;

typedef struct node {
	state_t state;
	std::vector<struct node*> next;
} node_t;

class Component {
public:
	Component(void);
	Component(state_t state);
	~Component(void);
	node_t* get_head(void) const;
	void add_node(node_t* node, state_t data = UNDEFINED);
	void print_node(node_t* node) const;
private:
	std::string state_as_str(state_t state) const;
	node_t* _head;
};

#endif