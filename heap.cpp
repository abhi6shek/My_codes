#include<stdio.h>

void heapify(int a[],int i)
{
	int temp=0;
	if(i>1)
	{
		if(a[i/2]<a[i])
		{
			temp=a[i/2];
			a[i/2]=a[i];
			a[i]=temp;
		}
		heapify(a,i/2);
	}
}

void createheap(int a[])
{
	int i=1;
	while(i<a[0])
	{
		heapify(a,i);
		i++;
	}
}

void print(int a[])
{
	int i=1;
	while(i<a[0])
		printf("%d ",a[i++]);
}

void shiftdown(int a[],int i)
{
	int largest=i;
	int left=2*i;
	int right=2*i+1;
	int temp=0;
	if(left<=a[0] && a[left]>a[largest])
		largest=left;
	if(right<=a[0] && a[right]>a[largest])
		largest=right;
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		shiftdown(a,largest);
	}
}

void remove(int a[])
{
	a[1]=a[a[0]];
	a[0]--;
	shiftdown(a,1);
}

void shiftheap(int a[])
{
	int i=a[0]/2;
	while(i>0)
	{
		shiftdown(a,i);
		i--;
	}
}

void heapifyheap(int a[])
{
	int i=a[0]-1;
	while(i>=a[0]/2)
	{
		heapify(a,i);
		i--;
	}
}

int main()
{
	int a[]={8,1,2,3,4,5,6,7};
	print(a);
	//createheap(a);
	//printf("\n");
	//print(a);
	//remove(a);
	//printf("\n");
	//print(a);
	//remove(a);
	//printf("\n");
	//print(a);
	//shiftheap(a);	
	//printf("\n");
	//print(a);
	//heapifyheap(a);//not to creat heap
	//printf("\n");
	//print(a);
	return 0;
}