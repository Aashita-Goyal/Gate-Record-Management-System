/* Gate Record Management System Project 
By Aashita Goyal
   1913541
   BTech IT
   2nd year
*/
   
   
   



/*
             GATE RECORD SYSTEM FOR HOSTEL SHANTA VASATI
             
# This software lets the user:
      1. Enter details of a STUDENT entering or exiting the hostel
      2. Enter details of a VISITOR entering or exiting the hostel
      3. View entry exit timings of all Students
      4. View entry exit timings of all Visitors
      
      
# It can also do the following:
 (I HAVE CREATED THE FUNCTIONS FOR THE FOLLOWING. THEY HAVE NOT BEEN LINKED TO THE MAIN PROGRAM.
  THE CODES ARE GIVEN AT THE BOTTOM UNDER COMMENTS)
  
  *******Details and Schedules*******
     1. Show details of all the students in the hostel
     2. Show details of all staff members working in the hostel - in hostel staff and day scholar staff
     3. Show scheduled timings of watchman
     4. Show gate open-close schedule
     
 *******Attendance********
     1. Show attendance of all students    (if any on leave)
     2. Show attendance of in-hostel staff (if any on leave)
     3. Show attendance of day scjolar staff 
     
********Record********
     1. Show the timings when gate was closed and opened each day
     2. Show the visiting record of staff
     3. Show late entry students

*/


#include <iostream>           
#include<fstream>             
#include<windows.h>           //Window specific header for functions in Windows
#include<conio.h>
#include<string>

using namespace std;

void intro();                              //Front Page - Enter menu or Exit software
void mainmenu();                           //Menu - Details, Attendance, Record
void exit_statement();                     //Exit Page 
void record();             
void details();
void attendance();
void coutc(int color, char* output);      //function to show new menu in different color
void entry();
void read_vis();
void read_stu();
void student_entry_create();
void student_details_input();

int main()
{
	system("color 40");
    char c1;
    system("cls");
    intro();

    do{
   system("cls");
   system("color e");
   cout<<"\n\n";
   cout<<"\t====================|GATE RECORD SYSTEM FOR HOSTEL|===================="<<endl;
   cout<<endl;
   cout<<"\t\t\t\t1. MAIN MENU\n\n";
   cout<<"\t\t\t\t2. EXIT to Thankyou Page :)\n\n";
   cout<<"Enter your choice : ";
   cin>>c1;
   system("cls");
   switch(c1)
   {
   case '1':
    {
        mainmenu();
        break;
    }
   case '2':
    {   
        exit_statement();
        break;
    }
   }
    }while(c1!='2');
    return 0;
}

void intro()
{

    cout << "\n\n\n";
    Sleep(300);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****    **" << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        **"<< endl;
    Sleep(300);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    **" << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        " << endl;
    Sleep(300);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****    **" << endl;
    cout << "\t\t\t\t                                              **" << endl;
    Sleep(300);
    cout<<endl;
    cout<<"\t\t\t\t==================================================="<<endl;
    Sleep(500);
    cout<<"\t\t\t\tTHIS IS GATE RECORD SYSTEM FOR HOSTEL SHANTA VASATI"<<endl;
    Sleep(500);
    cout<<"\t\t\t\t==================================================="<<endl;
    Sleep(500);
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
}


void mainmenu()
{
    system("color b");
    char c2;
    cout<<"\t\t\t\t=================MAIN MENU================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t(I)    VIEW RECORD\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t(II)   ENTER NEW\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t(III)  VIEW STUDENT/STAFF DETAILS AND SCHEDULES\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t(IV)   EXIT \n\n"<<endl;
     Sleep(300); 
    cout<<"\t\t\t\t====================="<<endl;
     Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
     Sleep(300);
    cin>>c2;
    cout<<endl;
    switch(c2)
    {
    case '1':
        {
            record();
            break;
        }
    case '2':
        {
            entry();
            break;
        }
    case '3':
        {
            details();
            break;
        }
    case '4':
        {
            exit_statement();
            break;
        }
    }
}

void exit_statement()
{
	system("color a");
	cout << "\t\t\t\t\t     THANK YOU FOR USING THIS SOFTWARE :)"<<endl;
    cout << "\n\n\n";
    cout << "\t          MADE BY:";
    cout << "\n\n"; 
    cout << "\t\t\tAashita Goyal\n\t\t\t1913541\n\t\t\tBTBTI19113" ;
    cout << "\n\t\t\tBTech 2nd year\n\t\t\tInformation Technology" ;
    cout << "\n\n";
    cout << "\t\t\t\t\t\t\t\t   SUBMITED TO:      Dr. Vaibhav Vyas\n";
    cout << "\t\t\t\t\t\t\t\t   SUBMISSION DATE:     02/05/2021 ";
    cout << "\n\n";
}

void record()
{
    char c3;
    coutc(5, (char*)"\n\n\t\t********************************************************************************\n");
    cout<<"\t\t\t\t\t\t         (I)\n"<<endl;
    cout<<"\t\t\t\t=================ENTRY-EXIT RECORD================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. VIEW ALL RECORDS\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t2. VIEW ONLY STUDENTS RECORDS\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t3. VIEW ONLY VISITORS RECORDS\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t4. GO BACK \n"<<endl;
    Sleep(300); 
    cout<<"\t\t\t\t=============================="<<endl;
    Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
    Sleep(300);
    cin>>c3;
    cout<<endl;
    switch(c3)
    {
    case '1':
        {
        	system("cls");
        	read_stu();
        	read_vis();
            cout<<"press any key to go to main menu...";
            cin.ignore();
            cin.get();
            system("cls");
            mainmenu();
        	break;
        }
    case '2':
        {
           system("cls");
           read_stu();
           cout<<"press any key to go to main menu...";
           cin.ignore();
           cin.get();
           system("cls");
           mainmenu();
           break;
        }
    case '3':
        {
        	system("cls");
        	read_vis();
            cout<<"press any key to go to main menu...";
            cin.ignore();
            cin.get();
            system("cls");
            mainmenu();
        	break;
        }
	case '4':
    	{
    		system("cls");
    		mainmenu();
            break;
		}
    }
}

void details()
{
    char c4;
    coutc(5, (char*)"\n\n\t\t***********************************************************************************************\n");
    cout<<"\t\t\t\t\t\t            (III)\n"<<endl;
    cout<<"\t\t\t\t=================ALL DETAILS AND SCHEDULES================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. VIEW STUDENTS INFO\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t2. VIEW STAFF INFO\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t3. VIEW WATCHMAN DAILY SCHEDULE\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t4. VIEW GATE OPEN-CLOSE SCHEDULE\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t5. GO BACK \n"<<endl;
     Sleep(300); 
    cout<<"\t\t\t\t6. EXIT \n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t=============================="<<endl;
     Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
     Sleep(300);
    cin>>c4;
    cout<<endl;
    switch(c4)
    {
    case '1':
        {
            
        }
    case '2':
        {
            
        }
    case '3':
        {
              
        }
    case '4':
        {
            
        }
    case '5':
    	{
    		system("cls");
    		mainmenu();
            break;
		}
	case '6':
    	{
    		exit_statement();
            break;
		}
    }
}


void coutc(int color, char* output)
{
   HANDLE handle= GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute( handle, color);
   std::cout<< output;
   SetConsoleTextAttribute( handle, color);
}

void entry()
{
	fstream newFILE_stu; 
	fstream newFILE_vis;
    char arr[100];
	
	char c6;
    coutc(5, (char*)"\n\n\t\t****************************************************************************************************\n");
    cout<<"\t\t\t\t\t\t               (II)\n"<<endl;
    cout<<"\t\t\t\t=================ENTER RECORD================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. STUDENT ENTRY\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t2. VISITOR ENTRY\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t3. GO BACK <-\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t=============================="<<endl;
    Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
    Sleep(300);
    cin>>c6;
    cout<<endl;
    switch(c6)
    {
    case '1':          //student entry
        {
        	
        	fstream newFILE_stu;
        	char arr1[100],arr2[100],arr3[100],arr4[100];
        	system("cls");
			newFILE_stu.open("student_entry", ios::out | ios::app);
        	//student_details_input();
        	cout<<"ENTER DETAILS\n\n"<<endl;
	        cout<<"Date: ";
	        cin.ignore();
	        cin.getline(arr1,100);
	        cout<<"\nName: ";
	        cin.getline(arr2,100);
	        cout<<"\nTime: ";
	        cin.getline(arr3,100);
	        cout<<"\nEntry/Exit: ";
	        cin.getline(arr4,100);
        	newFILE_stu << "\n"<<arr1 << endl;
        	newFILE_stu << arr2 << endl;
        	newFILE_stu << arr3 << endl;
        	newFILE_stu << arr4 << endl;
        	newFILE_stu.flush();
        	newFILE_stu.close();
        	
        	newFILE_stu.flush();
	        //fstream read;
	        //read.open("student_entry");
	        //read.close();
	        
	  
			cout<<"\n\n\nOperation performed succesfully and file saved!"<<endl;
        	break;
        }
    case '2':         //visitor entry
        {
            fstream newFILE_vis;
        	char arr5[100],arr6[100],arr7[100],arr8[100],arr9[100];
        	system("cls");
			newFILE_vis.open("visitor_entry", ios::out |ios::app);
			
        	cout<<"ENTER DETAILS\n\n"<<endl;
	        cout<<"Date: ";
	        cin.ignore();
	        cin.getline(arr5,100);
	        cout<<"\nStudent Name: ";
	        cin.getline(arr6,100);
	        cout<<"\nRelation with Student: ";
	        cin.getline(arr7,100);
	        cout<<"\nTime: ";
	        cin.getline(arr8,100);
	        cout<<"\nEntry/Exit: ";
	        cin.getline(arr9,100);
        	newFILE_vis << "\n"<<arr5 << endl;
        	newFILE_vis << arr6 << endl;
        	newFILE_vis << arr7 << endl;
        	newFILE_vis << arr8 << endl;
        	newFILE_vis << arr9 << endl;
        	newFILE_vis.flush();
        	newFILE_vis.close();
        	
        	newFILE_vis.flush();
        	
        	cout<<"\n\n\nOperation performed succesfully and file saved!"<<endl;
        	break;
        }
	case '3':
    	{
    		system("cls");
    		mainmenu();
            break;
		}
    }
}

void read_vis()
{
	       ifstream newFILE_vis_read;
	       char arr5[100],arr6[100],arr7[100],arr8[100],arr9[100];
		   newFILE_vis_read.open("visitor_entry", ios::in);

        	
        	while(!newFILE_vis_read.eof())
			{
			newFILE_vis_read >> arr5;
        	newFILE_vis_read >> arr6;
        	newFILE_vis_read >> arr7;
        	newFILE_vis_read >> arr8;
        	newFILE_vis_read >> arr9;
        	
        	cout << "\n"<< arr5 << endl;
        	cout << arr6 << endl;
        	cout << arr7 << endl;
        	cout << arr8 << endl;
        	cout << arr9 << endl;
    }
            
        	newFILE_vis_read.close();
}

void read_stu()
{
	ifstream newFILE_stu_read;
	       char arr1[100],arr2[100],arr3[100],arr4[100];
		   newFILE_stu_read.open("student_entry", ios::in);

        	
        	while(!newFILE_stu_read.eof())
			{
			newFILE_stu_read >> arr1;
        	newFILE_stu_read >> arr2;
        	newFILE_stu_read >> arr3;
        	newFILE_stu_read >> arr4;
        	
        	cout << "\n"<< arr1 << endl;
        	cout << arr2 << endl;
        	cout << arr3 << endl;
        	cout << arr4 << endl;
    }
            
        	newFILE_stu_read.close();
	
}

void student_entry_create()
{ 
fstream newFILE; 
newFILE.open("student_entry",ios::out);  
if(!newFILE) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
newFILE.close(); 
}
}







/*void student_details_input()
{
	char arr1[100],arr2[100],arr3[100],arr4[100];
//	string date,name,time,entry_exit;
	
	cout<<"ENTER DETAILS\n\n"<<endl;
	cout<<"Date: ";
	cin.ignore();
	cin.getline(arr1,100);
	cout<<"\nName: ";
	cin.getline(arr2,100);
	cout<<"\nTime: ";
	cin.getline(arr3,100);
	cout<<"\nEntry/Exit: ";
	cin.getline(arr4,100);
}*/


/*void read()
{
    ifstream fin;
    string line;
    // Open an existing file
    fin.open("visitor_entry");
     while(!fin.eof()){

            fin>>line;
            cout<<line<<" \n";
            }
}*/


/*
void entry_student()
{
	char c6;
    coutc(5, (char*)"\n\n\t\t****************************************************************************************************\n");
    cout<<"\t\t\t\t\t\t               (II)\n"<<endl;
    cout<<"\t\t\t\t=================ENTER RECORD================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. ENTER DATE:\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t2. ENTER NAME:\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t3. ENTER TIME:\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t4. ENTER ENTRY/EXIT: \n"<<endl;    
	Sleep(300); 
    cout<<"\t\t\t\t5. GO BACK \n"<<endl;
     Sleep(300); 
    cout<<"\t\t\t\t=============================="<<endl;
     Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
     Sleep(300);
    cin>>c6;
    cout<<endl;
    switch(c6)
    {
    case '1':
        {
        	
        }
    case '2':
        {
        	
        }
    case '3':
        {
              
        }
    case '4':
        {
        	
        }
    case '5':
        {
            system("cls");
            mainmenu();
            break;
        }
    }
}

void attendance()
{
    char c5;
    coutc(5, (char*)"\n\n\t\t****************************************************************************************************\n");
    cout<<"\t\t\t\t\t\t               (IV)\n"<<endl;
    cout<<"\t\t\t\t=================ATTENDANCE FOR STAFF AND STUDENTS================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. VIEW STUDENTS ATTENDANCE DETAILS\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t2. VIEW IN-HOSTEL STAFF ATTENDANCE DETAILS\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t3. VIEW OUT-HOSTEL STAFF ATTENDANCE DETAILS\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t4. GO BACK \n\n"<<endl;
     Sleep(300); 
    cout<<"\t\t\t\t5. EXIT \n"<<endl;
     Sleep(300); 
    cout<<"\t\t\t\t=============================="<<endl;
     Sleep(300);
    cout<<"\t\t\t\tEnter your choice : ";
     Sleep(300);
    cin>>c5;
    cout<<endl;
        switch(c5)
    {
    case '1':
        {
        	
        }
    case '2':
        {
        	
        }
    case '3':
        {
              
        }
    case '4':
        {
        	system("cls");
            mainmenu();
            break;
        }
    case '5':
        {
            exit_statement();
            break;
        }
    }
}
*/


