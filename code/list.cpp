#include"list.h"
#include<iostream>
using namespace std;
void List::init(){

	header = new ListNode;
	trailer = new ListNode;

	header->succ = trailer;
	header->pred = NULL;

	trailer->pred = header;
	trailer->succ = NULL;

	_size = 0;
	cout<<"a list is constructed..."<<endl;
}


List::List(ListNodePosi p, int n){
	cout<<"a list is constructed..."<<endl;
}

List::~List(){
	cout<<"a list is deconstructed"<<endl;
}
