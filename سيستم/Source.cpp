                      
                         //project on oop//
#include<iostream>
#include <string>
#include<conio.h>
#include <cstdlib>
#include <cstdio>
using namespace std;
class trip_1
{
protected:
    string bus_name;
    string driver_name;
    int seat_num;
    int time;
    string distance;
public:
    void reservation()
    {
        int r;
        cout << "1-to pay for the trip enter 1" << endl;
        cout << "2-to know the time of the trip enter 2" << endl;
        cout << "3-to make sure about your seat number enter 3" << endl;
        cout << "4-to know the distance of the travel enter 4" << endl;
        cout << "enter your choice:" << endl;
        cin >> r;
        switch (r)
        {
        case 1:
            if (r == 1)
            {
                double money;
                cout << "enter your money" << endl;
                cin >> money;
                if (money == 150)
                {
                    cout << "done your seat number is 10" << endl;
                    cout << "enjoy going to cairo  " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }

                else
                {
                    cout << "wrong input after that will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 2:
            if (r == 2)
            {
                cout << "the time of the trip_1 is" << endl;
                cin >> time;
                if ( time == 3)
                {
                    cout << "done your seat number is 5" << endl;
                    cout << "enjoy going to cairo  " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }
                else
                {
                    cout << "wrong input after that will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 3:
            if (r == 3)
            {
                cout << "enter your seat number again so we can make sure" << endl;
                cin >> seat_num;
                if (seat_num == 5)
                {
                    cout << "reservation is done" << endl;
                    cout << "enjoy going to cairo  " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }
                else
                {
                    cout << "wrong input will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 4:
            if (r == 4)
            {
                cout << "the distance of this trip is 175km" << endl;
                cout << "enjoy going to cairo  " << endl;
                cout << "you will receive information about the driver and the bus" << endl;
            }
            else
            {
                cout << "wrong input after that will not be valid" << endl;
                break;
            }
        default:
            break;
        }



    }

      

        void info()
        {
            cout << " the bus name is:" << endl;
            cin >> bus_name;
            cout << "the driver name is:" << endl;
            cin >> driver_name;
           
        }
        void result()
        {
            
            cout << "your bus name is:" << bus_name << endl;
            cout << "your seat number is 5" << endl;
            cout << "the time of this trip is 3" << endl;
        }
    
};
class trip_2:public trip_1
{
public:
    void reservation()
    {
        int r;
        cout << "1-to pay for the trip enter 1" << endl;
        cout << "2-to know the time of the trip enter 2" << endl;
        cout << "3-to make sure about your seat number enter 3" << endl;
        cout << "4-to know the distance of the travel enter 4" << endl;
        cout << "enter your choice:" << endl;
        cin >> r;
        switch (r)
        {
        case 1:
            if (r == 1)
            {
                double money;
                cout << "enter your money" << endl;
                cin >> money;
                if (money == 170)
                {
                    cout << "correct input" << endl;
                    cout << "enjoy going to alex " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }

                else
                {
                    cout << "wrong input after that  will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 2:
            if (r == 2)
            {
                cout << "the time of the trip 2 is" << endl;
                cin >> time;
                if ( time == 2)
                {
                    cout << "done your seat number is 14" << endl;
                    cout << "enjoy going to alex " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }
                else
                {
                    cout << "wrong input after that will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 3:
            if (r == 3)
            {
                cout << "enter your seat number again so we can make sure" << endl;
                cin >> seat_num;
                if (seat_num == 14)
                {
                    cout << "reservation is done" << endl;
                    cout << "enjoy going to alex " << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }
                else
                {
                    cout << "wrong input after that will not be valid" << endl;
                    break;
                }
            }
            else
            {
                break;
            }
            break;
        case 4:
            if (r == 4)
            {
                cout << "the distance of this trip is 117km" << endl;
                cout << "enjoy going to alex " << endl;
                cout << "you will receive information about the driver and the bus" << endl;
            }
            else
            {
                cout << "wrong input after that will not be valid" << endl;
                break;
            }
        default:
            break;
        }



    }


    
    
    void info()
    {
                    cout << " the bus name is:" << endl;
                   cin >> bus_name;
                    cout << "the driver name is:" << endl;
                    cin >> driver_name;
                    
                }
                
 
        void result()
        {
            cout << "your bus name is:" << bus_name << endl;
            cout << "the driver name is:" << driver_name << endl;
            cout << "your seat number is 14" << endl;
            cout << "the time of this trip is 2" << endl;
        }
 
};

class trip_3 :public trip_1
{
public:
    void reservation()
    {
        int r;
        cout << "1-to pay for the trip enter 1" << endl;
        cout << "2-to know the time of the trip enter 2" << endl;
        cout << "3-to make sure about your seat number enter 3" << endl;
        cout << "4-to know the distance of the travel enter 4" << endl;
        cout << "enter your choice:" << endl;
        cin >> r;
            switch (r)
            {
            case 1:
                if (r == 1)
                {
                    double money;
                    cout << "enter your money" << endl;
                    cin >> money;
                    if (money == 200)
                    {
                        cout << "correct input" << endl;
                        cout << "enjoy going to giza " << endl;
                        cout << "you will receive information about the driver and the bus" << endl;
                    }

                    else
                    {
                        cout << "wrong input after that will not be valid" << endl;
                        break;
                    }
                }
                else
                {
                    break;
                }
                break;
            case 2:
                if (r == 2)
                {
                    cout << "the time of the trip3 is" << endl;
                    cin >> time;
                    if ( time == 6)
                    {
                        cout << "done your seat number is 7" << endl;
                        cout << "enjoy going to giza " << endl;
                        cout << "you will receive information about the driver and the bus" << endl;
                    }
                    else
                    {
                        cout << "wrong input after that will not be valid" << endl;
                        break;
                    }
                }
                else
                {
                    break;
                }
                break;
            case 3:
                if (r == 3)
                {
                    cout << "enter your seat number again so we can make sure" << endl;
                    cin >> seat_num;
                    if (seat_num == 7)
                    {
                        cout << "reservation is done" << endl;
                        cout << "enjoy going to giza " << endl;
                        cout << "you will receive information about the driver and the bus" << endl;
                    }
                    else
                    {
                        cout << "wrong input after that will not be valid" << endl;
                        break;
                    }
                }
                else
                {
                    break;
                }
                break;
            case 4:
                if (r == 4)
                {
                    cout << "the distance of this trip is 140km" << endl;
                    cout << "you will receive information about the driver and the bus" << endl;
                }
                else
                {
                    cout << "wrong input after that will not be valid" << endl;
                    break;
                }
            default:
                break;
            }
        


    }
   
    void info()
    {
        cout << " the bus name is:" << endl;
        cin >> bus_name;
        cout << "the driver name is:" << endl;
        cin >> driver_name;
       
    }
    void result()
    {
        cout << "your bus name is:" << bus_name << endl;
        cout << "the driver name is:" << driver_name << endl;
        cout << "your seat number is 7" << endl;
        cout << "the time of this trip is 6" << endl;
    }
    
};

void main()
{
    cout << "\t \t[welcome to bus reservation system]\n" << endl;

    string name;
    int age;
    cout << "enter your name" << endl;
    cin >> name;
    cout << "enter your age" << endl;
    cin >> age;
    trip_1 l;
    trip_2 o;
    trip_3 s;
       int k;
       cout << "\t 1-going to cairo" << endl;
       cout << "\t 2-going to alex" << endl;
       cout << "\t 3-going to giza" << endl;
       cout << "\t4-to exit from the system" << endl;
       cout << "enter your choice:" << endl;
       cin >> k;
       switch (k)
       {
       case 1:
           l.reservation();
           l.info();
           l.result();
           break;
       case 2:
           o.reservation();
           o.info();
           o.result();
           break;
       case 3:
           s.reservation();
           s.info();
           s.result();
           break;
       case 4:
           break;
       default:
           cout << endl;
       }
  
}

