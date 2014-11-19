//A complete program
/*ID block  ---------------------------------------+
+ Programmer : 	Davis Yi           		+
+ Course     : 	Computer Science 1    	+
+ Assignment : 	Assignment #1       	+
+ Due Date   : 	March 17, 2009          	+
+----------------------------------------------------*/
/*              Program statement
*  This program will calculate Total ticket sales after each game and also donation of 10% of the proceed to charaty
*
************************ Analysis *****************************	
 1. Data needed
	Number of four different types of tickets that sold. 
 2. Constants given
 	They donate 10% from the total ticket sales price for each game
	The have four different types of ticket : Box($500), Sideline ($250), Premium ($150), General Admission ($50)
3. Calculations
	1) Calculate the price: Number of $500 Tickets sold * $500
 	2) Calculate the price: Number of $250 Tickets sold * $250
	3) Calculate the price: Number of $150 Tickets sold * $150
	4) Calculate the price: Number of $50 Tickets sold * $50

	5) Calculate the number of total tickets sold : Number of 500$ tickets sold+ Number of 250$ tickets sold+ Number of 150$ tickets sold+ Number of 50$ tickets sold

	6) Calculate the total price of ticket sold : Total Price of $500 ticket sold + Total Price of $250 tickets sold + Total Price of $150 tickets sold + Total Price of $50 tickets sold 

	7) Calculate the 10% Donation from the total price : Total price * (10/100)
	8) Calculate the net profit: Total Price earn ?10% donation

 4. Print results
	Number of each types of tickets sold
	Price of each types of tickets sold
	Total number of Tickets sold
	Total price of Tickets sold
	Donation to Charity
	Net profits(total price ?Donation)
	“Prices must be show up to 2 decimal points?
 

 
************************ Algorithm *****************************	
Step 1
Input
Iomanip ?Decimal points up to 2
Number of each types of ticket sold (float)
	1) Box ticket (Box_tik)
	2) Sideline Ticket (Side_tik)
	3) Premium (Prem_tik)
	4) General Admission (GA_tik)
Constant float
1)	10% of donation Charity (Don_rate = .01f)
2)	Each Box ticket price (Box_pri = 500)
3)	Each Side ticket price (Side_pri = 250)
4)	Each Premium ticet price (Prem_pri = 150)
5)	Each General Admission ticket price (GA_pri = 50)
Step 2
Process
Price of Box ticket : Total_Box_pri= Box_tik * 500
Price of Sideline ticket : Total_Side_pri= Side_tik * 250
Price of Premium ticket : Total_Prem_pri= Prem_tik * 150
Price of General Admission ticket : Total_GA_pri = GA_tik * 50

Total number of ticket sold : Total_tik_sold = Box_tik +Side_tik +Prem_tik +GA_tik
Total Price of all : Total_tik_pri = Total_Box_pri+ Total_Side_pri+ Total_Prem_pri+ Total_GA_pri
Donation of Charity : Don = Total_tik_pri*(.1)
Net Profit : Net_pro= Total_tik_pri-Don

Step 3
Output
Print Number of each types of ticket sold on line 1~4
Print Profit of each types of ticket sold on line 6~7
Print Total Number of ticket sold on line 9 
Print Total Sale amount on line 10
Print price of Donation to Charaty on line 11
Print Net profits on line 12
************************ End of Algorithm *****************************/	
 
/************ Code segment *******************************************/
//A complete program
/*ID block  ---------------------------------------+
+ Programmer : 	Davis Yi           		+
+ Course     : 	Computer Science 1    	+
+ Assignment : 	Assignment #1         	+
+ Due Date   : 	March 17, 2009             +
+----------------------------------------------------*/



#include <iostream>  // Input/Output operations
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	/*  Declare Variables *******/
        float Box_tik, Side_tik, Prem_tik, GA_tik, Total_Box_pri, Total_Side_pri, Total_Prem_pri, Total_GA_pri, Total_tik_sold, Total_tik_pri, Don, Net_pro;
        const float Don_rate=0.1f, Box_pri=500, Side_pri=250, Prem_pri=150, GA_pri=50;
		cout<<setprecision(2)<<fixed;

/*** Input Section   ******/
	 cout<<"Please enter number of $500 tickets sold : ";
	cin>>Box_tik;
	cout<<"Please enter number of $250 tickets sold : ";
	cin>>Side_tik;
	cout<<"Please enter number of $150 tickets sold : ";
	cin>>Prem_tik;
	cout<<"Please enter number of $50 tickets sold : ";
	cin>>GA_tik;
/**** Processing section *******/
Total_Box_pri= Box_tik * Box_pri;
Total_Side_pri= Side_tik * Side_pri;
Total_Prem_pri= Prem_tik * Prem_pri;
Total_GA_pri = GA_tik * GA_pri;
Total_tik_sold = Box_tik +Side_tik +Prem_tik +GA_tik;
Total_tik_pri = Total_Box_pri+Total_Side_pri+Total_Prem_pri+Total_GA_pri;
Don = Total_tik_pri*Don_rate;
Net_pro= Total_tik_pri-Don;


/******* Output section *******/
cout<<left<<"\n\n"<<setprecision(0)<<setw(6)<<Box_tik<<setprecision(2)<<setw(64)<<"Box tickets at $500 each were sold for a total of:"<<"$"<<Total_Box_pri<<endl;
cout<<setprecision(0)<<setw(6)<<Side_tik<<setprecision(2)<<setw(64)<<"Side tickets at $250 each were sold for a total of:"<<"$"<<Total_Side_pri<<endl;
cout<<setprecision(0)<<setw(6)<<Prem_tik<<setprecision(2)<<setw(64)<<"Premium tickets at $150 each were sold for a total of:"<<"$"<<Total_Prem_pri<<endl;
cout<<setprecision(0)<<setw(6)<<GA_tik<<setprecision(2)<<setw(64)<<"General Admission tickets at $50 each were sold for a total of:"<<"$"<<Total_GA_pri<<endl;

cout<<"\n\n"<<setw(30)<<"Total Number of Tickets Sold:"<<setprecision(0)<<Total_tik_sold<<setprecision(2)<<endl;
cout<<setw(30)<<"Total Sale Amount:"<<"$"<<Total_tik_pri<<endl;
cout<<setw(30)<<"Donation to charity:"<<"$"<<Don<<endl;a	
cout<<setw(30)<<"Net Proceeds:"<<"$"<<Net_pro<<endl;

return(0);
}
