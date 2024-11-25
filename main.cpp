#include"array.h"
int main() 
{
	int size;
	int choice;
	cout<<"\nEnter size of array :";
	cin>>size;
	Array arr(size);
	while(choice!=10)
	{
		cout<<"\n\t\t 1.Add element";
		cout<<"\n\t\t 2.Display element";
		cout<<"\n\t\t 3.Search element";
		cout<<"\n\t\t 4.Delete element";
		cout<<"\n\t\t 10.Exit";
		cout<<"\nEnter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int data;
					cout<<"\nEnter data to add :";
					cin>>data;
					if(arr.addElement(data))
					{
						cout<<"\nAdded successfully";
					}
					else
					{
						cout<<"\nArray is full";
					}
				}
				break;
			case 2:
				arr.display();
				break;
			case 3:
					{
					int data;
					cout<<"\nEnter data to search :";
					cin>>data;
					arr.searchElement(data);
					}
			case 4:
					{
					int data;
					cout<<"\nEnter data to delete :";
					cin>>data;
					if(arr.deleteElement(data))
					{
						cout<<"\nDeletion successfully";
					}
					else
					{
						cout<<"\nDeletion is failed";
					}
					
					}
				break;	
			case 10:
				break;
			default:
				cout<<"\nInvalid choice";
				break;
		}
	}

	return 0;
}
