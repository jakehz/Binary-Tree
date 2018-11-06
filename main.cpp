#include <iostream>
#include "binaryTree.h"
#include "binarySearchTree.h"

using namespace std;

int main()
{
	bSearchTreeType<int> mySearchTree;
	cout << "Enter a sequence of number (-999 to quit):" << endl;
	int num;
	cin >> num;

	while (num != -999)
	{
		mySearchTree.insert(num);
		cin >> num;
	}

	cout << "Traversing tree in inorder..." << endl;

	mySearchTree.inorderTraversal();

	cout << "Traversing tree in preorder... " << endl;

	mySearchTree.preorderTraversal();

	cout << "Traversing tree in postorder..." << endl;

	mySearchTree.postorderTraversal();

	cout << "The object's hight is " << mySearchTree.treeHeight() << endl;

	cout << "The number of nodes is " << mySearchTree.treeNodeCount() << endl;

	cout << "The number of leaves is " << mySearchTree.treeLeavesCount() << endl;



}