#include"instruction.h"
void instruction() {
	BinarySearchTree<int> bstree; // 创建一个二叉搜索树
	int choices = 0;
	menu();
	while (true) {
		cout << "\nPlease input your choice: ";
		cin >> choices;
		switch (choices)
		{
		case 1: {
			cout << endl << "------Insert Data(end up with -1)------" << endl;
			for (int i = 0; ; i++) {
				int num;
				cin >> num;
				if (num != -1) {
					bstree.insert(num);
				}
				else  	break;
			}
			//t.ZprintTree();
			break;
		}
		case 2: {
			cout << endl << "-------Delete Data------" << endl;
			cout << "Input the data you want to delete:";
			int delete_num;
			cin >> delete_num;
			if (bstree.contains(delete_num)) {
				bstree.remove(delete_num);
				cout << "Delete successful!";
				//	t.ZprintTree();
			}
			else {
				cout << "This data is not exist\n";
			}
			break;
		}
		case 3: {
			cout << endl << "-------PreOrder BSTree------" << endl;
			bstree.PrintPreOrderTree();
			break;
		}
		case 4: {
			cout << endl << "-------InOrder BSTree------" << endl;
			bstree.PrintInOrderTree();
			break;
		}
		case 5: {
			cout << endl << "-------PostOrder BSTree------" << endl;
			bstree.PrintPostOrderTree();
			break;
		}
		case 6: {
			cout << endl << "-------Search data------" << endl;
			cout << "Input the data you want to search:";
			int s_num;
			cin >> s_num;
			if (bstree.contains(s_num)) {
				cout << s_num << " exists.";
			}
			else {
				cout << s_num << " is not in the tree.\n";
			}
			break;
		}
		case 7: {
			cout << endl << "-------Print the node num of BSTree------" << endl;
			bstree.PrintNodeNum();
			break;
		}
		case 8: {
			cout << endl << "-------Find the max in BSTree------" << endl;
			cout << "The max data in BSTree is " << bstree.findMax() << endl;
			break;
		}
		case 9: {
			cout << endl << "-------Find the min in BSTree------" << endl;
			cout << "The min data in BSTree is " << bstree.findMin() << endl;
			break;
		}
		case 10:
			exit(0);
			break;
		default:
			cout << "Your input is wrong!" << endl;
			break;
		}
	}
}