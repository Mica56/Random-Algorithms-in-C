/* 
	A collection of random algorithms like selection sort, simple rounding-off function
	and a basketball scoring algorithm in C
*/
//libraries/header formats  used
#include <stdio.h> 
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
float result(float input);

//initialization
 int ctr;
//declaration for the delay
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
//declaration for gotoxy function
COORD c = {0, 0};
void gotoxy (short x, short y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void bubble(){
	int i, temp, ctr2, n=1, x=78, y=14, width=60, length=20;
	int num[10]={5, 4, 3, 1, 2};
	
	  //Top border line...
 gotoxy(44,10);
 for(ctr=0; ctr<width; ctr++)
  {printf("%c", 223);
  delay(10);
  }

   //Left and Right border line...
 for(ctr=0; ctr<length; ctr++)
 {
  gotoxy(44,10+ctr);
  printf("%c",219);

  gotoxy(44+width,10+ctr);
  printf("%c",219);
  delay(10);
 }

 //Bottom border line...
 gotoxy(44, 10+length);
 for(ctr=0; ctr<=width; ctr++)
  {printf("%c", 223);
  delay(10);
  }
  
	gotoxy(48,12);
	printf("The 5 randomized numbers are:");
	
	for(ctr=0;ctr<=4;ctr++){
		delay(10);
		gotoxy(x, 12);
		printf(" %d", num[ctr]);//outputs the fixed  values
		x+=2;
	}
	
	for(ctr=0;ctr<5;ctr++){//sorts the values in ascending order
		for(i=0;i<4;i++){
			if(num[i]>num[i+1]){
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
		}
		delay(10);
		gotoxy(48, y);
		printf("%d pass: %d, %d, %d, %d, %d", n, num[0], num[1], num[2], num[3], num[4]);//outputs each pass
		++n;
		++y;
	}delay(10);
	gotoxy(48, 20);
	printf("The 5 numbers arranged in ascending order:");
	
	for(ctr=0;ctr<5;ctr++){
		gotoxy(x+2, 20);
		printf(" %d", num[ctr]);//outputs the arranged values ascendingly
		x+=2;
	}
	n=1;
	
		for(ctr=0;ctr<5;ctr++){//sorts the values in descending order
		for(i=0;i<4;i++){
			if(num[i]<num[i+1]){
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
		}
		delay(10);
		gotoxy(48, y+3);
		printf("%d pass: %d, %d, %d, %d, %d", n, num[0], num[1], num[2], num[3], num[4]);//outputs each pass
		++n;
		++y;
	}delay(10);
	gotoxy(48, 28);
	printf("The 5 numbers arranged in descending order:");

	for(ctr=0;ctr<5;ctr++){
		delay(10);
		gotoxy(x-7, 28 );
		printf(" %d", num[ctr]);//outputs the values descendingly
		x+=2;
	}
}
void balloon(){
	int ctr2, temp, n=1, x=78, y=14, width=60, length=20;
	int num[10]={5, 4, 3, 1, 2};
	
	//Top border line...
 gotoxy(44,10);
 for(ctr=0; ctr<width; ctr++)
  {printf("%c", 223);
  delay(10);
  }

   //Left and Right border line...
 for(ctr=0; ctr<length; ctr++)
 {
  gotoxy(44,10+ctr);
  printf("%c",219);

  gotoxy(44+width,10+ctr);
  printf("%c",219);
  delay(10);
 }

 //Bottom border line...
 gotoxy(44, 10+length);
 for(ctr=0; ctr<=width; ctr++)
  {printf("%c", 223);
  delay(10);
  }
	gotoxy(48,12);
	printf("The 5 randomized numbers are:");
	
	for(ctr=0;ctr<=4;ctr++){
		delay(10);
		gotoxy(x, 12);
		printf(" %d", num[ctr]);//outputs the fixed values
		x+=2;
	}
	
	for(ctr=0;ctr<5;ctr++){
		for(ctr2=ctr+1;ctr2<5;ctr2++){//sorts the values in ascending order
			if(num[ctr]>num[ctr2]){
				temp=num[ctr];
				num[ctr]=num[ctr2];
				num[ctr2]=temp;
			}
		}
		delay(10);
		gotoxy(48, y);
		printf("%d pass: %d, %d, %d, %d, %d", n, num[0], num[1], num[2], num[3], num[4]);//outputs each pass
		++n;
		++y;
	}delay(10);
	gotoxy(48, 20);
	printf("The 5 numbers arranged in ascending order:");
	
	for(ctr=0;ctr<5;ctr++){
		gotoxy(x+2, 20);
		printf(" %d", num[ctr]);//outputs the values ascendingly
		x+=2;
	}
	n=1;
	
		for(ctr=0;ctr<5;ctr++){
		for(ctr2=ctr+1;ctr2<5;ctr2++){//sorts the values in descending values
			if(num[ctr]<num[ctr2]){
				temp=num[ctr];
				num[ctr]=num[ctr2];
				num[ctr2]=temp;
			}
		}
		delay(10);
		gotoxy(48, y+3);
		printf("%d pass: %d, %d, %d, %d, %d", n, num[0], num[1], num[2], num[3], num[4]);//outputs each pass
		++n;
		++y;
	}delay(10);
	gotoxy(48, 28);
	printf("The 5 numbers arranged in descending order:");

	for(ctr=0;ctr<5;ctr++){
		delay(10);
		gotoxy(x-7, 28 );
		printf(" %d", num[ctr]);//outputs the values descendingly
		x+=2;
	}
}
void rounding(){
	float x;
	int height1=13, width1=71;

  //Left and Right border line...
 for(ctr=0; ctr<height1; ctr++)
 {
  gotoxy(49,11+ctr);
  printf("%c",219);

  gotoxy(49+width1,11+ctr);
  printf("%c",219);
  delay(10);
 }
 //Bottom border line...
 gotoxy(49, 11+height1);
 for(ctr=0; ctr<=width1; ctr++)
  {printf("%c", 223);
  delay(10);
  } 	

		
	gotoxy(50,11);
    printf("======================================================================");

    gotoxy(80,13 );
    printf("ROUNDING OFF"); 

    gotoxy(50, 15);
    printf("======================================================================"); 
    
		gotoxy(55, 17);
		printf("Input floating-point value: ");
		scanf("%f", &x);//inputs the value of x
		gotoxy(55, 20);
		printf("The rounded off value up to 6 decimal places is %f.", result(x)*0.01);//calls the function result(input)
	
}
float result(float input){
		int temp;
		input*=100;//multiplied by 100 to move the decimal to the right in 2 places
		temp=input;//gets the value of input and converting it to integer value
		if(input-temp>=0.5)//condition for rounding off
		temp++;
		input=temp;//gets the value of int temp and converting it to float value
		
		return input;//returns the value of input
	}
void basketball(){
	int ateam[12]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, bteam[12]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, player, score, atpoints=0, btpoints=0, ahscorer=0, bhscorer=0, mvp, x=57, ctr1, j, k, l, m, width=45, length=6, amax=0, bmax=0, hereme;
	char team, choice, teamscorer;
	
	gotoxy (35,0);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BASKETBALL \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ");
	
	here:
	printf("\n\nTeam (A or B):");
	scanf(" %c", &team);//gets the inputted character
	if(team=='A'||team=='a'){//if 'A' or 'a', the player number and points will be stored in the ateam[] array
	printf("\nPlayer (1 - 12):");
	scanf("%d", &player);
	if(player<1||player>12){
		printf("Invalid data.");
		goto here;
	}
	printf("\nPoints (1, 2, or 3):");
	scanf("%d", &score);
	if(score<1||score>3){
		printf("Invalid data.");
		goto here;
	}
	ateam[player-1]+=score;
	atpoints+=score;//calculates the total score of team a
	}
	else if(team=='B'||team=='b'){//if 'B' or 'b', the player and number will be stored in the bteam[] array
	printf("\nPlayer (1 - 12):");
	scanf("%d", &player);
	if(player<1||player>12){
		printf("Invalid data.");
		goto here;
	}
	printf("\nPoints (1, 2, or 3):");
	scanf("%d", &score);
		if(player<1||player>12){
		printf("Invalid data.");
		goto here;
	}
	bteam[player-1]+=score;	
	btpoints+=score;//calculates the total score of team b
	}
	else
	printf("\nNo such team.");//printf "No such team" otherwise
	hereme:
	printf("\nEnd of the game? (Y/N)");
	scanf(" %c", &choice);//gets the character value of choice
	
	if(choice=='N'||choice=='n')//if answer is 'N' or 'n', goes back to inputting initial data
	goto here;
	
	else if(choice=='Y'||choice=='y')//if answer is 'Y' or 'y', goes to the scoreboard
	goto scoreboard;
	
	else
	printf("Invalid input.");//prints "Invalid Input" otherwise
	goto hereme;
	
	scoreboard:
		k=11;
	for(ctr1=0;ctr1<5;ctr1++){//first vertical line
		  gotoxy(46,k);
  		  printf("%c", 179);
  		  ++k;
	  	}
		j=55;
	for(ctr=0;ctr<13;ctr++)//vertical divider of the table
  		{k=11;
		  for(ctr1=0;ctr1<5;ctr1++){
		  gotoxy(j,k);
  		  printf("%c", 179);
  		  ++k;
	  	}j+=4;
	  }
	  m=11;
		for(ctr=0;ctr<2;ctr++)//horizontal divider of the table
		{l=46;
		for(ctr1=0;ctr1<66;ctr1++){
		gotoxy(l,m);
		printf("%c", 196);
		++l;
		}m+=4;
		}
	k=12;
	for(ctr1=0;ctr1<3;ctr1++){//last vertical line
		  gotoxy(111,k);
  		  printf("%c", 179);
  		  ++k;
	  	}
	
	gotoxy(48,12);
	printf("Player");
	for(ctr=1;ctr<=12;ctr++){//prints the player numbers
		gotoxy(x,12);
		printf("%d", ctr);
		x+=4;
	}x=57;
	gotoxy(48,13);
	printf("Team A");
	for(ctr=0;ctr<12;ctr++){
		gotoxy(x,13);
		printf("%d", ateam[ctr]);//outputs the score of each players for team a
		x+=4;
	}
	x=57;
	gotoxy(48, 14);
	printf("Team B");
	for(ctr=0;ctr<12;ctr++){
		gotoxy(x,14);
		printf("%d", bteam[ctr]);//outputs the score of each players for team b
		x+=4;
	}
	gotoxy(105,12);
	printf("Total");
	gotoxy(106,13);
	printf("%d", atpoints);//outputs the total score of team a
	gotoxy(106,14);
	printf("%d", btpoints);//outputs the total score of team b
	
	gotoxy(72, 17);
	printf("Summary Report");
	//Border lines of the summary report
	//Top border line...
 gotoxy(56,20);
 for(ctr=0;ctr<width;ctr++)
  {printf("*");
  delay(10);
  }

   //Left and Right border line...
 for(ctr=0;ctr<length;ctr++)
 {
  gotoxy(56,20+ctr);
  printf("*");

  gotoxy(56+width,20+ctr);
  printf("*");
  delay(10);
 }

 //Bottom border line...
 gotoxy(56, 20+length);
 for(ctr=0;ctr<=width;ctr++)
  {printf("*");
  delay(10);
  } 
	if(atpoints>btpoints)//conditions on which team wins the game
	{gotoxy(58,21);
	printf("Winning Team: A");
	}
	else if(atpoints<btpoints)
	{gotoxy(58,21);
	printf("Winning Team: B");
	}
	else
	{gotoxy(58,21);
	printf("Winning Team: DRAW");
	}
	
	for(ctr=0;ctr<12;ctr++){
		if(ateam[ctr]>amax)
		{amax=ateam[ctr];
		ahscorer=ctr;//gets the highest scorer of team a
		}
		if(bteam[ctr]>bmax)
		{bmax=bteam[ctr];
		bhscorer=ctr;//gets the highest scorer of team b
		}
		if(atpoints>btpoints)//if team a has the highest total points, mvp is the highest scorer from team a
			{mvp=ahscorer;
			 teamscorer='A';
			}
			else if(atpoints<btpoints)//if team b has the highest total points, mvp is the highest scorer from team b
			{mvp=bhscorer;
			 teamscorer='B';
			}
			else//if team a and team b total points are tie, the mvp will be which one of the highest scorer  from each team is the highest
				{if(ahscorer>bhscorer)
				{mvp=ahscorer;
			 	 teamscorer='A';
				}
				else
				{mvp=bhscorer;
			 	 teamscorer='B';
				}
				}	
	}
	gotoxy(58,22);
	printf("MVP: Player %d from team %c", mvp+1, teamscorer);//outputs the mvp
	if(atpoints<=0)
	{gotoxy(58,23);
	printf("Highest Scorer for Team A: None");//if team a has 0 points, there is no highest scorer
	}
	else
	{gotoxy(58,23);
	printf("Highest Scorer for Team A: Player %d", ahscorer+1);//outputs the highest scorer for team a
	}
	if(btpoints<=0)
	{gotoxy(58,24);
	printf("Highest Scorer for Team B: None");//if team b has 0 points, there is no highest scorer
	}
	else
	{gotoxy(58,24);
	printf("Highest Scorer for Team B: Player %d", bhscorer+1);//outputs the highest scorer of team b
	}
}
void welcome(){
	int m=45, n=6;
	//Welcome..W
	for(ctr=0;ctr<5;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	++n;
	delay(12);	
	}
	for(ctr=0;ctr<3;ctr++){
	gotoxy(m,n);
	printf("*");
	--n;
	++m;
	delay(12);
	}
	for(ctr=0;ctr<3;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	++m;
	delay(12);
	}
	for(ctr=0;ctr<6;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	--n;
	delay(12);	
	}
	m+=2;
	++n;
	//E..
	for(ctr=0;ctr<6;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	n-=6;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	m-=8;
	n+=2;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	m-=8;
	n+=3;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	++m;
	n-=5;
	//L..
	for(ctr=0;ctr<6;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	n-=1;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	++m;
	n-=3;
	//C..
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	++m;
	n-=3;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	--n;
	delay(12);
	}
	n+=5;
	m-=2;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	++n;
	delay(12);
	}
	++m;
	n-=6;
	for(ctr=0;ctr<3;ctr++){
	gotoxy(m,n);
	printf("*");
	n+=5;
	gotoxy(m,n);
	printf("*");
	n-=5;
	m+=2;
	delay(12);
	}
	n+=2;
	++m;
	//O..
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	++m;
	n-=3;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	--n;
	delay(12);
	}
	n+=5;
	m-=2;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	++n;
	delay(12);
	}
	++m;
	n-=6;
	for(ctr=0;ctr<3;ctr++){
	gotoxy(m,n);
	printf("*");
	n+=5;
	gotoxy(m,n);
	printf("*");
	n-=5;
	m+=2;
	delay(12);
	}
	++n;
	--m;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	++n;
	delay(12);
	}
	++n;
	m-=2;
	for(ctr=0;ctr<2;ctr++){
	gotoxy(m,n);
	printf("*");
	++m;
	--n;
	delay(12);
	}
	m+=2;
	n+=3;
	//M..
	for(ctr=0;ctr<5;ctr++){
	gotoxy(m,n);
	printf("*");
	--n;
	delay(12);
	}
	++m;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	++m;
	delay(12);
	}
	n-=2;
	for(ctr=0;ctr<3;ctr++){
	gotoxy(m,n);
	printf("*");
	--n;
	++m;
	delay(12);
	}
	n+=2;
	for(ctr=0;ctr<5;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	m+=3;
	n-=6;
	//E..
	for(ctr=0;ctr<6;ctr++){
	gotoxy(m,n);
	printf("*");
	++n;
	delay(12);
	}
	n-=6;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	m-=8;
	n+=2;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
	m-=8;
	n+=3;
	for(ctr=0;ctr<4;ctr++){
	gotoxy(m,n);
	printf("*");
	m+=2;
	delay(12);
	}
}
int main()
{ int ITEM, width1=32, length1=17;
 Menu://the menu options
 welcome();
 gotoxy(80,16);
 printf("MENU");
 gotoxy(72,18);                      
 printf("(1) Bubble Sorting");
 gotoxy(72,20);
 printf("(2) Balloon Sorting");
 gotoxy(72,22);
 printf("(3) Rounding-Off");
 gotoxy(72,24);
 printf("(4) Basketball Scoreboard");
 gotoxy(72,26);
 printf("(5) Exit");

  //Top border line...
 gotoxy(68,14);
 for(ctr=0; ctr<width1; ctr++)
  {printf("%c", 223);
  delay(20);
  }

   //Left and Right border line...
 for(ctr=0; ctr<length1; ctr++)
 {
  gotoxy(68,14+ctr);
  printf("%c",219);

  gotoxy(68+width1,14+ctr);
  printf("%c",219);
  delay(20);
 }

 //Bottom border line...
 gotoxy(68, 14+length1);
 for(ctr=0; ctr<=width1; ctr++)
  {printf("%c", 223);
  delay(20);
  } 
 system("COLOR 1");	//setting the color of the system to blue after the box appears
 gotoxy(72,29);
 printf("What would you choose?");
 fflush(stdin); 
 scanf(" %d", &ITEM);//gets the user's choice
 system("cls");
 if(ITEM>=1&&ITEM<=5){//if user inputs integer values 1 - 5
 switch (ITEM)
 {
 	case 1:
 		bubble();//goes to bubble sorting function
 		getch();
 		system("cls");//clear screen
 		system("COLOR 7");//setting the color of the system to white/default 
		goto Menu;
 		break;

 	case 2:
 		balloon();//goes to balloon sorting function
 		getch();
 		system("cls");//clear screen
 		system("COLOR 7");//setting the color of the system to white/default
 		goto Menu;
 		break;

 	case 3:
 		rounding();//goes to rounding-off function
 		getch();
 		system("cls");//clear screen
 		system("COLOR 7");//setting the color of the system to white/default
 		goto Menu;
 		break;
 		
 	case 4:
 		basketball();//goes to basketball scoreboard function
 		getch();
 		system("cls");//clear screen
 		system("COLOR 7");//setting the color of the system to white/default
 		goto Menu;
 		break;
 		
 	case 5:
 		return 0;//exits the program		
 }
}
 else{//if user inputted values not integers 1-5, outputs invalid input and goes back to menu
 	printf("Invalid input.");
	system("cls");
	system("COLOR 7");
	goto Menu;
 }
 getch();
 return 0;//end
}
