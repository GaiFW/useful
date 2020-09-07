#include "../inc/main.h"



/*初始化堆管理器
用数组存放堆元素；哨兵；当前实际元素个数，不算哨兵；最大容量；
*/
HeapManeger_p init_heap(int capacity)
{
	HeapManeger_p theHeapManeger = malloc(sizeof(HeapManeger));
	if(theHeapManeger!=NULL)
	{
		theHeapManeger->MaxHeap = malloc(sizeof(collect_table)*capacity);
		if(theHeapManeger->MaxHeap!=NULL)
		{
			(theHeapManeger->MaxHeap[0]).number = MaxData;
			theHeapManeger->size = 0;
			theHeapManeger->capacity = capacity;
			return theHeapManeger;
		}
	}
}

/*heap_empty*/
bool heap_empty(HeapManeger_p theHeapManeger)
{
	return theHeapManeger->size ==0;
}

/*heap_full*/
bool heap_full(HeapManeger_p theHeapManeger)
{
	return theHeapManeger->size == theHeapManeger->capacity-1;
}

/*insert_heap
	调整插入*/
void insert_heap(HeapManeger_p theHeapManeger,collect_table data)
{
	if(!heap_full(theHeapManeger))
	{
		int i=0;
		i=++theHeapManeger->size;//记录当前元素数量
		for(;theHeapManeger->MaxHeap[i/2].number<data.number;i/=2)//插入的数放到合适的位置
		{
			theHeapManeger->MaxHeap[i]=theHeapManeger->MaxHeap[i/2];
		}
		theHeapManeger->MaxHeap[i]=data;
	}
	return;
}

/*delete_heap
	调整删除*/
bool delete_heap(HeapManeger_p theHeapManeger,collect_table *data)
{
	if(!(heap_empty(theHeapManeger)))//不为空 说明至少有堆顶
	{
		int parent,child;
		collect_table tmp;
		*data = theHeapManeger->MaxHeap[1];//记录堆顶
		theHeapManeger->MaxHeap[1] = theHeapManeger->MaxHeap[theHeapManeger->size--];//把最后一个给删除，给到堆顶；
		for(parent=1;parent*2<=theHeapManeger->size;parent=child)//如果有孩子
		{
			child = parent*2;//记录左孩子
			if(child<theHeapManeger->size&&\
					theHeapManeger->MaxHeap[child].number<theHeapManeger->MaxHeap[child+1].number)
			{
				child++;//记录最大的孩子下标
			}
			if(theHeapManeger->MaxHeap[parent].number<theHeapManeger->MaxHeap[child].number)
			{
				tmp = theHeapManeger->MaxHeap[parent];
				theHeapManeger->MaxHeap[parent] = theHeapManeger->MaxHeap[child];
				theHeapManeger->MaxHeap[child] = tmp;
			}
			else
				break;
		}
		return 1;
	}
	return 0;
}

/*adjust_heap
	调整堆*/
int adjust_heap(HeapManeger_p theHeapManeger)
{
	if(!heap_empty(theHeapManeger))
	{
		for(int k=theHeapManeger->size/2;k>0;k--)
		{
			int parent,child;
			for (parent=k; parent*2<=theHeapManeger->size; parent=child)
			{
				child=parent*2;
				if(child<theHeapManeger->size && \
						theHeapManeger->MaxHeap[child].number<theHeapManeger->MaxHeap[child+1].number)
				{
					child++;
				}
				if(theHeapManeger->MaxHeap[parent].number<theHeapManeger->MaxHeap[child].number)
				{
					collect_table tmp;
					tmp = theHeapManeger->MaxHeap[parent];
					theHeapManeger->MaxHeap[parent] = theHeapManeger->MaxHeap[child];
					theHeapManeger->MaxHeap[child] = tmp;
				}
				else
					break;
			}
		}
		return 1;
	}
	return 0;
}