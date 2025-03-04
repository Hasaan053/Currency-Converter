#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
class A
{
	private:
		char option, n;
		string current_currency, new_currency;
		long double amount, total;
public:	
A()
{
	option = ' ';
			current_currency = " ";
			new_currency = " ";
			amount=0; total=0;
}
	void wellcome();
	void introduction();
	void menu();
	void choosecountry();
	void display();
 void DLT();
};
void A::wellcome()
{ 
	cout << "\n\n\n";
    cout << "\n\t\t\t ================================================\n";
    cout << "\t\t\t @@                  WELCOME TO                @@\n";
    cout << "\t\t\t @@                                            @@\n";
    cout << "\t\t\t @@            currency Converter              @@\n";
    cout << "\t\t\t @@                                            @@\n";
    cout << "\t\t\t @@                    PROJECT                 @@\n";
    cout << "\t\t\t ================================================\n\n\n";
retry:
string user ;
	cout<<"\n\n\t\t\t\tEnter username = ";
	cin>>user;
 	string pass ="";
   char ch;
   cout <<"\n\n\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout<<'*';
      ch=_getch();
   }
	if(user == "IT" && pass == "uog") // apply condition to login system
	{
	cout<<"\n\n\n\n\n\n\n\n \t\t\t\t ********* PRESS ENTER  ************"<<endl; getch();
	}
else
{
cout<<"WRONG PASSWORD ............. TRY AGAIN!!!\n\n\n";
goto retry;
}

}
void A::introduction()
{
	cout << "\t\t ================================================";
	cout<<"\n\t\t\t|| DEVELOPED BY ||"<<endl;
	cout <<"\t\t\t\t\t\t  ================================================\n";
	cout<<"\t\t\t\t\t\t\t    Name's 		|| 		Roll_ No'S \n";
	
	
}
void A::display()
{
	system("cls");
	fstream file;
	file.open("new.txt",ios::in);
	if(!file){
		cout<<"File Not found";
	}
	else{
		file>>current_currency>>new_currency>>amount>>total;
		while(!file.eof()){
			cout<<"\n\n =================================================\n";
			cout<<"\t || Current Currency \t"<<current_currency<<endl;
			cout<<"\t || New Currency \t"<<new_currency;
			cout<<"\n\t|| Enter Amount \t "<<amount;
			cout<<"\n\t|| Conversion Currency \t"<<total;
			cout<<"\n\n =================================================\n\n\n";
			file>>current_currency>>new_currency>>amount>>total;
		}

		file.close();
		}
}
void A::DLT(){
	fstream file;
	file.open("new.txt",ios::out);
	if(!file){
		cout<<"File Not found";
	}
	else{
		remove("new.txt");
		cout<<"\n\t All Entries cleared succesfully \n\n\n\n";
	}
	file.close();
}

void A::choosecountry()
{
	A a1;
	
menu:
		cout << "\t\t\t\t ==========================================================\n";
        cout << "\t\t\t\t ################::CURRENCY CONVERTER::################\n";
        cout << "\t\t\t\t ==========================================================\n\n\n";
	 cout<<"  if you want to select country then press Y/y \n  if you want to go back to the main menu then press N/n "<<endl;
	 cin>>n;
	 if (n == 'y' || n == 'Y')
	 { 
	system("cls");
			cout << "\t\t\t\t ==========================================================\n";
        cout << "\t\t\t\t ################::CURRENCY CONVERTER::################\n";
        cout << "\t\t\t\t ==========================================================\n\n\n";
 //declare variables
	 cout<<"\n Select the country From The Menu Which You Want To change the currency "<<endl;
     cout<<"\n\n\t========================================================";
	 cout<< "\n\n\t Australian Dollar(AUS) 	|	Bahraini Dinar(BHD)";
	 cout<<"\n\t Bangladesh Taka		|	 British pound(GBP)";
	 cout<<"\n\t canadian Dollar(CAD)		|	Chinese Yuan(CNY)";
	 cout<<"\n\t EURO(EUR)			|	HONGKONG Dollar(HKD)";
	 cout<<"\n\t India(INR)			|	Japanese Yen(JPY)";
	 cout<<"\n\t Kuwaiti Dinar(KWD)		|	NewZealand Dollar(NZD)";
	 cout<<"\n\t Omani Rial(OMR)		|	 Pakistan(PAK)";
	 cout<<"\n\t Singapore Dollar(SGD)		|	United_state(USD)";
	 cout<<"\n\n\t========================================================\n";
	 cout<<"\n \t From: \n\t*****************\n\t";
	 cin>>current_currency;
	 cout<<"\t*******************"<<endl;
	 system("cls");
	 		cout << "\t\t\t\t ==========================================================\n";
        cout << "\t\t\t\t ################::CURRENCY CONVERTER::################\n";
        cout << "\t\t\t\t ==========================================================\n\n\n";
	  cout<<" Select country which you want to convert \n"<<endl;
	 cout<<"\n\n\t==================================================";
	 cout<< "\n\n\t Australian Dollar(AUS) 	|	Bahraini Dinar(BHD)";
	 cout<<"\n\t Bangladesh Taka(BDT)		|	 British pound(GBP)";
	 cout<<"\n\t canadian Dollar(CAD)		|	Chinese Yuan(CNY)";
	 cout<<"\n\t EURO(EUR)			|	HONGKONG Dollar(HKD)";
	 cout<<"\n\t India(INR)			|	Japanese Yen(JPY)";
	 cout<<"\n\t Kuwaiti Dinar(KWD)		|	NewZealand Dollar(NZD)";
	 cout<<"\n\t Omani Rial(OMR)		|	 Pakistan(PAK)";
	 cout<<"\n\t Singapore Dollar(SGD)		|	United_state(USD)";
	 cout<<"\n\n\t===================================================\n";
	 cout<<"\n \t To: \n\t*****************\n\t";
	 cin>>new_currency;
	 cout<<"\t*****************\n";

cout<<"\n\t\t Enter Your Amount ====>>";
cin>>amount;
	fstream file;
	file.open("new.txt", ios::out | ios::app);
	 if (current_currency == "Bahrain" || current_currency == "bahrain" || current_currency == "BHD" || current_currency == "bhd")
	 {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
			cout<<"\n =======================================\n";
			total = amount / 0.377 ;
			 cout<<"Bahrani Dinar to US Dollar "<<setw(20) <<  total<<" $ " <<endl;
			 cout<<"\n =======================================\n";
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
		cout<<"\n =======================================\n";
		total =amount * 193.3678 ;
		 cout<<"bahraini Dinar To Indian Rupee "<<setw(20) << total<< " Rs " <<endl;
		cout<<"\n =======================================\n";
 		}
		else  if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 119.9720;
			 cout<<"Bahraini Dinar to Australian Dollar " <<total <<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else  if(new_currency == "pakitan" || new_currency == "Pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
			 cout<<"\n =======================================\n";
			 total =amount * 0.00241;
			 cout<<" Bahraini Dinar to pakistani Rupee " <<setw(20) <<total <<" BHD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else  if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
			 cout<<"\n =======================================\n";
			 total =amount * 0.53531;
			 cout<<" Bahraini Dinar to Bangladesh Taka " <<setw(20) <<total <<" BDT "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "British_pound" || new_currency == "gbp")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 218.533;
			 cout<<" Bahraini Dinar to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
			 cout<<"\n =======================================\n";
			 total =amount * 127.8180;
			 cout<<" Bahraini Dinar to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
	  	else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
			 cout<<"\n =======================================\n";
			 total =amount * 24.3415;
			 cout<<" Bahraini Dinar to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 189.462;
			 cout<<" Bahraini Dinar to EURO " <<setw(20) <<total<<" EUR "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 20.040;
			 cout<<" Bahraini Dinar to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 0.704;
			 cout<<" Bahraini Dinar to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
			 cout<<"\n =======================================\n";
			 total =amount / 0.387;
			 cout<<" Bahraini Dinar to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
			 cout<<"\n =======================================\n";
			 total = amount * 0.009;
			 cout<<" Bahraini Dinar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
			 cout<<"\n =======================================\n";
			 total =amount * 0.009;
			 cout<<" Bahraini Dinar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
		else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
			 cout<<"\n =======================================\n";
			 total = amount / 117.2573;
			 cout<<" Bahraini Dinar to Singapore Dollar " <<setw(20) << total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else
			{
			cout<<"You Entered Wrong new country  !................\n\n";
			}
	 }
		 // conversion of  Bangladesh currency to Other currencies 
else if (current_currency == "Bangladesh" || current_currency == "bangladesh" || current_currency == "BDT" || current_currency == "bdt")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
			 cout<<"\n =======================================\n";
			 total = amount / 84.7900 ;
			 cout<<" Bangladesh Taka to US Dollar "<<setw(20) <<total<<" $ " <<endl;
			 cout<<"\n =======================================\n";
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
			 cout<<"\n =======================================\n";
			  total = amount / 1.1560 ;
		 cout<<" Bangladesh Taka To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
		 cout<<"\n =======================================\n";
 		}
		else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 65.1679 ;
			 cout<<" Bangladesh Taka to Australian Dollar " <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 0.5427;
			 cout<<" Bangladesh Taka to pakistani Rupee " <<setw(20) <<total <<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 224.9668 ;
			 cout<<" Bangladesh Taka to Bahraini Dinar" <<setw(20) <<total<<" BDT "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 119.4057 ;
			 cout<<" Bangladesh Taka to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 69.5684 ;
			 cout<<" Bangladesh Taka to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
	    else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 13.2377;
			 cout<<" Bangladesh Taka to chinese Yuan  (CNY) " <<setw(20) <<total <<" RMB "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 102.8256 ;
			 cout<<" Bangladesh Taka to EURO " <<setw(20) <<total<<" EUR "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 10.9227;
			 cout<<" Bangladesh Taka to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 0.7703 ;
			 cout<<" Bangladesh Taka to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 282.0692;
			 cout<<" Bangladesh Taka to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 60.3874 ;
			 cout<<" Bangladesh Taka to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 220.2910 ;
			 cout<<" Bangladesh Taka to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
		else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 
		 {
			 cout<<"\n =======================================\n";
			  total =amount / 63.8768 ;
			 cout<<" Bangladesh Taka to Singapore Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
			else
			{
				cout<<" You Enter Wrong country !!!!.................\n\n";
			}
}  
// conversion of British Pound into other currencies
else if (current_currency == "British" || current_currency == "british" || current_currency == "GBP" || current_currency == "gbp")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
			 cout<<"\n =======================================\n";
			 total= amount / 0.7101;
			 cout<<" British Pound (GBP) to US Dollar "<<setw(20) <<total <<" $ " <<endl;
			 cout<<"\n =======================================\n";
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
			 cout<<"\n =======================================\n";
			 total= amount * 103.2939 ;
		 cout<<" British Pound (GBP) To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
		 cout<<"\n =======================================\n";
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount / 0.5458 ;
			 cout<<" British Pound (GBP) to Australian Dollar " <<total<<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else if(new_currency == "Bahraini" || new_currency == "bahraini" || new_currency == "BHD" || new_currency == "bhd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount / 1.8841 ;
			 cout<<" British Pound (GBP) to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 119.4057 ;
			 cout<<" British Pound (GBP) to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 220.0394 ;
			 cout<<" British Pound (GBP) to Pakistani Rupee " <<setw(20) <<total<<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
			 cout<<"\n =======================================\n";
			 total=amount / 0.5826 ;
			 cout<<" British Pound (GBP) to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
	    else  if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 9.0201;
			 cout<<" British Pound (GBP) to chinese Yuan  (CNY) " <<setw(20) <<total <<" YEN "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 1.1612 ;
			 cout<<" British Pound (GBP) to EURO " <<setw(20) <<total<<" EUR "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 10.9318;
			 cout<<" British Pound (GBP) to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
			 cout<<"\n =======================================\n";
			 total=amount *  155.0204;
			 cout<<" British Pound (GBP) to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "Kuwaiti" || new_currency == "kuwaiti" || new_currency == "KWD" || new_currency == "kwd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount / 2.3623 ;
			 cout<<" British Pound (GBP) to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 1.9773  ;
			 cout<<" British Pound (GBP) to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
			 cout<<"\n =======================================\n";
			 total=amount / 1.8449;
			 cout<<" British Pound (GBP) to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	   
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
			 cout<<"\n =======================================\n";
			 total=amount * 1.8693 ;
			 cout<<" British Pound (GBP) to Singapore Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
	}
	else
	{
		cout<<"Tou Enter Wrong country............ Try Again..................>\n\n\n";
	}
}
//conversion of chinese yen into other countries
else if (current_currency == "Chinese" || current_currency == "chinese" || current_currency == "CNY" || current_currency == "cny")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
			 cout<<"\n =======================================\n";
			 total= amount / 6.3969 ;
			 cout<<" Chinese Yuan to US Dollar ===> "<<setw(20) <<total<<" $ " <<endl;
			 cout<<"\n =======================================\n";
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
			 cout<<"\n =======================================\n";
			  total= amount * 11.4540 ;
		 cout<<" Chinese Yuan To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
		 cout<<"\n =======================================\n";
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 4.9294 ;
			 cout<<" Chinese Yuan to Australian Dollar " <<total<<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount * 16.9724 ;
			 cout<<" Chinese Yuan to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
			 cout<<"\n =======================================\n";
			  total=amount * 13.2298 ;
			 cout<<" Chinese Yuan to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 9.0224;
			 cout<<" Chinese Yuan to British  Pounds " <<setw(20) <<total  <<" GBP "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 5.2602 ;
			 cout<<" Chinese Yuan to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
	     else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
			 cout<<"\n =======================================\n";
			  total=amount * 24.4650 ;
			 cout<<" Chinese Yuan to Pakistani Rupee  (PAK) " <<setw(20) <<total<<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else  if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 7.7501 ;
			 cout<<" Chinese Yuan to EURO " <<setw(20) <<total<<" EUR "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else  if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount * 1.2134 ;
			 cout<<" Chinese Yuan to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
			 cout<<"\n =======================================\n";
			  total=amount * 17.1802 ;
			 cout<<" Chinese Yuan to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else  if(new_currency == "Kuwaiti" || new_currency == "kuwaiti" || new_currency == "KWD" || new_currency == "kwd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 21.2804;
			 cout<<" Chinese Yuan to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 4.5666 ;
			 cout<<" Chinese Yuan to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 16.6196 ;
			 cout<<" Chinese Yuan to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
			 cout<<"\n =======================================\n";
			  total=amount / 4.8224;
			 cout<<" Chinese Yuan to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else
		{
		cout<<"You Entered Wrong new country!................\n\n";
		}
}
//conversion of EURO currency into other currency
else if (current_currency == "EURO" || current_currency == "euro" || current_currency == "EUR" || current_currency == "eur")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	cout<<"\n =======================================\n";
		 	total= amount * 1.2115 ;
			 cout<<" EURO to US Dollar "<<setw(20) <<total<<" $ " <<endl;
			 cout<<"\n =======================================\n";
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			cout<<"\n =======================================\n";
 			total= amount * 88.7691 ;
		 cout<<"EURO To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
		 cout<<"\n =======================================\n";
 		}
		else  if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 1.5722 ;
			 cout<<"EURO to Australian Dollar " <<total<<" RS "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount / 2.1900 ;
			 cout<<"EURO to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 102.5321 ;
			 cout<<"EURO to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount / 1.1642 ;
			 cout<<"EURO to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
			 cout<<"\n =======================================\n";
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 1.4733 ;
			 cout<<"EURO to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 7.7501 ;
			 cout<<"EURO to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 9.4042 ;
			 cout<<"EURO to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 133.1476 ;
			 cout<<"EURO to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount / 2.7458 ;
			 cout<<"EURO to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
			 cout<<"\n =======================================\n";
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 1.6971 ;
			 cout<<"EURO to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount / 2.1445 ;
			 cout<<"EURO to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }	 
		 else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	
		 	cout<<"\n =======================================\n";
		 	total= amount * 189.6050 ;
			 cout<<"EURO to Pakistani Rupee (Rs) "<<total<<" RS"<<endl;
			 cout<<"\n =======================================\n";
		 } 
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	cout<<"\n =======================================\n";
		 	total=amount * 1.6071 ;
			 cout<<"EURO to Singapore Dollar " <<setw(20) <<total<<" $ "<<endl;
			 cout<<"\n =======================================\n";
		 }
		 else
{
cout<<"You Entered Wrong new country!................\n\n";
}
}
//CONVERSION OF JAPANENI CURRENCY INTO OTHER COUNTRIES...............
else if (current_currency == "JAPANESE" || current_currency == "japanese" || current_currency == "JPY" || current_currency == "jpy")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount / 109.9000;
			 cout<<"Japanese Yen (JPY) to US Dollar "<<setw(20) <<total <<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount / 1.4999 ;
		 cout<<"Japanese Yen (JPY) To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount / 84.6883 ;
			 cout<<"Japanese Yen (JPY) to Australian Dollar " <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 291.5893 ;
			 cout<<"Japanese Yen (JPY) to Bahraini Dinar " <<setw(20) <<total <<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount / 1.2986 ;
			 cout<<"Japanese Yen (JPY) to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount / 155.0071 ;
			 cout<<"Japanese Yen (JPY) to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
		 }
		 else  if(new_currency == "canadian" || new_currency == "Canadian" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount / 90.3709;
			 cout<<"Japanese Yen (JPY) to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount / 17.1802 ;
			 cout<<"Japanese Yen (JPY) to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 133.1476 ;
			 cout<<"Japanese Yen (JPY) to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		  else  if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount / 14.1584 ;
			 cout<<"Japanese Yen (JPY) to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 365.6021;
			 cout<<"Japanese Yen (JPY) to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount / 78.4552;
			 cout<<"Japanese Yen (JPY) to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount /  285.5287;
			 cout<<"Japanese Yen (JPY) to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
		else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 1.4240 ;
			 cout<<"Japanese Yen (JPY) to Pakistani Rupee (RS) " <<setw(20) <<total <<" RS "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount / 82.8496;
			 cout<<"Japanese Yen (JPY) to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		 else
{
	cout<<"You Entered Wrong new country!................\n\n";
}
}
//CONVERSION OF KUWAITI CURRENCY INTO OTHER COUNTRIES...............
else if (current_currency == "KUWAIT" || current_currency == "kuwait" || current_currency == "KWD" || current_currency == "kwd")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount * 3.3267;
			 cout<<" Kuwaiti Dinar to US Dollar "<<setw(20) <<total <<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 243.7458;
		 cout<<" Kuwaiti Dinar Indian Rupee "<<setw(20) <<total << " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount * 4.3170 ;
			 cout<<" Kuwaiti Dinar to Australian Dollar "<<setw(20) <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount * 1.2538 ;
			 cout<<" Kuwaiti Dinar to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		 else  if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 281.5369;
			 cout<<" Kuwaiti Dinar to Bangladesh Taka " <<setw(20) <<total <<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount * 2.3586 ;
			 cout<<" Kuwaiti Dinar to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
		 }
		  else if(new_currency == "canadian" || new_currency == "Canadian" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount * 4.0456;
			 cout<<" Kuwaiti Dinar to canadian Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 221.2804 ;
			 cout<<" Kuwaiti Dinar to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount * 2.7458 ;
			 cout<<" Kuwaiti Dinar to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 25.8224 ;
			 cout<<" Kuwaiti Dinar to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 365.6021 ;
			 cout<<" Kuwaiti Dinar to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount * 4.6600 ;
			 cout<<" Kuwaiti Dinar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount * 1.2804 ;
			 cout<<" Kuwaiti Dinar to Omani Dinar (OMR) " <<setw(20) <<total<<" OMR "<<endl;
		 }	 
		  else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 520.6254 ;
			 cout<<"Kuwaiti Dinar (KWD) to Pakistani Rupee (RS) " <<setw(20) <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount * 4.4128;
			 cout<<" Kuwaiti Dinar to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		 else
{
	cout<<"You Entered Wrong new country!................\n\n";
}
}
//CONVERSION OF OMANI CURRENCY INTO OTHER COUNTRIES...............
else if (current_currency == "Oman" || current_currency == "oman" || current_currency == "OMR" || current_currency == "omr")
	  {
	  	if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
			
			total= amount * 2.5981 ;
			 cout<<" Omani Rial (OMR) to US Dollar "<<setw(20) <<total<<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 190.3611 ;
		 cout<<" Omani Rial (OMR) To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount * 3.3715 ;
			 cout<<" Omani Rial (OMR) to Australian Dollar " <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 1.0212;
			 cout<<" Omani Rial (OMR) to Bahraini Dinar " <<setw(20) <<total <<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 219.8753 ;
			 cout<<" Omani Rial (OMR) to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount * 1.8420 ;
			 cout<<" Omani Rial (OMR) to British  Pounds " <<setw(20) <<total  <<" GBP "<<endl;
		 }
		  else if(new_currency == "canadian" || new_currency == "Canadian" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount *  3.1595 ;
			 cout<<" Omani Rial (OMR) to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 16.6196 ;
			 cout<<" Omani Rial (OMR) to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount * 2.1445 ;
			 cout<<" Omani Rial (OMR) to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 20.1668 ;
			 cout<<" Omani Rial (OMR) to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 285.5287 ;
			 cout<<" Omani Rial (OMR) to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
		 }
		  else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 1.2804;
			 cout<<" Omani Rial (OMR) to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount * 3.6394 ;
			 cout<<" Omani Rial (OMR) to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		  else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 406.5991 ;
			 cout<<" Omani Rial (OMR) to Pakistani Rupee (RS) " <<setw(20) <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount * 3.4463 ;
			 cout<<" Omani Rial (OMR) to Singapore Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		 else
		{
			cout<<"You Entered Wrong new country!................\n\n";
			}
}  
//CONVERSION OF UNITED STATE DOLLAR INTO OTHER COUNTRIES...............
else if (current_currency == "united_state" || current_currency == "United_state" || current_currency == "US" || current_currency == "us")	
	 {
	if (new_currency == "pakistan" || new_currency == "Pakistan" || new_currency == "pak" || new_currency == "PAK")
		{
			total= amount * 156.5000 ;
		cout<<"Dollar to Pakistan "<<setw(50)<<total<<" RS " <<endl;
		}
	else if (new_currency == "Australian" || new_currency == "astralian" || new_currency == "AUSD" || new_currency == "ausd")
	{
		total= amount * 1.2977;
	cout<<" Dollar to Australian Dollar "<<setw(20) <<total <<"$"<<endl;
	}	
	else if (new_currency == "india" || new_currency == "India" || new_currency == "inr" || new_currency == "INR")
	{
		total=amount * 73.2700 ;
		 cout<<"Dollar to Indian Rupee "<<setw(50)<< total<<" INR "<<endl;
	}
	else if (new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
	{
		total=amount / 2.6532 ;
		cout<<"United State Dollar to Bahraini Dinar "<< setw(20) <<total<<" BHD"<<endl;
	}
	else if (new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
	{
		total=amount *  84.6300;
		cout<<"United State Dollar to Bangladesh taka "<< setw(20) <<total <<" BDT " <<endl;
	}
	else if (new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
	{
		total=amount / 1.4104  ;
		cout<<"United State Dollar to British Pounds "<< setw(20) <<total<<" GBP "<<endl;
	}
	else if (new_currency == "Canada" || new_currency == "canada" || new_currency == "CAD" || new_currency == "cad")
	{
		total=amount *  1.2161 ;
		cout<<"United State Dollar to Canadian Dollar "<< setw(20) <<total<<" $ "<<endl;
	}
	else if (new_currency == "Chinese" || new_currency == "chinese" || new_currency == "CNY" || new_currency == "cny")
	{
		total=amount * 6.3969 ;
		cout<<"United State Dollar to Chinese Yuan (CNY) "<< setw(20) <<total<<" CNY "<<endl;
	}	
	else if (new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
	{
		total=amount *  1.3265 ;
		cout<<"United State Dollar to Singapore Dollar (SGD) "<< setw(20) <<total<<" $ "<<endl;
	}
	else if (new_currency == "EURO" || new_currency == "euro" || new_currency == "EUR" || new_currency == "eur")
	{
		total=amount / 1.2115;
		cout<<"United State Dollar to EURO (EUR) "<< setw(20) <<total <<" EUR "<<endl;
	}	
	else if (new_currency == "Hongkong" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
	{
		total=amount * 7.7622 ;
		cout<<"United State Dollar to Hong kong Dollar (HKD) "<< setw(20) <<total<<" $ "<<endl;
	}	
	else if (new_currency == "Japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
	{
		total=amount * 109.9000 ;
		cout<<"United State Dollar to Japanese Yen ( JPY) "<< setw(20) <<total<<" JPY "<<endl;
	}	
	else if (new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
	{
		total=amount / 109.9000;
		cout<<"United State Dollar to Kuwaiti Dinar (KWD) ----> "<< setw(20) << total<<" KWD "<<endl;
	}	
	else if (new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" | new_currency == "nzd")
	{
		total= amount / 1.4008;
		cout<<"United State Dollar to New Zealand Dollar "<< setw(20) << total <<" $ "<<endl;
	}
	else if (new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
	{
		total=amount / 2.5981;
		cout<<"United State Dollar to Omani Rial (OMR) "<< setw(20) <<total  <<" OMR "<<endl;
	}
	else
		{
			cout<<"You Entered Wrong new country!................TRY AGAIN .....\n\n";
			}
	}
	
//conversion Pakistani Rupee to Other Country
	else if (current_currency == "pakistan" || current_currency == "Pakistan" || current_currency == "PAK" || current_currency == "pak")
	 {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount / 156.5000 ;
			 cout<<"Pakistani Rupee to US Dollar "<<setw(20) <<total<<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{	total= amount / 2.1359;
		 cout<<"Pakistan To Indian Rupee "<<setw(20) <<total << " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {	total=amount / 120.5980 ;
			 cout<<"Pakistani Rupee to Australian Dollar " <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {	total=amount / 415.2295 ;
			 cout<<"Pakistani Rupee to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 		total=amount / 1.8492 ;
			 cout<<"Pakistani Rupee to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 		total=amount / 220.7334;
			 cout<<"Pakistani Rupee to British  Pounds " <<setw(20) <<total  <<" GBP "<<endl;
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 		total=amount / 128.6901 ;
			 cout<<"Pakistani Rupee to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
	 	 else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 		total=amount / 24.4650;
			 cout<<"Pakistani Rupee to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 		total=amount / 189.6050 ;
			 cout<<"Pakistani Rupee to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 		total=amount / 20.1618;
			 cout<<"Pakistani Rupee to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 		total=amount / 1.4240 ;
			 cout<<"Pakistani Rupee to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 		total=amount / 520.6254 ;
			 cout<<"Pakistani Rupee to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 		total=amount /  111.7219 ;
			 cout<<"Pakistani Rupee to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }	 
			else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 		total=amount / 406.5991 ;
			 cout<<"Pakistani Rupee to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 		total=amount / 117.9796;
			 cout<<"Pakistani Rupee to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
}
// conversion of AUSTRALIAN into other Countries
else if (current_currency == "Australian" || current_currency == "australian" || current_currency == "AUSD" || current_currency == "ausd")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount / 1.3123 ;
			 cout<<" Australian Dollar to US Dollar "<<setw(20) <<total<<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 56.1819;
		 cout<<" Australian Dollar To Indian Rupee "<<setw(20) <<total << " Rs " <<endl;
 		}
		 else if(new_currency== " pakistan" || new_currency== " Pakistan" || new_currency== " PAK" || new_currency== " pak ")
		 {
		 	total=amount * 119.3706;
			 cout<<" Australian Dollar to Pakistani Rupee " <<total <<" RS "<<endl;
		 }
		else  if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 3.4818 ;
			 cout<<" Australian Dollar to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		 else  if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 64.6118;
			 cout<<" Australian Dollar to Bangladesh Taka " <<setw(20) <<total <<" BDT "<<endl;
		 }
		 else  if(new_currency == "Pound" || new_currency == "pound" || new_currency == "British_pound" || new_currency == "gbp")
		 {
		 	total=amount / 1.8362 ;
			 cout<<" Australian Dollar to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount / 1.0686;
			 cout<<" Australian Dollar to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 4.8977;
			 cout<<" Australian Dollar to chinese Yuan  (CNY) " <<setw(20) <<total <<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 1.5731;
			 cout<<" Australian Dollar to EURO " <<setw(20) <<total <<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 5.9172;
			 cout<<" Australian Dollar to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 84.33;
			 cout<<" Australian Dollar to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwaiti" || new_currency == "kuwaiti" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 4.3627;
			 cout<<" Australian Dollar to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount * 1.08;
			 cout<<" Australian Dollar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount / 3.4086 ;
			 cout<<" Australian Dollar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }	 
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount * 1.0190 ;
			 cout<<" Australian Dollar to Singapore Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
	  }
	  	 
//canadian Dollar into Other countries
	  else if (current_currency == "Canada" || current_currency == "canada" || current_currency == "CAD" || current_currency == "cad")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount / 1.2280 ;
			cout<<" Canadian  Dollar  to US Dollar "<<setw(20) <<total<<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 60.04 ;
		 cout<<" Canadian  Dollar To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount * 1.07 ;
			 cout<<" Canadian  Dollar to Australian Dollar " <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 3.2582 ;
			 cout<<" Canadian  Dollar to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 69.05 ;
			 cout<<" Canadian  Dollar to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
			 
			 total=amount / 1.7182  ;
			 cout<<" Canadian  Dollar to British  Pounds " <<setw(20) <<total<<" GBP "<<endl;
		 }
		  else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 127.59;
			 cout<<" Canadian  Dollar to Pakistani Rupee " <<setw(20) <<total <<" RS "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 5.24;
			 cout<<" Canadian  Dollar to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 1.4702 ;
			 cout<<" Canadian  Dollar to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 6.32;
			 cout<<" Canadian  Dollar to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 90.14 ;
			 cout<<" Canadian  Dollar to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 4.0818 ;
			 cout<<" Canadian  Dollar to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount / 4.0818;
			 cout<<" Canadian  Dollar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount / 3.1891 ;
			 cout<<" Canadian  Dollar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 } 
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount * 1.09;
			 cout<<" Canadian  Dollar to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
	  } 
	  //CONVERSION  of SINGAPORE DOLLAR INTO OTHER COUNTRIES.........
	  else if (current_currency == "singapore" || current_currency == "Singapore" || current_currency == "SGD" || current_currency == "sgd")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total=amount / 1.3433 ;
			 cout<<" Singapore Dollar to US Dollar "<<setw(20) << total<<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 55.2088 ;
		 cout<<" Singapore Dollar To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount / 1.0138;
			 cout<<" Singapore Dollar to Australian Dollar " <<total <<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount /  3.5641;
			 cout<<" Singapore Dollar to Bahraini Dinar " <<setw(20) <<total <<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 62.9941 ;
			 cout<<" Singapore Dollar to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount / 1.8683 ;
			 cout<<" Singapore Dollar to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount /  1.0871;
			 cout<<" Singapore Dollar to canadian Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 4.7999;
			 cout<<" Singapore Dollar to chinese Yuan  (CNY) " <<setw(20) <<total <<" YEN "<<endl;
		 }
		  else  if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 1.5988;
			 cout<<" Singapore Dollar to EURO " <<setw(20) <<total <<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 5.7798;
			 cout<<" Singapore Dollar to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 82.0740;
			 cout<<" Singapore Dollar to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 4.4643;
			 cout<<" Singapore Dollar to Kuwaiti Dinar " <<setw(20) <<total <<" KWD "<<endl;
		 }
		  else  if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount * 1.0638;
			 cout<<" Singapore Dollar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount / 3.4900 ;
			 cout<<" Singapore Dollar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		 else if(new_currency == "pakistan" || new_currency == "Pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total = amount * 116.6158;
			 cout<<" Singapore Dollar to Pakistani rupee (RS) " <<setw(20) <<total <<" RS "<<endl;
		 }	 
		 else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
}
//CONVERSION OF NEW ZEALAND DOLLAR INTO OTHER COUNTRIES.............
	else if (current_currency == "Newzealand" || current_currency == "newzealand" || current_currency == "NZD" || current_currency == "nzd")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount / 1.4290;
			 cout<<" New Zealand Dollar to US Dollar "<<setw(20) <<total <<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total= amount * 51.8978 ;
		 cout<<" New Zealand Dollar To Indian Rupee "<<setw(20) <<total<< " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount / 1.0785 ;
			 cout<<" New Zealand Dollar to Australian Dollar " <<total<<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 3.7915 ;
			 cout<<" New Zealand Dollar to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 59.2162 ;
			 cout<<" New Zealand Dollar to Bangladesh Taka " <<setw(20) <<total<<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount / 1.9875  ;
			 cout<<" New Zealand Dollar to British  Pounds " <<setw(20) <<total<<" GBP "<<endl;
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount / 1.1564 ;
			 cout<<" New Zealand Dollar to canadian Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 4.5120 ;
			 cout<<" New Zealand Dollar to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 1.7008 ;
			 cout<<" New Zealand Dollar to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount * 5.4332 ;
			 cout<<" New Zealand Dollar to Hong Kong Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		   if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 77.1519 ;
			 cout<<" New Zealand Dollar to Japanese Yen (jpy) " <<setw(20) <<total<<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 4.7491 ;
			 cout<<" New Zealand Dollar to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
		 }
		   else if(new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 109.6221 ;
			 cout<<" New Zealand Dollar to Pakistani Rupee (RS) " <<setw(20) <<total<<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount /  3.7127 ;
			 cout<<" New Zealand Dollar to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount / 1.0638;
			 cout<<" New Zealand Dollar to Singapore Dollar " <<setw(20) << total<<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
	  }	 
	  //CONVERSION OF INDIAN RUPEE INTO OTHER COUNTRIES...............
	  else if (current_currency == "India" || current_currency == "india" || current_currency == "INR" || current_currency == "inr")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total=amount / 074.1620;
			 cout<<" Indian Rupee  to US Dollar "<<setw(20) << total  <<" $ " <<endl;
		 }
 		else if (new_currency == "Pakistan" || new_currency == "pakistan" || new_currency == "PAk" || new_currency == "pak")
 		{
 			total=amount * 2.1123;
		 cout<<" Indian Rupee To Pakistani Rupee "<<setw(20) << total << " Rs " <<endl;
 		}
		 else if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount / 55.9713;
			cout<<"Pakistani Rupee to Australian Dollar " <<total <<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 196.7684 ;
			 cout<<" Indian Rupee to Bahraini Dinar " <<setw(20) <<total<<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 1.1410;
			 cout<<" Indian Rupee to Bangladesh Taka " <<setw(20) <<total <<" BDT "<<endl;
		 }
		  else if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount / 103.1460;
			 cout<<" Indian Rupee to British  Pounds " <<setw(20) <<total  <<" GBP "<<endl;
		 }
		  else if(new_currency == "canada" || new_currency == "Canada" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount / 60.0162;
			 cout<<" Indian Rupee to canadian Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount / 11.5021;
			 cout<<" Indian Rupee to chinese Yuan  (CNY) " <<setw(20) <<total <<" YEN "<<endl;
		 }
		   else if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total= amount / 88.2671 ;
			 cout<<" Indian Rupee to EURO " <<setw(20) <<total<<" EUR "<<endl;
		 }
		   else if(new_currency == "HONGKONG" || new_currency == "hongkong" || new_currency == "HKD" || new_currency == "hkd")
		 {
		 	total=amount / 9.5520;
			 cout<<" Indian Rupee to Hong Kong Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		   else if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 1.4866;
			 cout<<" Indian Rupee to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
		 }
		   else if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 246.4673 ;
			 cout<<" Indian Rupee to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount / 51.8978;
			 cout<<" Indian Rupee to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount / 192.6786 ;
			 cout<<" Indian Rupee to New Zealand Dollar " <<setw(20) <<total<<" $ "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount / 55.2088;
			 cout<<" Indian Rupee to Singapore Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
	  }
	  
	  else if (current_currency == "Hongkong" || current_currency == "hongkong" || current_currency == "HKD" || current_currency == "hkd")
	  {
 		if (new_currency == "united_state" || new_currency == "United_state" || new_currency == "US" || new_currency == "us")
		 {
		 	total= amount /  7.7640;
			 cout<<" Hong Kong Dollar to US Dollar "<<setw(20) <<total <<" $ " <<endl;
		 }
 		else if (new_currency == "India" || new_currency == "india" || new_currency == "inr" || new_currency == "INR")
 		{
 			total=amount * 9.5520;
		 cout<<" Hong Kong Dollar "<<setw(20) << total << " Rs " <<endl;
 		}
		else  if(new_currency== " Australian" || new_currency== " AUSD" || new_currency== " ausd")
		 {
		 	total=amount / 5.8596;
			 cout<<" Hong Kong Dollar to Australian Dollar " <<total <<" RS "<<endl;
		 }
		 else if(new_currency == "Bahrain" || new_currency == "bahrain" || new_currency == "BHD" || new_currency == "bhd")
		 {
		 	total=amount / 20.5996;
			 cout<<" Hong Kong Dollar to Bahraini Dinar " <<setw(20) <<total <<" BHD "<<endl;
		 }
		  else if(new_currency == "Bangladesh" || new_currency == "bangladesh" || new_currency == "BDT" || new_currency == "bdt")
		 {
		 	total=amount * 10.8990;
			 cout<<" Hong Kong Dollar to Bangladesh Taka " <<setw(20) <<total <<" BDT "<<endl;
		 }
		 else  if(new_currency == "Pound" || new_currency == "pound" || new_currency == "GBP" || new_currency == "gbp")
		 {
		 	total=amount / 10.7983 ;
			 cout<<" Hong Kong Dollar to British  Pounds " <<setw(20) <<total <<" GBP "<<endl;
		 }
		  else if(new_currency == "canadian" || new_currency == "Canadian" || new_currency == "CAD" || new_currency == "cad")
		 {
		 	total=amount / 6.2831;
			 cout<<" Hong Kong Dollar to canadian Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
	     else if(new_currency == "chinese" || new_currency == "Chinese" || new_currency == "CNY" || new_currency == "cny")
		 {
		 	total=amount * 1.2042 ;
			 cout<<" Hong Kong Dollar to chinese Yuan  (CNY) " <<setw(20) <<total<<" YEN "<<endl;
		 }
		  else  if(new_currency == "EURO" || new_currency == "EUR" || new_currency == "euro" || new_currency == "eur")
		 {
		 	total=amount / 9.2407;
			 cout<<" Hong Kong Dollar to EURO " <<setw(20) <<total <<" EUR "<<endl;
		 }
		   else if(new_currency == "pakistan" || new_currency == "Pakistan" || new_currency == "PAK" || new_currency == "pak")
		 {
		 	total=amount * 20.1765;
			 cout<<" Hong Kong Dollar to Pakistani Rupee " <<setw(20) <<total <<" RS "<<endl;
		 }
		  else  if(new_currency == "japanese" || new_currency == "japanese" || new_currency == "JPY" || new_currency == "jpy")
		 {
		 	total=amount * 14.2002;
			 cout<<" Hong Kong Dollar to Japanese Yen (jpy) " <<setw(20) <<total <<" jpy "<<endl;
		 }
		  else  if(new_currency == "Kuwait" || new_currency == "kuwait" || new_currency == "KWD" || new_currency == "kwd")
		 {
		 	total=amount / 25.8026 ;
			 cout<<" Hong Kong Dollar to Kuwaiti Dinar " <<setw(20) <<total<<" KWD "<<endl;
		 }
		   else if(new_currency == "Newzealand" || new_currency == "newzealand" || new_currency == "NZD" || new_currency == "nzd")
		 {
		 	total=amount * 5.4332;
			 cout<<" Hong Kong Dollar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }	 
  		else if(new_currency == "Oman" || new_currency == "oman" || new_currency == "OMR" || new_currency == "omr")
		 {
		 	total=amount * 20.1715;
			 cout<<" Hong Kong Dollar to New Zealand Dollar " <<setw(20) <<total <<" $ "<<endl;
		 }
		 else if(new_currency == "Singapore" || new_currency == "singapore" || new_currency == "SGD" || new_currency == "sgd")
		 {
		 	total=amount / 5.7798;
			 cout<<" Hong Kong Dollar to Singapore Dollar " <<setw(20) <<total  <<" $ "<<endl;
		 }
		  else
		 {
		 	cout<<"YOU ENTERED WRONG COUNTRY ................TRY AGAIN!!!!................."<<endl;
		 }
	  } 
	  
	  
	  
else
{
	cout<<"YOU ENTERED WRONG CURRENCT COUNTRY DATA !.......... PLEASE ENTER CORRECT DATA!!!......\n\n";
}
cout<<"\n\n\n\t\t =================================\n";
cout<<"\t\t Currency Record Is Saved "<<endl;
cout<<"\t\t =================================\n";
system("pause");
system("cls");
	
	file<<current_currency<<" "<<new_currency<<" "<<amount<<" "<<total<<"\n";
	file.close();
	goto menu;
	 }
	 else if(n == 'N' || n == 'n')
	 {
	 }
	 else
	 {
		cout<<"\n Choose Correct option ====>>>> \n\n\n"<<endl;
	 }
	
 }
void A::menu()
{
	A a1;
	//using do while loop
	do
	{
		system("pause");
		system("cls");
		cout << "\t\t\t\t ==========================================================\n";
        cout << "\t\t\t\t ################::CURRENCY CONVERTER::################\n";
        cout << "\t\t\t\t ==========================================================\n\n\n";
        cout << "\t\t\t  ===============================================\n";
        cout << "\t\t\t  		@@@@@@@ MAIN MENU @@@@@@@   \n";
        cout << "\t\t\t  ===============================================\n\n";
		cout << "\t\t  -----------------------------------------------\n";
        cout << "\t\t  |\t 1.  CHOOSE COUNTRY / CREATE   	\t|\n";
        cout << "\t\t  -----------------------------------------------\n";
        cout << "\t\t  |\t 2.  DISPLAY DATA   		\t|\n";
        cout << "\t\t  -----------------------------------------------\n";
        cout << "\t\t  |\t 3.  DELETE DATA  		\t|\n";
        cout << "\t\t  -----------------------------------------------\n";
        cout << "\t\t  |\t 4.  EXIT PROGRAM  		\t|\n";
        cout << "\t\t  -----------------------------------------------\n";
	cout<<"\t\t %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	 cout << "\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\t\t\t\tSELECT ONE OPTION  ..>";
	 cout << "\n\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cin>>option;
		switch (option)
	{
	case '1':
	system("cls");
	a1.choosecountry();
     break;
	case '2':
	a1.display();
	break;
	case '3':
		a1.DLT();
	break;
	case '4':
		break;
	default:
	cout<<"Wrong Number Print.............."<<endl;
		break;
	}
	} while (option!='4');
}
int main()
{
	A a1;
	system("color fc");
	a1.wellcome();
	system("cls");

	a1.introduction();
	a1.menu();
}

