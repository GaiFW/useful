#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdbool.h>
#include <string.h>

typedef struct node
{
	int floor;
	char name[1024];
	struct node* next;
}Node,*Node_p;

Node_p newnode(char *name,int floor)
{
	Node_p new = malloc(sizeof(Node));
	new->floor = floor;
	strcpy(new->name,name);
	new->next = NULL;
}

void insertnode(Node_p head,Node_p new)
{
	Node_p tmp=head;
	if(tmp->next !=NULL)
	{
		
		if(new->floor<tmp->next->floor)
		{
			new->next = tmp->next;
			tmp->next = new;
			break;
		}

	}
	if(tmp->next==NULL)
	{
		tmp->next = new;
	}
}

int main(int num,char * arr[])
{
	DIR* dp = NULL;
	for (int i = 1; i < num; ++i)
	{
		dp = opendir(arr[i]);
		if(dp == NULL)
		{
			perror("arr[i]");
			break;
		}
		int floor=0;
		Node_p head = newnode(arr[1],floor);
		Node_p tmp = head;
		while(tmp->next!=NULL)
		{
			
		}
		for(struct dirent* dir_list =NULL;dir_list = readdir(dp),dir_list!=NULL;)
		{

			if(!strcmp(dir_list->d_name,".")||!strcmp(dir_list->d_name,".."))
			{
				continue;
			}

			char newname[1024]="";
			if(dir_list->d_type == DT_DIR)
			{
				sprintf(newname,"%s/%s",arr[i],dir_list->d_name);
				strcpy(arr[++num],newname);
				continue;
			}

			printf("——%s\n",dir_list->d_name);
		}
		closedir(dp);
	}
    
    return 0;
}

