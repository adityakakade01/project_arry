#include"array.h"
Array::Array(int s)
{
	this->size=s;
	this->p=new int[size];
	this->index=-1;
}
bool Array::isEmpty()
{
	if(index==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Array::isFull()
{
	if(index==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Array::addElement (int data)
{
	if(isFull())
	{
		return false; //operation failed
	}
	else
	{
		p[++index]=data;
		return true; //operation successful	
	}
}
bool Array::deleteElement(int ele)
{
	if(isEmpty())
	{
		return false;
	}
	else
	{
		int i;
		for(i=0;i<=index;i++)
		{
			if(p[i]==ele)
			{
				break;
			}
		}
		if(i==index+1)
		{
			cout<<"\nElement not found";
			return false;
		}
		else
		{
			while(i<index)
			{
				p[i]=p[i+1];
				i++;
			}
			index--;
			return true;
		}
	
	}
}
void Array::display()
{
	if(isEmpty())
	{
		cout<<"\nNo elements in array";
	}
	else
	{
		int i;
		for(i=0;i<=index;i++)
		{
			cout<<"\t"<<p[i];
		}
	}
}
void Array::searchElement (int ele)
{
	if(isEmpty())
	{
		cout<<"\nNo elements to search";
	}
	else
	{
		int i;
		for(i=0;i<=index;i++)
		{
			if(p[i]==ele)
			{
				cout<<"\nElement is found";
				return;
			}
		}
		cout<<"\nElement is not found";
	}
}
Array::~Array()
{
	delete []p;
}
