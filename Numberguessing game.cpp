#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string name;
	char input ;
	int inputuser;
	int score;
	cout <<"Enter the name     ";
	getline(cin,name);
	cout<<endl;
	do
	{
	srand(0);
	int variable=rand()%10+1;
	cout<<"enter the  guess number between 1 to 10     ";
	cin>>inputuser;
	cout<<endl;
	if(inputuser==variable)
	   {
		cout<<"Congratulations ! You guessed the corret number "<<endl;
		score++;
		}
		else
		{
			cout<<"Sorry, you guessed wrong number Try again"<<endl;
			}	
			cout<<"would you like to try again Y or n      ";
			cin>>input;
			cout<<endl;
	}
	while(input!= 'n');
	cout<<"Your score is     "<<score<<endl;
	cout<<"Game over"<<endl;
}
