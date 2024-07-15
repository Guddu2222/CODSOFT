#include<iostream>
#include<string>
using namespace std;
const int maxtasks =100;
struct Task
{
	string discription;
	bool isdone;
};
int main()
{
	Task tasks[maxtasks];
	int numTasks=0;
	while(true)
	{
		cout<<"TO-do-list application"<<endl;
		cout<<"1. Add Task"<<endl;
		cout<<"2. List task"<<endl;
		cout<<"3. mark task as done"<<endl;
		cout<<"4.remove the task"<<endl;
		cout<<"5. Quit application"<<endl;
		int choice;
		cout<<"enter your choice:";
		cin>>choice;
		if(choice ==1)
		{
			if(numTasks<maxtasks)
			{
				cout<<"enter the task:";
				cin.ignore();
				getline(cin,tasks[numTasks].discription);
				tasks[numTasks].isdone=false;
				numTasks++;
				cout<<"task add."<<endl;
			}
			else
			{
				cout<<"Task list is full"<<endl;
				
			}
			cout<<endl;
		}
		else if(choice ==2)
		{
			cout<<"Tasks:"<<endl;
			for(int i=0; i<numTasks; i++)
			{
				cout<<(i+1)<<".";
				if(tasks[i].isdone)
				{
					cout<<"[Done]"; 
					
				}
				else
				{
					cout<<"[]";
					
				}
				cout<<tasks[i].discription<<endl;
				}
				cout<<endl;
			}
			else if(choice==3)
			{
				cout<<"enter the task number which are done:";
				int tasknumber;
				cin>>tasknumber;
				if(tasknumber > 0 && tasknumber<=numTasks)
				{
					tasks[tasknumber-1].isdone=true;
					cout<<"Task marked as done."<<endl;
				}
				else
				{
					cout<<"wrong task number"<<endl;
				}
				cout<<endl;
			}
			else if (choice==4)
			{
				int del_task=0;
				cout<<"enter the task number which you want to remove:";
				cin>>del_task;
				if(del_task<0 || del_task>100)
				{
					cout<<"you enter the wrong task number"<<endl;
					break;
				}
				for(int i=del_task;i<numTasks;i++)
				{
					tasks[i]=tasks[i+1];
				}
				numTasks=numTasks-1;
			
			}
			else if (choice==5)
			{
				cout<<"happy ending "<<"Goodbye"<<endl;
				break;
			}
			else
			{
				cout<<"wrong choice, please type right choice"<<endl;
			}
		}
		return 0;
	}


