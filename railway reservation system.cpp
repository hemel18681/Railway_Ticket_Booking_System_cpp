#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<time.h>
using namespace std;
void logo();
void logo2();
int adminwork(int p);
void t_buy_fuc();
class booking
{
    int a,ch,date,train,i,h_ac[30],h_nac[30],t_in,pac,pnac,n_ac,n_nac,ac,nac,tac,tnac,take,t_buyi,target;
    float t[30],t_ac,t_nac;
    string username,route_name,password,train_time,un,pw,temp,x,pass,filename1,filename2,password_us,username_us,pw_us,un_us,nacs,tacs,tnacs,acs,timeu,temp2,filename3;
    char t_buy;
    static string month,date_b;
public:
    logad()
    {
        system("cls");
        logo2();
        cout<<endl;
        lad:
        cout<<"\tUsername : \n\t";
        cin>>x;
        cout<<"\tPassword : \n\t";
        while(ch=getch())
        {
            if(ch==13)
            {
                if((x=="admin")&&(pass=="railway"))
                {
                    int p=0;
                   adminwork(p);
                   if(p==0)
                   {
                       return 0;
                   }
                }
                else
                {
                    system("cls");
                    logo2();
                    cout<<endl;
                    cout<<"\n\tWrong username or password. Please give a correct one.\n\n";
                    pass.clear();
                    x.clear();
                    goto lad;
                }
            }
            else if(ch==8)
            {
                if(pass.length()>0)
                {
                    cout<<"\b \b";
                    pass.resize(pass.length()-1);
                }
            }
            else
            {
                cout<<"*";
                pass+=ch;
            }
        }
    }
    loguse()
    {
        loop:
        system("cls");
        //log:
        logo2();
        cout<<endl;
        cout<<"\tChoose your number : \n";
        cout<<"\t1.create an account\n\t2.login\n";
        cout<<"\tYour input :       ";
        cin>>a;
        if(a==1)
        {
                    system("cls");
                    logo2();
                    cout<<endl;
                    another:
                    string username="", password;
                    cout << "\tSelect a username nickname: ";
                    cin >> username;
                    cout << "\tSelect a password: ";
                    cin >> password;
                    filename1="Id/"+username;
                    ifstream read(filename1.c_str());
                    getline(read,un);
                    if(un==username)
                    {
                        system("cls");
                        logo2();
                        cout<<endl;
                        cout<<"\tThis username is already taken. Use another name----\n";
                        goto another;
                    }
                else
                {
                        ofstream file;
                        filename1="Id/"+username;
                        file.open(filename1.c_str());
                        file << username << endl << password;
                        file.close();
                        goto loop;
                }
        }
        else if(a==2)
        {
                    system("cls");
                    logo2();
                    cout<<endl;
                    lad:
                    cout<<"\tUsername : ";
                    cin>>username_us;
                    cout<<"\tPassword : ";
                    while(ch=getch())
                    {
                            if(ch==13)
                            {
                                filename1="Id/"+username_us;
                                ifstream read(filename1.c_str());
                                getline(read,un_us);
                                getline(read,pw_us);
                                if(un_us==username_us&&pw_us==password_us)
                                    {
                                        system("cls");
                                        logo2();
                                        cout<<endl;
                                        cout<<"\tWelcome\n";
                                        month_again:
                                        cout<<"\tdate,month (like - '14,november'): ";
                                        cin>>month;
                                        filename1="Date/"+month+".txt";
                                        string ch,ch1;
                                        route_menu:
                                        ifstream cm(filename1.c_str());
                                        if(cm.is_open())
                                            {
                                                system("cls");
                                                logo2();
                                                cout<<endl;
                                                while(getline(cm,ch1))
                                                    {
                                                            cout<<ch1<<'\n';
                                                    }
                                    cm.close();
                                    route_again:
                                    cout<<endl<<"\tEnter the route name (like - 'Dhaka-Shylet'): " <<endl<<"\t";
                                    cin>>route_name;
                                    filename1="Time/"+month+route_name+".txt";
                                    time_menu:
                                    ifstream cmr(filename1.c_str());
                                    if(cmr.is_open())
                                            {
                                                system("cls");
                                                logo2();
                                                cout<<endl;
                                                while(getline(cmr,ch1))
                                                {
                                                        cout<<ch1<<'\n';
                                                }
                                                cmr.close();
                                                cout<<"\n\tEnter time : "<<endl<<"\t";
                                                cin>>timeu;
                                                 system("cls");
                                                logo2();
                                                cout<<endl;
                                                filename2="Time/"+month+route_name+timeu+".txt";
                                                ifstream cmrt(filename2.c_str());
                                                    if(cmrt.is_open())
                                                    {
                                                        system("cls");
                                                        logo2();
                                                        cout<<endl;
                                                        while(getline(cmrt,ch1))
                                                        {
                                                            cout<<ch1<<'\n';
                                                        }
                                                        cmrt.close();
                                                        choose1:
                                                        cout<<"\tChoose your number : \n\t-----------\n\t1.Buy tickets\n\t2.Goto time menu\n\t3.Goto route menu\n\n\t";
                                                        cout<<"Your choice : \t";
                                                        cin>>target;
                                                        if(target==1)
                                                        {
                                                                        system("cls");
                                                                        logo2();
                                                                        cout<<endl;
                                                                        choose:
                                                                        cout<<"\n\tChoose your number : \n\t-----------\n\t1.Ac Tickets\n\t2.Non Ac Tickets\n\n\tYour choice : \n\t";
                                                                        cin>>take;
                                                                        cout<<"\tHow many ticktes you want to buy?\n\tYour input : \n\t";
                                                                        cin>>t_buyi;
                                                                        if(take==1)
                                                                            {
                                                                                    filename3="Time/"+month+route_name+timeu+"took.txt";
                                                                                    ifstream file9(filename3.c_str());
                                                                                        getline(file9,acs);
                                                                                        getline(file9,nacs);
                                                                                        getline(file9,tacs);
                                                                                        getline(file9,tnacs);
                                                                                        file9.close();
                                                                                    ac=atoi(acs.c_str());
                                                                                    nac=atoi(nacs.c_str());
                                                                                    tac=atoi(tacs.c_str());
                                                                                    tnac=atoi(tnacs.c_str());
                                                                                if(ac<=0)
                                                                                {
                                                                                    cout<<"\n\tSorry no tickets avaiable."<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    pac=0;
                                                                                    n_ac=ac-t_buyi;
                                                                                    pac=tac*t_buyi;
                                                                                        string n;
                                                                                        stringstream obj;
                                                                                        obj<<n_ac;
                                                                                        n=obj.str();
                                                                                    ofstream file;
                                                                                    filename1="Time/"+month+route_name+timeu+"took.txt";
                                                                                    file.open(filename1.c_str());
                                                                                        file<<n<<" "<<endl;
                                                                                        file<<nacs<<" "<<endl;
                                                                                        file<<tacs<<" "<<endl;
                                                                                        file<<tnacs<<" "<<endl;
                                                                                        file.close();
                                                                                                ofstream file4;
                                                                                                filename1="Time/"+month+route_name+timeu+".txt";
                                                                                                file4.open(filename1.c_str());
                                                                                                file4<<"\tAvailabe Ac Tickets\tAvaible Non-ac Tickets"<<endl;
                                                                                                file4<<"\t"<<n<<"         \t\t"<<nacs<<endl;
                                                                                                file4<<"\tPrice for Ac Tickets\tPrice for Non-ac Tickets"<<endl;
                                                                                                file4<<"\t"<<tacs<<"            \t\t"<<tnacs<<endl;
                                                                                                file4.close();
                                                                                        cout<<"\n\tThank you.\n\tYou have booked "<<t_buyi<<" ticktes.\n\tTickets costs "<<pac<<" tk\n\tYour train on "<< month<<" at "<<train_time<<"Please collect your tickets form the station before your journey."<<endl;

                                                                                }
                                                                            }
                                                                        else if(take==2)
                                                                            {
                                                                                    filename3="Time/"+month+route_name+timeu+"took.txt";
                                                                                    ifstream file9(filename3.c_str());
                                                                                        getline(file9,acs);
                                                                                        getline(file9,nacs);
                                                                                        getline(file9,tacs);
                                                                                        getline(file9,tnacs);
                                                                                        file9.close();
                                                                                    ac=atoi(acs.c_str());
                                                                                    nac=atoi(nacs.c_str());
                                                                                    tac=atoi(tacs.c_str());
                                                                                    tnac=atoi(tnacs.c_str());
                                                                                if(ac<=0)
                                                                                {
                                                                                    cout<<"\n\tSorry no tickets avaiable."<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    pac=0;
                                                                                    n_nac=nac-t_buyi;
                                                                                    pac=tnac*t_buyi;
                                                                                        string n;
                                                                                        stringstream obj;
                                                                                        obj<<n_nac;
                                                                                        n=obj.str();
                                                                                    ofstream file;
                                                                                    filename1="Time/"+month+route_name+timeu+"took.txt";
                                                                                    file.open(filename1.c_str());
                                                                                        file<<acs<<" "<<endl;
                                                                                        file<<n<<" "<<endl;
                                                                                        file<<tacs<<" "<<endl;
                                                                                        file<<tnacs<<" "<<endl;
                                                                                        file.close();
                                                                                                ofstream file4;
                                                                                                filename1="Time/"+month+route_name+timeu+".txt";
                                                                                                file4.open(filename1.c_str());
                                                                                                file4<<"\tAvailabe Ac Tickets\tAvaible Non-ac Tickets"<<endl;
                                                                                                file4<<"\t"<<acs<<"         \t\t"<<n<<endl;
                                                                                                file4<<"\tPrice for Ac Tickets\tPrice for Non-ac Tickets"<<endl;
                                                                                                file4<<"\t"<<tacs<<"            \t\t"<<tnacs<<endl;
                                                                                                file4.close();
                                                                                        cout<<"\n\tThank you.\n\tYou have booked "<<t_buyi<<" ticktes.\n\tTickets costs "<<pac<<" tk\n\tYour train on "<< month<<" at "<<train_time<<"Please collect your tickets form the station before your journey."<<endl;

                                                                                }
                                                                            }
                                                                        else
                                                                            {
                                                                                system("cls");
                                                                                logo2();
                                                                                cout<<endl;
                                                                                cout<<"\tWrong input. Please input correctly.";
                                                                                goto choose;
                                                                            }

                                                        }
                                                        else if(target==2)
                                                        {
                                                            goto time_menu;
                                                        }
                                                        else if(target==3)
                                                        {
                                                            goto route_menu;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            logo2();
                                                            cout<<endl;
                                                            cout<<"\n\tWrong input. Input again. ";
                                                            goto choose1;
                                                        }

                    }
                    else
                    {
                        system("cls");
                        logo2();
                        cout<<endl;
                        cout<<"\tWrong input or sorry, no tickets avaible for now.";
                        goto route_again;
                        return 0;
                    }
            }
            else
            {
                  system("cls");
                  logo2();
                  cout<<endl;
                  cout<<"\tWrong input or sorry, no tickets avaible for now.";
                  goto month_again;
                  return 0;
            }
            return 0;
            }
        }
                else
                {
                    system("cls");
                     logo2();
                    cout<<endl;
                    cout<<"\n\tWrong username or password. Please give a correct one.\n\n";
                    password_us.clear();
                    username_us.clear();
                    goto lad;
                }
                }
            else if(ch==8)
            {
                if(password_us.length()>0)
                {
                    cout<<"\b \b";
                    password_us.resize(password_us.length()-1);
                }
            }
            else
            {
                cout<<"*";
                password_us+=ch;
            }
        }
        }
        else
        {
            cout<<"\tWrong input";
            goto loop;
        }
        }
};
string booking :: month;
string booking :: date_b;
void logo2()
{
        ifstream logo2("logo2.txt");
        char ch;
            if(logo2.is_open())
            {
                    while(!logo2.eof())
                    {
                        logo2.get(ch);
                        cout<<ch;
                    }
            logo2.close();
            }
}
void logo()
{
    ifstream logo("logo.txt");
        char ch;
            if(logo.is_open())
            {
                    while(!logo.eof())
                    {
                        logo.get(ch);
                        cout<<ch;
                    }
            logo.close();
            }
         cout<<endl;
         cout<<"\t\t\t\t\t\t\tInitializing";
         for(int i=0;i<8;i++)
         {
             cout<<".";
             Sleep(300);
         }
         Sleep(600);
         system("cls");
          logo2();
        cout<<endl;
}
int adminwork(int p)
{
      int a,ch,date,train,i,h_ac[30],h_nac[30],q,route_num,pq,l,k,b,g;
    float t_ac[30],t_nac[30];
    string username,add,time[30],password,un,pw,x,pass,filename1,filename2,filename3,t[30],route_numt[300],route_ad,ch1,route_numa,traint,ac,nac,tac,tnac;
    static string month,date_b;
                    system("cls");
                    logo2();
                    cout<<endl;
                      char d[12]; char ti[10];
                        cout << "\n\t\t\t\t\t\t"<< _strtime(ti) << "\t" << _strdate(d) << endl;
                    cout<<"\n\tWelcome back!\n\n";
                    frist:
                    cout<<"\n\tChoose : \n\t1.Add";
                    cout<<"\n\t2.Remove\n\t";
                    cout<<"(Enter 1/2)\n\t";
                    cout<<"---------------------\n\t";
                    cout<<"Your input :      ";
                    cin>>q;
                    system("cls");
                    logo2();
                    cout<<endl;
                    if(q==1)
                    {
                        cout<<"\n\t1.Add tickets of a Day";
                        cout<<"\n\t2.Add tickets of a Route";
                        cout<<"\n\t3.Add or modify tickets of a train\n\t";
                        cout<<"(Enter 1/2/3)\n\t";
                        cout<<"--------------------------------------------\n\t";
                        cout<<"\tYour choice : \t";
                        cin>>b;
                        if(b==1)
                        {
                                                                again_input:
                            cout<<"\tName of the date,month : (like - '14,november')";
                            cin>>month;
                            cout<<"\tTotal number of Route : ";
                            cin>>route_num;
                            cout<<"\tEnter your route names (like - 'Dhaka-Shylet' ): "<<endl;
                            for(pq=1;pq<=route_num;pq++)
                            {
                                cout<<"\t"<<pq<<". ";
                                cin>>route_numt[pq];
                            }
                            for(pq=1;pq<=route_num;pq++)
                            {
                                    ofstream file5;
                                    filename1="Route/"+route_numt[pq]+".txt";
                                    file5.open(filename1.c_str());
                                    file5 << "a" << endl;
                                    file5.close();
                            }
                        for(pq=1;pq<=route_num;pq++)
                        {
                                cout<<"\n\tFor route - \n\t"<<pq<<". "<<route_numt[pq]<<endl;
                                cout<<"\tTotal train : ";
                                cin>>train;
                                for(i=1;i<=train;i++)
                                {
                                    time_again:
                                    cout<<"\t"<<i<<".Train time : (24hour format)\n\t";
                                    cin>>t[i];
                                    cout<<"\tHow many tickets available for Ac cabin : ";
                                    cin>>h_ac[i];
                                    cout<<"\tHow many tickets available for Non Ac cabin : ";
                                    cin>>h_nac[i];
                                    cout<<"\tTicket price for Ac cabin : ";
                                    cin>>t_ac[i];
                                    cout<<"\tTicket price for Non Ac cabin : ";
                                    cin>>t_nac[i];
                                }
                        }
                                            ofstream file2;
                                            filename1="Date/"+month+".txt";
                                            file2.open(filename1.c_str());
                                            file2 << "\tRoute available - " << endl;
                                            file2<<"\n";
                                            for(pq=1;pq<=route_num;pq++)
                                            {
                                                file2<<"\t"<<route_numt[pq]<<endl;
                                            }
                                            file2<<"\n";
                                            file2.close();
                                    ofstream file3;
                                    for(pq=1;pq<=route_num;pq++)
                                    {
                                        filename1="Time/"+month+route_numt[pq]+".txt";
                                        file3.open(filename1.c_str());
                                        file3<<"\tTrain Available - \n"<<endl;
                                         file3<<"\tTrain Time - "<<endl;
                                        for(i=1;i<=train;i++)
                                        {
                                           file3<<"\n\t"<<t[i]<<endl;
                                        }
                                        file3.close();
                                    }
                            ofstream file4;
                            for(pq=1;pq<=route_num;pq++)
                            {
                                for(i=1;i<=train;i++)
                                {
                                        filename1="Time/"+month+route_numt[pq]+t[i]+".txt";
                                        file4.open(filename1.c_str());
                                            file4<<"\tAvailabe Ac Tickets\tAvaible Non-ac Tickets"<<endl;
                                            file4<<"\t"<<h_ac[i]<<"         \t\t"<<h_nac[i]<<endl;
                                            file4<<"\tPrice for Ac Tickets\tPrice for Non-ac Tickets"<<endl;
                                            file4<<"\t"<<t_ac[i]<<"            \t\t"<<t_nac[i]<<endl;
                                        file4.close();
                                }
                            }
                            ofstream file6;
                            for(pq=1;pq<=route_num;pq++)
                            {
                                for(i=1;i<=train;i++)
                                {
                                    filename1="Time/"+month+route_numt[pq]+t[i]+"took.txt";
                                        file6.open(filename1.c_str());
                                        file6<<h_ac[i]<<endl;
                                        file6<<h_nac[i]<<endl;
                                        file6<<t_ac[i]<<endl;
                                        file6<<t_nac[i]<<endl;
                                        file6.close();
                                }
                            }
                    again:
                     system("cls");
                     logo2();
                     cout<<endl;
                     cout<<"\tSuccessfully Created !\n";
                    cout<<"\tChoose your number :\n\t1.Again input\n\t2.Log out"<<endl;
                    cout<<"\tYour Input :       ";
                    cin>>a;
                    if(a==1)
                    {
                        goto again_input;
                    }
                    else if(a==2)
                    {
                        cout<<"\n\tThank You!";
                       p=0;
                        return p;
                    }
                    else
                    {
                        cout<<"\n\tWrong Input";
                        goto again;
                    }
                        }
                        else if(b==2)
                        {
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\tEnter the name of the date,month (like - '14,november' ): \n\t";
                            cin>>month;
                            filename1="Date/"+month+".txt";
                                        ifstream cm(filename1.c_str());
                                        if(cm.is_open())
                                        {
                                            system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cm,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                            cout<<"\tEnter the route name (like - 'Dhaka-Shylet' ): \n\t";
                            cin>>route_numa;
                                system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\tTotal train : ";
                                cin>>train;
                                for(i=1;i<=train;i++)
                                {
                                    cout<<"\t"<<i<<".Train time : (24hour format(like - 15.20))\n\t";
                                    cin>>t[i];
                                    cout<<"\tHow many tickets available for Ac cabin : ";
                                    cin>>h_ac[i];
                                    cout<<"\tHow many tickets available for Non Ac cabin : ";
                                    cin>>h_nac[i];
                                    cout<<"\tTicket price for Ac cabin : ";
                                    cin>>t_ac[i];
                                    cout<<"\tTicket price for Non Ac cabin : ";
                                    cin>>t_nac[i];
                                }
                            ofstream file4;
                                for(i=1;i<=train;i++)
                                {
                                        filename1="Time/"+month+route_numa+t[i]+".txt";
                                        file4.open(filename1.c_str());
                                            file4<<"\tAvailabe Ac Tickets\tAvaible Non-ac Tickets"<<endl;
                                            file4<<"\t"<<h_ac[i]<<"         \t\t"<<h_nac[i]<<endl;
                                            file4<<"\tPrice for Ac Tickets\tPrice for Non-ac Tickets"<<endl;
                                            file4<<"\t"<<t_ac[i]<<"            \t\t"<<t_nac[i]<<endl;
                                        file4.close();
                                }
                            ofstream file6;
                                for(i=1;i<=train;i++)
                                {
                                    filename1="Time/"+month+route_numa+t[i]+"took.txt";
                                        file6.open(filename1.c_str());
                                        file6<<h_ac[i]<<endl;
                                        file6<<h_nac[i]<<endl;
                                        file6<<t_ac[i]<<endl;
                                        file6<<t_nac[i]<<endl;
                                        file6.close();
                                }
                                ofstream file7;
                                filename2="Route/"+route_numa+".txt";
                                file7.open(filename2.c_str());
                                file7.close();
                                filename1 = month + ".txt";
                                ofstream file11(filename1.c_str(),ios :: app);
                                file11<<"\n\t"<<route_numa<<endl;
                                file11.close();
                                filename1= "Time/"+month + route_numa +".txt";
                                ofstream file3;
                                        filename1=month+route_numa+".txt";
                                        file3.open(filename1.c_str(),ios::app);
                                        for(i=1;i<=train;i++)
                                        {
                                           file3<<"\n\t"<<t[i]<<endl;
                                        }
                                        file3.close();
                            system("cls");
                            logo2();
                            cout<<endl;
                                cout<<"Successfully Created !"<<endl;
                                goto frist;
                        }
                        else
                        {
                                    system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\tWrong input or no tickets available."<<endl;
                            goto frist;
                        }
                        }
                        else if(b==3)
                        {
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\n\tEnter the day,month (like - '14,november'): \t";
                            cin>>month;
                            filename1="Date/"+month+".txt";
                                  ifstream cm(filename1.c_str());
                                        if(cm.is_open())
                                        {
                                            system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cm,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                            cout<<"\n\tEnter the route (like- 'Dhaka-Shylet' ): \n\t";
                            cin>>route_numa;
                            filename1="Time/"+month+route_numa+".txt";
                            ifstream cmr(filename1.c_str());
                            if(cmr.is_open())
                            {
                                system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cmr,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                                        cout<<"\n\tEnter the train time : \n\t";
                                        cin>>traint;
                                    cout<<"\tHow many tickets available for Ac cabin : ";
                                    cin>>ac;
                                    cout<<"\tHow many tickets available for Non Ac cabin : ";
                                    cin>>nac;
                                    cout<<"\tTicket price for Ac cabin : ";
                                    cin>>tac;
                                    cout<<"\tTicket price for Non Ac cabin : ";
                                    cin>>tnac;
                                        filename1="Time/"+month+route_numa+traint+".txt";
                                        ofstream file4;
                                        file4.open(filename1.c_str());
                                            file4<<"\tAvailabe Ac Tickets\tAvaible Non-ac Tickets"<<endl;
                                            file4<<"\t"<<ac<<"         \t\t"<<nac<<endl;
                                            file4<<"\tPrice for Ac Tickets\tPrice for Non-ac Tickets"<<endl;
                                            file4<<"\t"<<tac<<"            \t\t"<<tnac<<endl;
                                        file4.close();
                                        ofstream file6;
                                         filename2="Time/"+month+route_numa+traint+"took.txt";
                                        file6.open(filename2.c_str());
                                        file6<<ac<<endl;
                                        file6<<nac<<endl;
                                        file6<<tac<<endl;
                                        file6<<tnac<<endl;
                                        file6.close();
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"Successfully Created !"<<endl;
                            goto frist;
                            }
                            else
                            {
                                    system("cls");
                                    logo2();
                                    cout<<endl;
                                    cout<<"\t Wrong input or no tickets avaiable"<<endl;
                                    goto frist;
                            }
                        }
                        else
                        {
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\t Wrong input or no tickets avaiable"<<endl;
                            goto frist;
                        }
                        }
                        else
                        {
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\n\tWrong input. Please input correctly. "<<endl;
                            goto frist;
                        }
                    }
                    else if(q==2)
                    {
                            system("cls");
                            logo2();
                            cout<<endl;
                            cout<<"\n\tChoose your number : \n\t-----------\n\t1.Remove tickets of a Day.\n\t2.Remove tickets of a Route.\n\t3.Remove tickets of a Train.\n\n\tYour Choice : \t";
                            cin>>g;
                            if(g==1)
                            {
                                cout<<"\n\tdate,month (like - '14,november '): ";
                                cin>>month;
                                filename1="Date/"+month+".txt";
                                remove(filename1.c_str());
                                system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\n\t\tRemove Done !";
                                goto frist;
                            }
                            else if(g==2)
                            {
                                cout<<"\n\tdate,month (like - '14,november '): ";
                                cin>>month;
                                system("cls");
                                logo2();
                                cout<<endl;
                                filename1="Date/"+month + ".txt";
                                    ifstream cm(filename1.c_str());
                                        if(cm.is_open())
                                        {
                                            system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cm,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                                cout<<"\n\tEnter the route ( like - 'Dhaka-Shylet '): ";
                                cin>>route_numa;
                                filename1="Time/"+month+route_numa+".txt";
                                remove(filename1.c_str());
                                system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\n\t\tRemove Done !";
                                goto frist;
                            }
                            else
                            {
                                cout<<"\n\tDate is not available.";
                                goto frist;
                            }
                            }
                            else if(g==3)
                            {
                                cout<<"\n\tdate,month (like - '14,november '): ";
                                cin>>month;
                                system("cls");
                                logo2();
                                cout<<endl;
                                filename1="Date/"+month + ".txt";
                                    ifstream cm(filename1.c_str());
                                        if(cm.is_open())
                                        {
                                            system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cm,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                                cout<<"\n\tEnter the route (like - 'Dhaka-Shylet' ): \t";
                                cin>>route_numa;
                                filename1="Time/"+month + route_numa+ ".txt";
                                    ifstream cmr(filename1.c_str());
                                        if(cmr.is_open())
                                        {
                                            system("cls");
                                            logo2();
                                            cout<<endl;
                                            while(getline(cmr,ch1))
                                                {
                                                    cout<<ch1<<'\n';
                                                }
                                        cm.close();
                                        cout<<"\n\tEnter the time of train : \t";
                                        cin>>traint;
                                filename1="Time/"+month+route_numa+traint+".txt";
                                remove(filename1.c_str());
                                system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\n\t\tRemove Done !";
                                goto frist;
                            }
                            else
                            {
                                    system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\n\tTrain is not available";
                                goto frist;
                            }
                                        }
                                        else
                                        {
                                                system("cls");
                                                logo2();
                                                cout<<endl;
                                                cout<<"\n\tTrain is not available";
                                                goto frist;
                                        }
                            }
                            else
                            {
                                system("cls");
                                logo2();
                                cout<<endl;
                                cout<<"\n\tWrong Input";
                                goto frist;
                            }
                    }
                    else
                    {
                        system("cls");
                        logo2();
                        cout<<endl;
                        cout<<"\n\tWrong Input";
                        goto frist;
                    }

}
int main()
{
    system("Color 1A");
    Sleep(200);
    system("Color 2B");
    Sleep(200);
    system("Color 3C");
    Sleep(200);
    system("Color 70");
    Sleep(200);
    system("Color 4D");
    Sleep(200);
    system("Color 5E");
    Sleep(200);
    system("Color 6F");
    Sleep(200);
    system("Color D9");
    Sleep(200);
    system("Color F0");
    logo();
    booking obj;
    system("cls");
    logo2();
    loop:
    int x,y,z;
    cout<<"\tChoose your number : ";
    cout<<"\n\t1.Admin\n\t2.User\n";
    cout<<"\tYour choice :     ";
    cin>>x;
    if(x==1)
    {
        obj.logad();
    }
    else if(x==2)
    {
        obj.loguse();
    }
    else
    {
        system("cls");
        logo2();
        cout<<endl;
        cout<<"\tWrong Input\n";
        goto loop;
    }
    getch();
    return 0;
}
