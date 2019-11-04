#include "node.h"

class List{
private:
	int _size;
	ListNodePosi header;
	ListNodePosi trailer;

	void init();
	void copynodes();
public:
	List(){	init();	}

	List(ListNodePosi p, int n);
	~List();
};


