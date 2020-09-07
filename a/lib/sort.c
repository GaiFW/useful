#include "../inc/main.h"

/*收集到的车次组成链表*/
/*空链表头*/
Train_bst_p head_train()
{
	Train_bst_p head = malloc(sizeof(Train_bst));
	head->data = NULL;
	head->left = head;
	head->right = head;
}

/*新节点*/
Train_bst_p creat_train_node(Train* data)
{
	Train_bst_p new = malloc(sizeof(Train_bst));
	new->data =malloc(sizeof(Train));
	*(new->data) = *data;
	new->left = NULL;
	new->right = NULL;
}


/*插入链表*/
void link_in(Train_bst_p new, Train_bst_p prev, Train_bst_p next)
{
	new->right = prev->right;
	new->left = next->left;
	prev->right = new;
	next->left = new;
}
/*删除链表*/
void link_del(Train_bst_p node)
{
	Train_bst_p left = node->left;
	Train_bst_p right = node->right;

	left->right = node->right;
	right->left = node->left;
}

/*插入链表*/
Train_bst_p insert_train(Train_bst_p head, Train_bst_p new)
{
	if (head->right == head)
	{
		new->left = head;
		new->right = head;
		head->left = new;
		head->right = new;
		return head;
	}
	link_in(new, head->left, head);
	return head;
}


/*票价-快速排序*/
void price_kuaipai(Train_bst_p head, Train_bst_p left, Train_bst_p right)
{
	if( head->right==head)
	{
		printf("链表为空\n");
		return;
	}
	if(left == right || left==head || right== head)
	{
		return;
	}
	Train_bst_p r = left;
	Train* tmp = r->data;
	Train_bst_p l = right;
	while (r != l)
	{
		while (r!=l && l->data->price >= tmp->price)
		{
			l = l->right;
		}
		if(r!=l)
		{
			r->data = l->data;
			r = r->left;
		}
		while (r!=l &&r->data->price <= tmp->price)
		{
			r = r->left;
		}
		if(r!=l)
		{
			l->data = r->data;
			l = l->right;
		}
	}
	r->data = tmp;
	price_kuaipai(r->right,r->right, right);
	price_kuaipai(head,left, l->left);
}

/*余票-选择排序*/
void mount_xuanpai(Train_bst_p head)
{
	Train_bst_p headptr=NULL;
	for (headptr=head; headptr->right != head; headptr = headptr->right)
	{
		Train_bst_p ptr = headptr->right;
		for (Train_bst_p tmp = headptr->right; tmp->right != head; tmp = tmp->right)
		{
			if (tmp->data->ticket_mount < tmp->right->data->ticket_mount)
			{
				ptr = tmp->right;
			}
		}
		Train* t = headptr->right->data;
		headptr->right->data = ptr->data;
		ptr->data = t;
	}

}

/*遍歷排序好的鍊表*/
void show_lianbiao_train_info(Train_bst_p head)
{
	Train_bst_p tmp =head;
	if(tmp->right==head)
	{
		printf("没有元素\n");
		return;
	}
	while(tmp->right!=head)
	{
		tmp=tmp->right;
		show_train_info(tmp->data);
	}
}


/*空树*/
Train_bst_p init_train_root()
{
	return NULL;
}

/*插入树 时间顺序*/
Train_bst_p insert_train_bst(Train_bst_p root, Train_bst_p new)
{
	if (root == NULL)
	{
		return new;
	}
	else
	{
		if (compare_time(root->data->departure_time, new->data->departure_time)==1) //new 小
		{
			root->left = insert_train_bst(root->left, new);
		}
		else if(compare_time(root->data->departure_time, new->data->departure_time)==0)
		{
			root->right = insert_train_bst(root->right, new);
		}
		else
		{
			printf("不能同一时刻发车\n");
		}
	}

	return root;
}

/*中序遍历树*/
void mid_traverse(Train_bst_p root)
{
	if (root!=NULL)
	{
		mid_traverse(root->left);
		show_train_info(root->data);
		mid_traverse(root->right);
	}
}



//查找车次
void sel_train(char* destination)
{
	/*打开文件*/
	FILE* fp=NULL;
	fp = fopen("../db/车次信息.txt","r");
	if(fp==NULL)
	{
		printf("打不开文件\n");
		return ;
	}

	/*将车次信息组成链表*/
	Train_bst_p head = head_train();
	Train tmp;
	Train_bst_p new=NULL;
	for(; fread(&tmp,sizeof(Train),1,fp)==1;head=insert_train(head,new))
	{
		if(strcmp(tmp.destination, destination) == 0)
		{
			 new = creat_train_node(&tmp);
		}
	}
	/*关闭文件*/
	fclose(fp);
	// return;

	int op=0;
	printf("按时间排序 1； 按票价排序 2； 按余票数量 3\n");
	scanf("%d",&op);
	if(op==1)
	{
		Train_bst_p root=init_train_root();
		Train_bst_p tmp = head;
		Train_bst_p real_tmp=tmp->right;
		while(real_tmp!=head)
		{
			tmp = real_tmp;
			real_tmp = real_tmp->right;
		/*生成二叉树-时间左小右大*/
			link_del(tmp);
			tmp->right=NULL;
			tmp->left=NULL;
			root = insert_train_bst(root,tmp);
		}
		/*
		二分查找目的地-中序遍历查找-时间排序*/
		mid_traverse(root);
		printf("------------------------------------------------------------以上\n");
	}
	else if(op==2)
	{
		/*价格由小到大-快速排序*/
		price_kuaipai(head,head->left,head->right);
		show_lianbiao_train_info(head);
		printf("------------------------------------------------------------以上\n");
	}
	else if(op==3)
	{
		/*余票由大到小-选择排序*/
		mount_xuanpai(head);
		show_lianbiao_train_info( head);
		printf("-----------------------------------------------------------以上\n");
	}
	return;
}