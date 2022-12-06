#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    
    //displaying and inputting quantites in stock 
    cout<<"\t\t\t QUANTITY OF ITEMS WE HAVE"<<endl;
    cout<<"\n Quantity of rooms we have: "<<" ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta we have: "<<" ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger we have: "<<" ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles we have: "<<" ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake we have: "<<" ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll we have: "<<" ";
    cin>>Qchicken;
    

    menu:                   //for goto statement
    cout<<endl<<"\t\t Please select item from the option menu"<<endl;
    cout<<"\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken-roll";
    cout<<"\n 7) Bill and Info";
    cout<<"\n 8) Exit"<<endl;
    
    cout<<endl<<"Enter your choice of selection: "<<" ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
            cout<<"Enter no.of rooms you want: "<<" ";
            cin>>quant;
            if(Qrooms-Srooms >= quant)
            {
                Srooms=Srooms+quant;
                Total_rooms= Total_rooms+(quant*1200);
                cout<<"\t\t"<<quant<<" "<< "Rooms allocated to you!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<"Only"<<" "<<Qrooms-Srooms<<" "<<"Rooms remaining in hotel: ";
                break;
            }
    
        case 2:
            cout<<"Enter portions of pasta you want: "<<" ";
            cin>>quant;
            if(Qpasta-Spasta >= quant)
            {
                Spasta=Spasta+quant;
                Total_pasta= Total_pasta+(quant*250);
                cout<<"\t\t"<<quant<<" "<<"Pasta order placed!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<"Only"<<" "<<Qpasta-Spasta<<"Pasta remaining in hotel: ";
                break;
            }
        
        case 3:
            cout<<"Enter portions of burger you want: "<<" ";
            cin>>quant;
            if(Qburger-Sburger>= quant)
            {
                Sburger=Sburger+quant;
                Total_burger= Total_burger+quant*120;
                cout<<" "<<quant<<"Pasta order placed!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<Qburger-Sburger<<"Burger remaining in hotel: ";
                break;
            }
            
        case 4:
            cout<<"Enter portions of noodles you want: "<<" ";
            cin>>quant;
            if(Qnoodles-Snoodles>= quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles= Total_noodles+quant*140;
                cout<<" "<<quant<<"Noodles order placed!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<Qnoodles-Snoodles<<"Noodles remaining in hotel: ";
                break;
            }
            
        case 5:
            cout<<"Enter cups of shakes you want: "<<" ";
            cin>>quant;
            if(Qshake-Sshake>= quant)
            {
                Sshake=Sshake+quant;
                Total_shake= Total_shake+quant*250;
                cout<<" "<<quant<<"Shakes order placed!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<Qshake-Sshake<<"Shakes remaining in hotel: ";
                break;
            }
            
        case 6:
            cout<<"Enter quantity of chicken you want: "<<" ";
            cin>>quant;
            if(Qchicken-Schicken>= quant)
            {
                Schicken=Schicken+quant;
                Total_chicken= Total_chicken+quant*150;
                cout<<" "<<quant<<"Chicken-roll order placed!!"<<endl;
                break;
            }
        
            else 
            {
                cout<<Qchicken-Schicken<<"Rolls remaining in hotel: ";
                break;
            }
        
        case 7:
            cout<<"Details of order and total bill!: "<<endl;
            //for rooms
            cout<<"Number of rooms we had: "<<Qrooms<<endl;
            cout<<"Number of rooms booked: "<<Srooms<<endl;
            cout<<"Remaining rooms: "<<Qrooms-Srooms<<endl;
            cout<<"Total room collection for the day: "<<Total_rooms<<endl;

            //for pasta
            cout<<"Number of pasta we had: "<<Qpasta<<endl;
            cout<<"Number of pasta sold: "<<Spasta<<endl;
            cout<<"Remaining number of pasta: "<<Qpasta-Spasta<<endl;
            cout<<"Total pasta collection for the day: "<<Total_pasta<<endl;

            //for burgers
            cout<<"Number of burgers we had: "<<Qburger<<endl;
            cout<<"Number of burgers sold: "<<Sburger<<endl;
            cout<<"Remaining number of burgers: "<<Qburger-Sburger<<endl;
            cout<<"Total burger collection for the day: "<<Total_burger<<endl;

            //for noodles
            cout<<"Number of noodles we had: "<<Qnoodles<<endl;
            cout<<"Number of noodles sold: "<<Snoodles<<endl;
            cout<<"Remaining number of noodles: "<<Qnoodles-Snoodles<<endl;
            cout<<"Total noodles collection for the day: "<<Total_noodles<<endl;

            //for shakes
            cout<<"Number of shakes we had: "<<Qshake<<endl;
            cout<<"Number of shakes sold: "<<Sshake<<endl;
            cout<<"Remaining number of shakes: "<<Qshake-Sshake<<endl;
            cout<<"Total shakes collection for the day: "<<Total_shake<<endl;

            //for rolls
            cout<<"Number of rolls we had: "<<Qchicken<<endl;
            cout<<"Number of rolls sold: "<<Schicken<<endl;
            cout<<"Remaining number of rolls: "<<Qchicken-Schicken<<endl;
            cout<<"Total rolls collection for the day: "<<Total_chicken<<endl;

            //total collection
            cout<<"Total collection for the day is: "<<" "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken<<endl;
            break;

        case 8:
            exit(0);
        
        default:
            cout<<"Please enter a valid number!!"<<endl;
    }

    goto menu;    
    
    return 0;
}

