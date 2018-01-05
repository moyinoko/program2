/*   program2.cpp
     MASH
	 Moyinoluwa Ojo
	 This program is to play the game MASH.
     03/03/17
*/	

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 
int  main()
{
 

  //Variables 
   int choice;                  //1 to Play the Game 2 to End
   string personLike1;
   string personLike2;
   string personHate;
   int number1;
   int number2;
   int number3;
   string cityState1;
   string cityState2;
   string cityHate;
   string jobAweTitle;
   string jobAweTitle2;
   string jobWorseTitle;
   string companyLike;
   string companyLike2;
   string companyHate;
   float num1;
   float num2;
   float num3;
   string carLike1;
   string carLike2;
   string carHate;
   int randomInt;


   //Results
   
   string live;
   string marry;
   int children;
   string city;
   string company;
   string job;
   float salary;
   string car;

    srand((unsigned)time(0)); //Random Number Generator
   //Menu Phase
   
  
   cout << "Pick from the following menu:\n";
    cout << "1.  Let's play MASH!\n";
	cout << "2.  End program.\n";
	cin >> choice;
	cin.ignore();
while (choice < 1 || choice > 2)
	{	
		cout << "Invalid Choice. Select 1 or 2\n";
		
	    cin >> choice;
		cin.ignore();
	}
  
switch(choice)
{case 1 : cout << "Let's Play Mash";
          break; 
 case 2 : cout << "You chose to end the program.\n";
          
		  break;
}	 

//Question Phase
if (choice == 1)
{
 do
 {
 cout << "\nEnter in one person you like: ";
 
 getline(cin, personLike1);
  
  cout << "\nEnter in another person you like: ";
 
 getline(cin, personLike2);
 
 cout << "\nEnter in a person you hate: ";
 
 getline(cin, personHate);
 
 cout << "\nEnter three numbers between 1 and 100, seperated by a space.\n";
 cin >> number1 >> number2 >> number3;
 cin.ignore();
 while (number1 < 1 || number1 > 100)
	{	
		cout << "The first number you entered was invalid.\n";
		cout << "Enter a number between 1 and 100.\n";
	    cin >> number1;
		cin.ignore();
	}
	while (number2 < 1 || number2 > 100)
	{	
		cout << "The second number you entered was invalid.\n";
		cout << "Enter a number between 1 and 100.\n";
	    cin >> number2;
		cin.ignore();
	}
	while (number3 < 1 || number3 > 100)
	{	
		cout << "The third number you entered was invalid.\n";
		cout << "Enter a number between 1 and 100.\n";
	    cin >> number3;
		cin.ignore();
	}
 cout << "\nEnter in one city, state you like: ";
 getline(cin, cityState1); 
  cout << "\nEnter in another city, state you like: ";
 getline(cin, cityState2); 
 cout << "\nEnter in one city, state you hate: ";
 getline(cin, cityHate); 
  cout << "\nEnter in an awesome job title: ";
 getline(cin, jobAweTitle); 
  cout << "\nEnter in another awesome job title: ";
 getline(cin, jobAweTitle2); 
  cout << "\nEnter in the worst job title ever: ";
 getline(cin, jobWorseTitle); 
  cout << "\nEnter a company or restaurant you like: ";
 getline(cin, companyLike); 
   cout << "\nEnter another company or restaurant you like: ";
 getline(cin, companyLike2); 
  cout << "\nEnter a company or restaurant you hate: ";
 getline(cin, companyHate); 
 
 cout << "\nEnter three numbers between 10,000 and 500,000, seperated by a space:\n ";
 cin >> num1 >> num2 >> num3;
 cin.ignore();
 	while (num1 < 10000 || num1 > 500000)
	{	
		cout << "The first number you entered was invalid.\n";
		cout << "Enter a number between 10,000 and 500,000.\n";
	    cin >> num1;
		cin.ignore();
	}
	
	while (num2 < 10000 || num2 > 500000)
	{	
		cout << "The second number you entered was invalid.\n";
		cout << "Enter a number between 10,000 and 500,000.\n";
	    cin >> num2;
        cin.ignore();
	}

	while (num3 < 10000 || num3 > 500000)
	{	
		cout << "The third number you entered was invalid.\n";
		cout << "Enter a number between 10,000 and 500,000.\n";
	    cin >> num3;
		cin.ignore();
	}
  cout << "\nEnter in a car you like: ";
 getline(cin, carLike1); 
   cout << "\nEnter in another car you like: ";
 getline(cin, carLike2); 
  cout << "\nEnter in a car you hate: ";
 getline(cin, carHate);

//Results
cout << "\n\n******  MASH RESULTS  ******\n";
randomInt = (rand() % 4) + 1;
switch(randomInt)
{case 1 : live = "Mansion";
          break; 
 case 2 : live = "Apartment";
          break;
 case 3 : live = "Shack";
          break;
 case 4:  live = "House";	
          break ;
}	 

cout << "You will live in a " << live << ".\n";
randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : marry = personLike1;
          break; 
 case 2 : marry = personLike2;
          break;
 case 3 : marry = personHate;
          break;
 }	 

cout << "You will be happily married to " << marry << ".\n";

randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : children = number1;
          break; 
 case 2 : children = number2;
          break;
 case 3 : children = number3;
          break;
 }	 
cout << "You and your spouse will have " << children << " children.\n";

randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : city = cityState1;
          break; 
 case 2 : city = cityState2;
          break;
 case 3 : city = cityHate;
          break;
 }	 
cout << "You will live in " << city << ".\n";

randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : company = companyLike;
          break; 
 case 2 : company = companyLike2;
          break;
 case 3 : company = companyHate;
          break;
 }	
randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : job = jobAweTitle;
          break; 
 case 2 : job = jobAweTitle2;
          break;
 case 3 : job = jobWorseTitle;
          break;
 }
randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : salary = num1;
          break; 
 case 2 : salary = num2;
          break;
 case 3 : salary = num3;
          break;
 } 
cout << "You will work at " << company << " as a "<< job <<" making "<< salary << " a year.\n";

randomInt = (rand() % 3) + 1;
switch(randomInt)
{case 1 : car = carLike1;
          break; 
 case 2 : car = carLike2;
          break;
 case 3 : car = carHate;
          break;
 }	 
cout << "You will drive a " << car << ".\n";
cout << "\n\n";

   cout << "Pick from the following menu:\n";
    cout << "1.  Let's play MASH!\n";
	cout << "2.  End program.\n";
	cin >> choice;
	cin.ignore();
while (choice < 1 || choice > 2)
	{	
		cout << "Invalid Choice. Select 1 or 2\n";
		
	    cin >> choice;
		cin.ignore();
	}
  
switch(choice)
{case 1 : cout << "Let's Play Mash";
          break; 
 case 2 : cout << "You chose to end the program.\n";
          
		  break;
 }
 }	while (choice == 1);

 }

 if (choice == 2)
{cout << "Bye!";
 }
    return 0;
}