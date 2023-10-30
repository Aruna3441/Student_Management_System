#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
    int choice;
  cout<<"\t\t\t\t\t\t\t\t How many student do you want to enter : ";
  cin>>choice;
  cout<<"\n\n\t\t\t\t ********************************************************************************************* \n\n\n";
  if(total==0)
  {
      total=total+choice; //1
      for(int i=0;i<choice;i++)
      {
         cout<<"\t\t\t\t\t\t\t\t Enter data of student"<<i+1<<endl<<endl;
         cout<<"\t\t\t\t\t\t\t\t Enter name: ";
         cin>>arr1[i];
         cout<<"\t\t\t\t\t\t\t\t Enter Roll_NO :";
         cin>>arr2[i];
         cout<<"\t\t\t\t\t\t\t\t Enter Course: ";
         cin>>arr3[i];
         cout<<"\t\t\t\t\t\t\t\t Enter Class : ";
         cin>>arr4[i];
         cout<<"\t\t\t\t\t\t\t\t Enter Contact :";
         cin>>arr5[i];
        }
    }
    else
    {
         for(int i=total;i<total+choice;i++)  //t - 1 cond - 2
      {
         cout<<"enter data of student"<<i+1<<endl<<endl;
         cout<<"Enter name: ";
         cin>>arr1[i];
         cout<<"Enter Roll_NO :";
         cin>>arr2[i];
         cout<<"Enter Course: ";
         cin>>arr3[i];
         cout<<"Enter Class : ";
         cin>>arr4[i];
         cout<<"Enter Contact :";
         cin>>arr5[i];
        }
    } 
    total=total+choice;  // t = 2
}
void show()
{
    for(int i=0;i<total;i++)   // 0 < 2  1 < 2
    {
        cout << "\t\t\t\t ------------------- Data Showing  ------------------------ \n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t Data of student: "<<i+1<<endl<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t Name: "<<arr1[i]<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t Roll_NO : "<<arr2[i]<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t Course : "<<arr3[i]<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t Class : "<<arr4[i]<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout<<"\t\t\t\t\t\t\t  contact :"<<arr5[i]<<endl;
        cout<<"\t\t\t\t | \t\t\t\t\t\t\t |\n";
        cout << "\t\t\t\t ----------------------------------------------------------\n";
    }
}
void search()
{
    string Roll_NO;
   cout<<"Enter Roll_no of student which you want to search  :";
   cin>>Roll_NO;
   for(int i=0;i<total;i++)
   {
    if (Roll_NO==arr2[i])
    {
     cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Roll_NO : "<<arr2[i]<<endl;
        cout<<"Course : "<<arr3[i]<<endl;
        cout<<"Class : "<<arr4[i]<<endl;
        cout<<"contact :"<<arr5[i]<<endl;
    }
   
    }
   

}
void update()
{
  string Roll_NO;
   cout<<"Enter Roll_no of student which you want to search  :";
   cin>>Roll_NO;
   for(int i=0;i<total;i++)
   {
    if (Roll_NO==arr2[i])
    {
        cout<<"previous data"<<endl;
     cout<<"Data of student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Roll_NO : "<<arr2[i]<<endl;
        cout<<"Course : "<<arr3[i]<<endl;
        cout<<"Class : "<<arr4[i]<<endl;
        cout<<"contact :"<<arr5[i]<<endl; 
        cout<<"New data"<<endl;
        cout<<"Enter name: ";
         cin>>arr1[i];
         cout<<"Enter Roll_NO :";
         cin>>arr2[i];
         cout<<"Enter Course: ";
         cin>>arr3[i];
         cout<<"Enter Class : ";
         cin>>arr4[i];
         cout<<"Enter Contact :";
         cin>>arr5[i];


    }
   }      
}
void deleteRecord()
{
    int a;
    cout<<"press 1.delete full data";
    cout<<"press 2.delete specific data";
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"All record is deleted"<<endl;
    }
    else if(a==2)
    {
        string Roll_NO;
        cout<<"enter rollno which you want to delete"<<endl;
        cin>>Roll_NO;
        for(int i=0;i<total;i++)
        {
            if(Roll_NO==arr2[i])
            {
                for(int j=i;j<total;j++){

                arr1[i]=arr1[j+1];
                arr2[i]=arr2[j+1];
                arr3[i]=arr3[j+1];
                arr4[i]=arr4[j+1];
                arr5[i]=arr5[j+1];
                }

            }
            total--;
            cout<<"your required record is delete"<<endl;

        }
    }
}

int main()
{
    int value;
   while(true)
   {
    cout<<"\t\t\t\t ********************************************************************************************* \n\n\n";
    cout<<"\t\t\t\t\t\t\t\t Student Management System \n\n\n";
    cout<<"\t\t\t\t ********************************************************************************************* \n\n\n";
    cout<<"\t\t\t\t\t\t\t\t 1.enter the data"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2.show data"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 3.search data"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 4.update data"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 5.delete data"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 6.exit \n\n\n"<<endl;
    cout<<"\t\t\t\t ********************************************************************************************* \n\n\n";
    cout<<"\t\t\t\t\t\t\t\t Enter ur choice :";
    cin>>value;
    switch(value)
    {
        case 1:
        enter();
        break;
        case 2:
        show();
        break;
        case 3:
        search();
        break;
        case 4:
        update();
        break;
        case 5:
        deleteRecord();
        break;
        case 6:
        exit(0);
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;


    }
   }
    return 0;

}