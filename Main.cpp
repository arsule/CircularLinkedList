#include"CircularLinkedList.h"
/////////////////////////////
int main()
{
	int choice = 0;
	circularLinkedList lt;
	while (choice != 5)
	{
		cout << "\n\t\t1.Insert at Begning";
		cout << "\n\t\t2.Insert at position";
		cout << "\n\t\t3.Insert at End";
		cout << "\n\t\t4.Display";
		cout << "\n\t\t5.Delete at Begning";
		cout << "\n\t\t6.Delete at position";
		cout << "\n\t\t7.Delete at End";
		cout << "\n\t\t8.Display count";
		cout << "\n\t\t9.Exit";
		cout << "\nEnter your choice";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int data;
			cout << "\nEnter data.";
			cin >> data ;
			lt.insertAtBeg(data);
		}
		break;
		case 2:
		{
			int data, pos;
			cout << "\nEnter data and position";
			cin >> data >> pos;
			lt.insertAtPos(data, pos);
		}
		break;
		case 3:
		{
			int data;
			cout << "\nEnter data.";
			cin >> data ;
			lt.insertAtEnd(data);
		}
		break;
		
		case 4:
			lt.display();
			break;
		case 5:
		{
			
			lt.deleteAtBeg();
		}
		break;
		case 6:
		{
			int pos;
			cout << "\nEnter the position";
			cin >> pos;
			lt.deleteAtPos(pos);
		}
		break;
		case 7:
		{
			
			lt.deleteAtEnd();
		}
		break;
		case 8:
		{

			cout << "Count = "<<lt.countlistItems()<<"\n";
		}
		break;
		case 9:
		{

			exit;
		}
		break;
		default:
			cout << "\nInvalid choice";
			break;
		}
	}
	return 0;
}