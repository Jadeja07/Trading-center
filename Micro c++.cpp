#include<iostream>
#include<ctime>
void Samsung(char *series , int *lineup , int *device);
void Apple(char *series , int *device);
class buyer
{
	private:
		long long int total;
		char start;
		char choice1;
        std::string Pname;
		char choice2;	
		long double bill;	
		int product;
		int type;	
		int discount;	
		double quantity;   
        char series = 'V';
        int device;
        int lineup;
	public:
		void recipt()
		{
                    float total = shop();
                    // system("CLS");
                    // std::cout<<std::endl;
                    // std::cout<<"\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;
                    time_t t = time(NULL);
                    tm* tPtr = localtime(&t);
                          
                    std::cout<<"Bill date : ";
                    std::cout<<tPtr->tm_mday<<"/";
                    std::cout<<1+tPtr->tm_mon<<"/"; 
                    std::cout<<1900+tPtr->tm_year<<std::endl;
                    std::cout<<"Bill time : "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)/*<<":"<<tPtr<<(tPtr->tm_sec)*/<<std::endl;

                    std::cout<<"Total Bill amount :"<<total<<std::endl;
                    
                    if(total > 50000 && total < 100000)
                    {
                        total = total - (0.05*total);
                        std::cout<<"Total discount : 5%"<<std::endl;
                    }
                    else if(total > 100000 && total < 125000)
                    {
                        total = total - (0.1*total);
                        std::cout<<"Total discount : 10%"<<std::endl;
                    }
                    else if(total > 125000 && total < 200000)
                    {
                        total = total - (0.25*total);
                        std::cout<<"Total discount : 25%"<<std::endl;
                    }
                    else /*if(total > 200000)*/
                    {
                        total = total - (0.5*total);
                        std::cout<<"Total discount : 50%"<<std::endl;
                    }
                    std::cout<<"After discount,"<<std::endl;
                    std::cout<<"Total Bill amount is "<<total<<std::endl<<std::endl;
                
                            do
                            {
                                std::cout<<"Do You want to shop again y or n"<<std::endl;
                                std::cin>>choice1;

                                choice1 = tolower(choice1);

                                if(choice1 == 'y' || choice1 == 'n')
                                {
                                    if(choice1 == 'y')
                                    {
                                        system("CLS");
                                        // shop();
                                        recipt();
                                    }
                                    else if(choice1 == 'n')
                                    {
                                        std::cout<<"Thanks for shooping "<<std::endl;
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl<<"Wrong choice!"<<std::endl;
                                    std::cout<<"Plz, Enter 'y' -> yes & 'n' -> No"<<std::endl<<std::endl;
                                }
                            }while(choice1 != 'n');	
                
		 }
     	long double shop()	
	    {       
                                if(choice1 == 'y')
                                {
                                    std::cout<<"\t\t\t\t\t\t\t\t**********   Welcome Back   **********"<<std::endl<<std::endl;
                                }
                                else
                                {
                                    std::cout<<"\t\t\t\t\t\t\t**********      Welcome     **********"<<std::endl<<std::endl;
                                }
                                do
                                {  
                                    std::cout<<"________Plz,Follow the instruction________"<<std::endl<<std::endl;
                                    std::cout<<"1) Enter r to order Refrigerator"<<std::endl;
                                    std::cout<<"2) Enter w to order Washing machine"<<std::endl;
                                    std::cout<<"3) Enter t to order Television"<<std::endl;
                                    std::cout<<"4) Enter s to order Smart-phones"<<std::endl;
                                    std::cout<<"5) Enter a to order Air conditioner"<<std::endl;
                                    std::cout<<"6) Enter l for laptops"<<std::endl;
                                    std::cout<<"7) Enter e for exit"<<std::endl<<std::endl;
                                    std::cout<<"Enter your choice : ";
                                    std::cin>>choice2;
                                    choice2 = tolower(choice2);
                                }   
                                while(choice2 != 'e' && choice2 != 'r' && choice2 != 'w'&& choice2 != 't' && choice2 != 's' && choice2 != 'a' && choice2 != 'l');

                                if(choice2 == 'r')
                                {				
                                    refrigerator();
                                    return bill;
                                }
                                else if(choice2 == 'w')	
                                {
                                    washing();
                                    return bill;
                                }
                                else if(choice2 == 't')
                                {
                                    television();
                                    return bill;
                                }
                                else if(choice2 == 's')
                                {
                                    SmartPhones();
                                    return bill;
                                }
	
	    }
		long double refrigerator()
        {
            system("CLS");
            std::cout<<"\t\t\t\t\t\t\t********** Refrigerator details **********"<<std::endl<<std::endl;
						
						std::cout<<" \t\t\t\t\t\t\t   ******* Refrigerator Brand *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) <= Samsung =>"<<std::endl;
                            std::cout<<"2) <= Haier =>"<<std::endl;
                            std::cout<<"3) <= LG =>"<<std::endl;
                            std::cout<<"4) <= Godrej =>"<<std::endl;
                            std::cout<<"5) <= Panasonic =>"<<std::endl;
                            std::cout<<"6) <= Voltas =>"<<std::endl;
                            std::cout<<"7) <= Whirlpool =>"<<std::endl<<std::endl;
                            std::cout<<"Enter your choice : ";
						    std::cin>>product;
                            std::cout<< std::endl;
                            if((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7))
                            {
                                std::cout<<"You have entered wrong choice!,Plz try again"<<std::endl<<std::endl;
                            }
                        } while((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7));	
							
						
						switch(product)
						{
							case 1:
							Pname = "Samsung";
                            break;
							
							case 2:
							Pname = "Haier";
                            break;
							
							case 3:
							Pname = "LG";
                            break;
							
							case 4:
							Pname = "Godrej";
                            break;
							
							case 5:
							Pname = "Panasonic";
                            break;
							
							case 6:
							Pname = "Voltas";
                            break;
							
							case 7:
							Pname = "Whirlpool";
                            break;
						}
						
						std::cout<<"\t\t\t\t\t\t\t   ******* Refrigerator types *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) Mini/Compact Refrigerators 	=>	prize -> 40,000"<<std::endl;
                            std::cout<<"2) Single Door Refrigerators 	=>	prize -> 45,000"<<std::endl;
                            std::cout<<"3) Top-Freezer Refrigerators 	=>	prize -> 50,000"<<std::endl;
                            std::cout<<"4) Bottom-Freezer Refrigerators =>	prize -> 55,000"<<std::endl;
                            std::cout<<"5) French-Door Refrigerators 	=>	prize -> 60,000"<<std::endl;
                            std::cout<<"6) Side-by-Side Refrigerators 	=>	prize -> 70,000"<<std::endl;
                            std::cout<<"7) Built-in Refrigerators       =>	prize -> 80,000"<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<"Enter your choice : ";
                            std::cin>>type;

                            if ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7))
                            {
                                std::cout<<"You entered wrong choice! Try again"<<"\n\n";
                            }
                        } while ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7));
                        
						std::cout<<std::endl;

                        do
                        {
                        
                            std::cout<<"Enter the quantity :";
                            std::cin>>quantity;
						
                            if(quantity < 100)
                            {
                                system("CLS");
                                std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                switch(type)
                                {
                                    case 1:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Mini/Compact Refrigerators"<<std::endl;
                                    break;

                                    case 2:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" single door Refrigerators"<<std::endl;
                                    break;
                                        
                                    case 3:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Top-Freezer Refrigerators"<<std::endl;
                                    break;
                                        
                                    case 4:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Bottom-Freezer Refrigerators"<<std::endl;
                                    break;
                                        
                                    case 5:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" French-Door Refrigerators"<<std::endl;
                                    break;
                                        
                                    case 6:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Side-by-Side Refrigerators"<<std::endl;
                                    break;
                                    
                                    case 7:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Built-in Refrigerators"<<std::endl;
                                    
                                    break;	
                                    
                                    default:
                                    std::cout<<"Plz , Enter between 1 - 7";
                                }
                            }
                            else
						    {
                                std::cout<<std::endl;
                                std::cout<<"Out of stock!"<<std::endl<<std::endl;	
                            
                            }  
                                
                        } while (quantity > 100);

                        bill = 0;
                        // do
                        // {
                            
                            if(type == 1)
                            {
                                bill += quantity*40000;
                                return bill;
                            }
                            else if(type == 2)
                            {
                                bill += quantity*45000;
                                return bill;
                            }
                            else if(type == 3)
                            {
                                bill += quantity*50000;
                                return bill;
                            }
                            else if(type == 4)
                            {
                                bill += quantity*55000;
                                return bill;
                            }
                            else if(type == 5)
                            {
                                bill += quantity*60000;
                                return bill;
                            }
                            else if(type == 6)
                            {
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(type == 7)
                            {
                                bill += quantity*80000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
						
                        // } while (quantity > 100);
                        
                        
        }
        long double washing()
        {
            std::cout<<"\t\t\t\t\t\t\t********** Washing Machine details **********"<<std::endl<<std::endl;
						
						std::cout<<" \t\t\t\t\t\t\t   ******* Washing Machine Brand *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) <= Samsung =>"<<std::endl;
                            std::cout<<"2) <= Haier =>"<<std::endl;
                            std::cout<<"3) <= LG =>"<<std::endl;
                            std::cout<<"4) <= Godrej =>"<<std::endl;
                            std::cout<<"5) <= Bosch =>"<<std::endl;
                            std::cout<<"6) <= Lloyd =>"<<std::endl;
                            std::cout<<"7) <= Whirlpool =>"<<std::endl;
                            std::cout<<"Enter your choice :";
						    std::cin>>product;
                            std::cout<< std::endl;
                            if((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7))
                            {
                                std::cout<<"You have entered wrong choice!,Plz try again"<<std::endl<<std::endl;
                            }
                        } while((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7));	
							
						
						switch(product)
						{
							case 1:
							Pname = "Samsung";
                            break;
							
							case 2:
							Pname = "Haier";
							break;

							case 3:
							Pname = "LG";
                            break;

							case 4:
							Pname = "Godrej";
                            break;
							
							case 5:
							Pname = "Lloyad";
                            break;
							 
							case 6:
							Pname = "Lloyd";
                            break;
							
							case 7:
							Pname = "Whirlpool";
                            break;
						}
						
						std::cout<<"\t\t\t\t\t\t\t   ******* Washing Machine types *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) Front Load Washer        	            =>	prize -> 40,000"<<std::endl;
                            std::cout<<"2) Top Load Washer           	            =>	prize -> 45,000"<<std::endl;
                            std::cout<<"3) "<<Pname<<" Load washing Machine 	    =>	prize -> 50,000"<<std::endl;
                            std::cout<<"4) Semi-automatic Washing Machine           =>	prize -> 55,000"<<std::endl;
                            std::cout<<"5) Combo washer dryer       	            =>	prize -> 60,000"<<std::endl;
                            std::cout<<"6) Washing machine with drawer	            =>	prize -> 70,000"<<std::endl;
                            std::cout<<"7) Samrt(Wi-Fi) washing machine             =>	prize -> 80,000"<<std::endl<<std::endl;
                            
                            std::cout<<"Enter your choice :";
                            std::cin>>type;

                            if ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7))
                            {
                                std::cout<<"You entered wrong choice! Try again"<<"\n\n"<<std::endl;
                            }
                        } while ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7));
                        
						std::cout<<std::endl;

                        do
                        {
                            std::cout<<"Enter the quantity :";
                            std::cin>>quantity;

                            if(quantity < 100)
                            {
                                system("CLS");
                                std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                switch(type)
                                {
                                    case 1:
                                    std::cout<<"Product name : "<<quantity<<" Load Washer "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;

                                    case 2:
                                    std::cout<<"Product name : "<<quantity<<"Top load Washer "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;
                                        
                                    case 3:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Load Washing Machine was ordered succesfully."<<std::endl;
                                    break;
                                        
                                    case 4:
                                    std::cout<<"Product name : "<<quantity<<" Semi-automatic "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;
                                        
                                    case 5:
                                    std::cout<<"Product name : "<<quantity<<" Combo washer dryer "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;
                                        
                                    case 6:
                                    std::cout<<"Product name : "<<quantity<<" Washing machine with drawer "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;
                                    
                                    case 7:
                                    std::cout<<"Product name : "<<quantity<<" Samrt(Wi-Fi) "<<Pname<<" Washing Machine was ordered succesfully."<<std::endl;
                                    break;	
                                    
                                    default:
                                    std::cout<<"Plz , Enter between 1 - 7";
                                }
                            }
                            else
                            {
                                std::cout<<"Out of stock!"<<std::endl<<std::endl;
                            }
                        } while (quantity > 100);
                        
                            

                        bill = 0;
                        
                        if(type == 1)
                            {
                                bill += quantity*40000;
                                return bill;
                            }
                            else if(type == 2)
                            {
                                bill += quantity*45000;
                                return bill;
                            }
                            else if(type == 3)
                            {
                                bill += quantity*50000;
                                return bill;
                            }
                            else if(type == 4)
                            {
                                bill += quantity*55000;
                                return bill;
                            }
                            else if(type == 5)
                            {
                                bill += quantity*60000;
                                return bill;
                            }
                            else if(type == 6)
                            {
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(type == 7)
                            {
                                bill += quantity*80000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
        }
        long double television()
        
        {
            system("CLS");
            std::cout<<"\t\t\t\t\t\t\t********** Televison details **********"<<std::endl<<std::endl;
						
						std::cout<<" \t\t\t\t\t\t\t   ******* Television Brands *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) <=          Samsung       =>"<<std::endl;
                            std::cout<<"2) <=          Sony          =>"<<std::endl;
                            std::cout<<"3) <=          LG            =>"<<std::endl;
                            std::cout<<"4) <=          Mi tv         =>"<<std::endl;
                            std::cout<<"5) <=          One plus      =>"<<std::endl<<std::endl;
                            // std::cout<<"6) <= Onida =>"<<std::endl;
                            // std::cout<<"7) <= Whirlpool =>"<<std::endl<<std::endl;
                            std::cout<<"Enter your choice : ";
						    std::cin>>product;
                            std::cout<< std::endl;
                            if((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5))
                            {
                                std::cout<<"You have entered wrong choice!,Plz try again"<<std::endl;
                            }
                        } while((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5));	
							
						
						switch(product)
						{
							case 1:
							Pname = "Samsung";
                            break;
							
							case 2:
							Pname = "Sony";
                            break;
							
							case 3:
							Pname = "LG";
                            break;
							
							case 4:
							Pname = "Mi tv";
                            break;
							
							case 5:
							Pname = "one plus";
                            break;
						}
						
						std::cout<<"\t\t\t\t\t\t\t   ******* Televisions types *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) LCD          =>	prize -> 20,999"<<std::endl;
                            std::cout<<"2) LED          =>	prize -> 24,999"<<std::endl;
                            std::cout<<"3) LCD TN       =>	prize -> 25,899"<<std::endl;
                            std::cout<<"4) IPS          =>	prize -> 30,000"<<std::endl;
                            std::cout<<"5) OLED         =>	prize -> 35,000"<<std::endl;
                            std::cout<<"6) QLED         =>	prize -> 40,000"<<std::endl;
                            std::cout<<"7) ULTRA HD 4K  =>	prize -> 50,000"<<std::endl;
                            std::cout<<"8) ULTRA HD 8K  =>	prize -> 1,00,000"<<std::endl;
                            std::cout<<std::endl;
                            std::cout<<"Enter your choice : ";
                            std::cin>>type;

                            if ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7) && (type != 8))
                            {
                                std::cout<<"You entered wrong choice! Try again"<<"\n\n";
                            }
                        } while ((type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) && (type != 7) && (type != 8));
                        
						std::cout<<std::endl;

                        do
                        {
                        
                            std::cout<<"Enter the quantity :";
                            std::cin>>quantity;
						
                            if(quantity < 100)
                            {
                                system("CLS");
                                std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                switch(type)
                                {
                                    case 1:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" LCD"<<std::endl;
                                    break;

                                    case 2:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" LED"<<std::endl;
                                    break;
                                        
                                    case 3:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" LCD TN"<<std::endl;
                                    break;
                                        
                                    case 4:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" IPS"<<std::endl;
                                    break;
                                        
                                    case 5:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" OLED"<<std::endl;
                                    break;
                                        
                                    case 6:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" QLED"<<std::endl;
                                    break;
                                    
                                    case 7:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" ULTRA HD 4K"<<std::endl;     
                                    break;	

                                    case 8:
                                    std::cout<<"Product name : "<<quantity<<" "<<Pname<<" ULTRA HD 8K"<<std::endl;     
                                    break;	
                                    
                                    default:
                                    std::cout<<"Plz , Enter between 1 - 8";
                                }
                            }
                            else
						    {
                                std::cout<<std::endl;
                                std::cout<<"Out of stock!"<<std::endl<<std::endl;	
                            
                            }  
                                
                        } while (quantity > 100);

                        bill = 0;

                            if(type == 1)
                            {
                                bill += quantity*20999;
                                return bill;
                            }
                            else if(type == 2)
                            {
                                bill += quantity*24999;
                                return bill;
                            }
                            else if(type == 3)
                            {
                                bill += quantity*25899;
                                return bill;
                            }
                            else if(type == 4)
                            {
                                bill += quantity*30000;
                                return bill;
                            }
                            else if(type == 5)
                            {
                                bill += quantity*35000;
                                return bill;
                            }
                            else if(type == 6)
                            {
                                bill += quantity*40000;
                                return bill;
                            }
                            else if(type == 7)
                            {
                                bill += quantity*50000;
                                return bill;
                            }
                            else if(type == 8)
                            {
                                bill += quantity*100000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
						
                        // } while (quantity > 100);
                        
           
        }
        long double SmartPhones()
        {
            system("CLS");
                std::cout<<"\t\t\t\t\t\t\t********** Smart-phone details **********"<<std::endl<<std::endl;
						
						std::cout<<" \t\t\t\t\t\t\t   ******* Smart-phone Brand *******   "<<std::endl<<std::endl;
						do
                        {
                            std::cout<<"1) <=         Samsung       =>"<<std::endl;
                            std::cout<<"2) <=         Apple         =>"<<std::endl;
                            std::cout<<"3) <=         Vivo          =>"<<std::endl;
                            std::cout<<"4) <=         OnePlus       =>"<<std::endl;
                            std::cout<<"5) <=         OPPO          =>"<<std::endl;
                            std::cout<<"6) <=         Redmi         =>"<<std::endl;
                            std::cout<<"7) <=         Realme        =>"<<std::endl<<std::endl;

                            std::cout<<"Enter your choice : ";
						    std::cin>>product;
                            std::cout<< std::endl;
                            if((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7))
                            {
                                std::cout<<"You have entered wrong choice!,Plz try again"<<std::endl;
                            }
                        } while((product != 1) && (product != 2) && (product != 3) && (product != 4) && (product != 5) && (product != 6) && (product != 7));	

						switch(product)
						{
							case 1:
							Pname = "Samsung galaxy";
                            break;
							
							case 2:
							Pname = "Apple";
                            break;
						}
                        
                        if(product == 1)
                        {
                            Samsung(&series,&lineup,&device);
                            // std::cout<<series;
                        }
                        else if(product == 2)
                        {
                            Apple(&series,&device);
                        }

						std::cout<<std::endl;

                        if(product == 1 && lineup == 1 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-23"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-23 + "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-23 Pro"<<std::endl;
                                        break;
                                            
                                        case 4:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-23"<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*105000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*94500;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*80000;
                                return bill;
                            }
                            else if(device == 4)
                            {
                                bill += quantity*75000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
                        }
                        else if(product == 1 && lineup == 2 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-22 Ultra"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-22 + "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-22"<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*92500;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*80000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*50000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
                            
                        } 
                        else if(product == 1 && lineup == 3 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-21 Ultra"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-21 plus "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-21 FE "<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*128000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*48000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*35000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
                            
                        } 
                        else if(product == 1 && lineup == 4 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 Ultra"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 plus "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 FE "<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*99000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*83000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*27000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
                            
                        } 
                        else if(product == 1 && lineup == 5 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-10 Lite"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-10  plus "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-10 5G "<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*40000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*65000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }        
                        } 
                        else if(product == 1 && lineup == 4 && series == 'S')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 Ultra"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 plus "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" S-20 FE "<<std::endl;
                                        break;	
                                        
                                        default:
                                        std::cout<<"Plz , Enter between 1 - 7";
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*99000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*83000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*27000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }
                            
                        } 
                        else if(product == 1 && device == 1 && series == 'N')
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Note 10"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Note 09 "<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" Note 08 "<<std::endl;
                                        break;	
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);
                            
                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*40000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                    
                                bill += quantity*65000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }        
                        }
                        else if( product == 2 && series =='A') 
                        {
                            do
                            {
                        
                                std::cout<<"Enter the quantity :";
                                std::cin>>quantity;
                            
                                if(quantity < 100)
                                {
                                    system("CLS");
                                    std::cout<<"\t\t\t\t\t\t\t\t********** Bill recipt **********"<<std::endl<<std::endl;

                                    switch(device)
                                    {
                                        case 1:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 12"<<std::endl;
                                        break;

                                        case 2:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 12 pro"<<std::endl;
                                        break;
                                            
                                        case 3:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 12 pro max "<<std::endl;
                                        break;	

                                        case 4:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 13 "<<std::endl;
                                        break;

                                        case 5:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 13 pro "<<std::endl;
                                        break;

                                        case 6:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 13 pro max "<<std::endl;
                                        break;

                                        case 7:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 14 "<<std::endl;
                                        break;

                                        case 8:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 14 pro "<<std::endl;
                                        break;

                                        case 9:
                                        std::cout<<"Product name : "<<quantity<<" "<<Pname<<" iphone 14 pro max "<<std::endl;
                                        break;
                                    }
                                }
                                else
                                {
                                    std::cout<<std::endl;
                                    std::cout<<"Out of stock!"<<std::endl<<std::endl;    
                                }  

                            } while (quantity > 100);

                            bill = 0;

                            if(device == 1)
                            {
                                bill += quantity*67000;
                                return bill;
                            }
                            else if(device == 2)
                            {
                                bill += quantity*78000;
                                return bill;
                            }
                            else if(device == 3)
                            {
                                
                                bill += quantity*95000;
                                return bill;
                            }
                            else if(device == 4)
                            {
                    
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(device == 5)
                            {
                    
                                bill += quantity*125000;
                                return bill;
                            }
                            else if(device == 6)
                            {
                    
                                bill += quantity*134000;
                                return bill;
                            }
                            else if(device == 7)
                            {
                    
                                bill += quantity*70000;
                                return bill;
                            }
                            else if(device == 8)
                            {
                    
                                bill += quantity*138000;
                                return bill;
                            }
                            else if(device == 9)
                            {
                    
                                bill += quantity*150000;
                                return bill;
                            }
                            else
                            {
                                std::cout<<"You entered wrong choice! plz , Enter again";
                            }        
                        } 
        }

};
int main()
{

            std::cout<<std::endl;
            
			std::cout<<"\t\t\t\t\t\t\t**********  Trading center  **********\n\n";
		buyer b1;		
		b1.recipt();		
			
 		return 0 ;
}
void Samsung(char *series , int *lineup , int *device)
{
    system("CLS");
    std::cout<<"\t\t\t\t\t\t\t********** Welcome to Samung store **********"<<std::endl<<std::endl;

    do
    {
            std::cout<<"\t\t\t\t\t\t\t   ********** Smart-phone series *********"<<std::endl;

        std::cout<<"Samsung galaxy 'S' series       => Flegship series" <<std::endl;
        std::cout<<"Samsung galaxy 'NOTE' series    => Flagship series"<<std::endl;
        std::cout<<"Samsung galaxy 'Z' series       => Foldable Phones series"<<std::endl<<std::endl;
        char s [10];
        std::cin>>s;

        for(int i = 0 ; i < 1 ; i++)
        {
            *series = s[i];
        }
        std::cout<<std::endl<<std::endl;

        *series = toupper(*series);

    }while(*series !='S' && *series !='N' &&  *series != 'Z');

        if(*series == 'S')
        {
            do
            {
                std::cout<<"\t\t\t\t\t\t ********** List of Samsung 'S' series phones **********"<<std::endl<<std::endl;

                std::cout<<"1)  Samsung Galaxy S-23 Line-up"<<std::endl;
                std::cout<<"2)  Samsung Galaxy S-22 Line-up"<<std::endl;
                std::cout<<"3)  Samsung Galaxy S-21 Line-up"<<std::endl;
                std::cout<<"4)  Samsung Galaxy S-20 Line-up"<<std::endl;
                std::cout<<"5)  Samsung Galaxy S-10 Line-up"<<std::endl<<std::endl;
                std::cout<<"Enter your choice : ";
                std::cin>>*lineup;
            } while (*lineup != 1 && *lineup != 2 && *lineup != 3 && *lineup != 4 && *lineup != 5);
        }
        else if(*series == 'N')
        { 
            do
            { 
            std::cout<<"1)  Samsung Galaxy Note-10  "<<std::endl;
            std::cout<<"2)  Samsung Galaxy Note-09  "<<std::endl;
            std::cout<<"3)  Samsung Galaxy Note-08  "<<std::endl<<std::endl;
            std::cout<<"Enter your choice : ";
            std::cin>>*device;
            } while (*device != 1 && *device != 2 && *device != 3);
        }
        else if(*series == 'Z')
        {
            do
            {
                std::cout<<"1) Samsung Galaxy Z-Fold 4 5G"<<std::endl;
                std::cout<<"2) Samsung Galaxy Z-Flip 4 5G"<<std::endl;
                std::cout<<"3) Samsung Galaxy Z-Flip 5 5G"<<std::endl;
                std::cout<<"4) Samsung Galaxy Z-Fold 5 5G"<<std::endl<<std::endl;
                std::cout<<"Enter your choice : ";
                std::cin>>*device;
                std::cout<<std::endl;

            } while (*device != 1 && *device != 2 && *device != 3 && *device != 4);          
        }
        else
        {
            system("CLS");
            std::cout<<"Wrong choice !, plz Enter again";
        }
    if(*series =='S' && *lineup == 1)
    {   
        do
        {
            std::cout<<"\t\t\t\t\t ********** S-23 lineup **********"<<std::endl<<std::endl;

            std::cout<<"1)Samsung galaxy S-23 Ultra   => 1,05,000"<<std::endl;
            std::cout<<"2)Samsung galaxy S-23 +       => 94,500"<<std::endl;
            std::cout<<"3)Samsung galaxy S-23 Pro     => 80,000"<<std::endl;
            std::cout<<"4)Samsung galaxy S-23         => 75,000"<<std::endl<<std::endl;
            std::cout<<"Enter your choice : "; 
            std::cin>>*device;
        }while(*device != 1 && *device != 2 && *device != 3 && *device != 4);
        
    }
    else if(*series == 'S' && *lineup == 2)
    {
        do
        {
            std::cout<<"\t\t\t\t\t ********** S-22 lineup **********"<<std::endl<<std::endl;

            std::cout<<"1)Samsung galaxy S-22 Ultra   => 92,500"<<std::endl;
            std::cout<<"2)Samsung galaxy S-22 +       => 88,000"<<std::endl;
            std::cout<<"3)Samsung galaxy S-22         => 50,000"<<std::endl<<std::endl;
            std::cout<<"Enter your choice : ";
            std::cin>>*device;
        }while(*device != 1 && *device != 2 && *device != 3);
    }
    else if(*series == 'S' && *lineup == 3)
    {
        do
        {
            std::cout<<"\t\t\t\t\t ********** S-21 lineup **********"<<std::endl<<std::endl;

            std::cout<<"1)Samsung galaxy S-21 Ultra   => 1,28,000"<<std::endl;
            std::cout<<"3)Samsung galaxy S-21 Plus    => 48,000"<<std::endl;
            std::cout<<"2)Samsung galaxy S-21 FE      => 35,000"<<std::endl<<std::endl;
            std::cout<<"Enter your choice : ";
            std::cin>>*device;
        }while(*device != 1 && *device != 2 && *device != 3);
    }
    else if(*series == 'S' && *lineup == 4)
    {
        do
        {
            std::cout<<"\t\t\t\t\t ********** S-20 lineup **********"<<std::endl<<std::endl;

            std::cout<<"1)Samsung galaxy S-20 Ultra   => 99,000"<<std::endl;
            std::cout<<"2)Samsung galaxy S-20 Plus    => 83,000"<<std::endl;
            std::cout<<"3)Samsung galaxy S-20 FE      => 27,000"<<std::endl<<std::endl;
            std::cout<<"Enter your choice : ";
            std::cin>>*device;
        }while(*device != 1 && *device != 2 && *device != 3);
    }
    else if(*series == 'S' && *lineup == 5)
    {
        do
        {
            std::cout<<"\t\t\t\t\t ********** S-10 lineup **********"<<std::endl<<std::endl;

            std::cout<<"1)Samsung galaxy S-10 Lite    => 70,000"<<std::endl;
            std::cout<<"2)Samsung galaxy S-10 +       => 40,000"<<std::endl;
            std::cout<<"3)Samsung galaxy S-10 5G      => 65,000"<<std::endl<<std::endl;
            std::cout<<"Enter your choice : ";
            std::cin>>*device;
        }while(*device != 1 && *device != 2 && *device != 3);    
    }
}
void Apple(char *series , int *device)
{
    std::cout<<"\t\t\t\t\t\t Welcome , ********** To Apple Store **********"<<std::endl;
    *series ='A';
    std::cout<<series;
    do
    {

        std::cout<<"1) Apple iphone 12             => 67,000"<<std::endl;
        std::cout<<"2) Apple iphone 12 Pro         => 78,000"<<std::endl;
        std::cout<<"3) Apple iphone 12 Pro Max     => 95,000"<<std::endl;
        std::cout<<"4) Apple iphone 13             => 70,000"<<std::endl;
        std::cout<<"5) Apple iphone 13 Pro         => 1,25,000"<<std::endl;
        std::cout<<"6) Apple iphone 13 Pro Max     => 1,34,000"<<std::endl;
        std::cout<<"7) Apple iphone 14             => 70,000"<<std::endl;
        std::cout<<"8) Apple iphone 14 Pro         => 1,30,000"<<std::endl;
        std::cout<<"9) Apple iphone 14 Pro Max     => 1,50,000"<<std::endl;

        std::cout<<std::endl;

        std::cout<<"Enter your choice : ";
        std::cin>>*device;
    } while (*device != 1 && *device != 2 && *device != 3 && *device != 4 && *device != 5 && *device != 6 && *device != 7 && *device != 8 && *device != 9);
    
}
