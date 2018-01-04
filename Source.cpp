#include<iostream>
using namespace std;
class node {
	int data; node * next;
public: node() { data = 0; next = NULL; }
		node(int d) :data(d), next(NULL) {}
		int getData()
		{
			return data;
		}
		void setData(int d)
		{
			data = d;
		}
		node * getNext()
		{
			return next;
		}
		void setNext(node * n)
		{
			next = n;
		}
		friend class list;
};
class list {
	node * chain;
public:

	void add_end(int item) {
		node * temp = chain;
		if (chain == NULL)
			chain = new node(item);
		else {
			for (; temp->next != NULL; temp = temp->next);
			temp->next = new node(item);
		}
	}

	list() : chain(NULL) {};
	bool IsEmpty();
	int size();
	void reverse();
	void add(int item) // add at front
	{
		node * temp = new node(item);
		temp->setNext(chain);
		// or temp->next=chain 
		chain = temp;
	}

	double average();
	void insert(int i, int item);
	int get(int i) {
		node*tmp = chain;
		int co = 1;
		while (co != i) {
			tmp = tmp->next;
			co++;
		}

		return tmp->data;


	}
	void set(int i, int d) {
		node*tmp = chain;
		int co = 1;
		while (co != i) {
			tmp = tmp->next;
			co++;
		}

		tmp->setData(d);


	}

	void printall() {
		node *p = chain;
		while (p != NULL) {
			cout << p->getData() << endl;
			p = p->getNext();
		}
	}
	void remove(int i) {
		node*tmp = chain;
		node*p = tmp->next;
		if (chain == NULL) {
			return;
		}
		if (i == 1) {

			chain = chain->next;
			delete tmp;


		}
		else {


			while (tmp->next != NULL) {

				if (tmp->next->data == get(i)) {

					tmp->next = p->next;
					delete p;
					return;



				}
				tmp = tmp->next;
				p = p->next;


			}


		}
	}



};

bool list::IsEmpty() {
	if (chain == NULL) {
		return true;
	}
	else
		return false;
}


int list::size() {

	int x = 1;
	node*tmp = chain;
	if (tmp == NULL) {
		return 0;
	}
	else {
		while (tmp->next != NULL) {

			tmp = tmp->next;
			x++;

		}
		return x;


	}


}


void list::reverse() {

	node*i = chain;
	node*j = i->next;
	node*tmp = j->next;
	while (tmp != NULL) {
		j->next = i;
		i = j;
		j = tmp;
		tmp = tmp->next;

	}
	chain->next = NULL;
	chain = j;
	chain->next = i;



}


double list::average() {
	node*tmp = chain;
	double count = 1;
	double sum = 0;
	double s = size();


	while (count <= s) {
		sum += tmp->data;
		tmp = tmp->next;

		count++;



	}
	count--;
	return sum / count;

}

void list::insert(int i, int item) {
	if (i > size()) {
		cout << "ERROR";
		return;
	}
	if (i == 1) {
		add(item);
	}
	else {
		node*tmp = chain;
		node*n;
		int co = 1;
		while (co != (i - 1)) {
			tmp = tmp->next;
			co++;
		}
		n = new node(item);
		n->next = tmp->next;
		tmp->next = n;

	}
}


	class stack  {
	public:
		list *h=new list();
		void push(int g) {

			h->add(g);

		}
		int pop() {
			int g =h-> get(1);
			h->remove(1);
			return g;
		}



	};
	class queue {

	public:
		list *j = new list();

		void enqueue(int y) {
			j->add_end(y);

		}
		int dequeue() {

			int s = j->get(1);
			j->remove(1);
			return s;


		}




	};
	class TreeNode {
	public:           
		TreeNode(int D, int*s,TreeNode *left = NULL, TreeNode *right = NULL,TreeNode *up = NULL, TreeNode *down = NULL, int x = 0)
		{
			data = x;  this->left = left;  this->right = right; this->up = up; this->down = down; d = D; state = s;
		};
		int getData() { return data; };   
		TreeNode *getLeft() { return left; };  
		TreeNode *getRight() { return right; }; 
		void setData(int x) { data = x; }; 
		void setLeft(TreeNode *ptr) { left = ptr; }; 
		void setRight(TreeNode *ptr) { right = ptr; };      
	public:  int data;    // different data type for other apps  
			  TreeNode *left;  // a pointer to left child  
			  TreeNode *right;// a pointer to right child 
			  TreeNode *up;
			  TreeNode*down;
			  int d;
			  int *state = new int[d*d];
	}; 

	class Tree {
	public:  
		Tree(TreeNode *rootPtr = NULL)
		{ this->rootPtr = rootPtr; };   
		TreeNode *search(int x);    
		bool insert(int x);     
		TreeNode * remove(int x);      
		TreeNode *getRoot()
		{ return rootPtr; };     
		Tree getLeftSubtree();  
		Tree getRightSubtree();  
		bool isEmpty() { return rootPtr == NULL; };    
	public:       
		TreeNode *rootPtr;
	};
















	int main() {

		int n;
		cin >> n;
		int x, y;
		int m = 0;
		
		int *init = new int[n*n];
		int*successful = new int[n*n];
		for (int i = 0; i < (n*n); i++) {

			successful[i] = i;

		}
		int** ary = new int*[n];
		for (int i = 0; i < n; ++i) {
			ary[i] = new int[n];
		}

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < n; j++) {
				ary[i][j] = init[m];
				if (init[m] == 0) {
					x = i;
					y = j;
				}
				m++;



			}



		}





	}
