#include<iostream>
using namespace std;
int main()
{
    int r=0,c=0,b=0,amount=0,total_veh=0,Choice;

    while(true)
    {
        cout<<"Welcome to Parking System"<<endl;
        cout<<"\n Press 1 : for Rikshaw" <<endl;
        cout<< "Press 2 : for Cars"<<endl;
        cout<<"Press 3 : for Buses"<<endl;
        cout<<"Press 4 : for SHow Records"<<endl;
        cout<<"Press 5 : for Delete Record"<<endl;
        cout<<"\n Enter Choice :";
        cin>>Choice;


        switch(Choice)
        {
            case 1:
                r++;
                amount = amount +100;
                total_veh++;
                cout<<"\n Add 1 Rikshaw in Record"<<endl;
                system("pause");
                system("cls");
            case 2:
                c++;
                amount = amount +200;
                total_veh++;
                cout<<"\n Add 1 Car in Record"<<endl;
                system("pause");
                system("cls");
                break;
              
            case 3:
                b++;
                amount = amount +300;
                total_veh++;
                cout<<"\n Add 1 Bus in Record"<<endl;
                system("pause");
                system("cls");
                break;
            case 4:
                cout<<" Total Amount ="<<amount<<endl;
                cout<<"Total Vehicles = "<<total_veh<<endl;
                cout<<"Rikshaw ="<<r<<endl;
                cout<<"Cars ="<<c<<endl;
                cout<<"Buses "<<b<<endl;
                system("pause");
                system("cls");
                break;
            case 5:
                c=0;r=0;b=0;amount=0;total_veh=0;

                cout<<"\n\n Delete Record"<<endl;
                break;

            default:
                cout<<"\n\n Invalid input"<<endl;
                system("pause");
                system("cls");
        }
    }
}