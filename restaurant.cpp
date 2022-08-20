#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> names;
    int n=0;
    int price[]={300,250,150,50,75};
    int v[]={40,35,30,10,15};
int burst[100];
int token[100];
cout<<"\t\t\t|-------------------------------------------------------|\n";
cout<<"\t\t\t|               Fast Food Ordering System        |\n";
cout<<"\t\t\t|-------------------------------------------------------|\n\n";
int x=0;
do{
		string name;
        cout<<"Please Enter Your Name: ";
            cin>>name;
            names.push_back(name);
            cout<<"Hello "<<names[n]<<"\n\nWhat would you like to order?\n\n";
                cout<<"\t\t\t|-------------------------------------------------------|\n";
           cout<<"\t\t\t|                      Fast Food Menu                   |\n";
           cout<<"\t\t\t|-------------------------------------------------------|\n\n";

           cout<<"[Choice 1] Paperoni Pizza\n";
           cout<<"[Choice 2] Big mac Burger\n";
           cout<<"[Choice 3] Chicken Sandwich\n";
           cout<<"[Choice 4] Noodles\n";
           cout<<"[Choice 5] French Fries\n\n";
          int m=0;
          int k=0;
          int totalbill=0;
           do{
               int choice;
               cout<<"\nPlease Enter your Choice: ";
               cin>>choice;
               if(choice==1){
                   cout<<"THANKS FOR ORDERING PAPERONI PIZZA!!!\n\n";
                   m+=v[0];
                   totalbill=totalbill+price[0];
               }
               else if(choice==2){
                   cout<<"THANKS FOR ORDERING BIG MAC BURGER!!!\n\n";
                   m+=v[1];
                   totalbill=totalbill+price[1];
               }
               else if(choice==3){
                   cout<<"THANKS FOR ORDERING CHICKEN SANDWICH!!!\n\n";
                   m+=v[2];
                   totalbill=totalbill+price[2];
               }
               else if(choice==4){
                   cout<<"THANKS FOR ORDERING NOODLES!!!\n\n";
                   m+=v[3];
                   totalbill=totalbill+price[3];
               }
               else if(choice==5){
                   cout<<"THANKS FOR ORDERING FRENCH FRIES!!!\n\n";
                   m+=v[4];
                   totalbill=totalbill+price[4];
               }
               cout<<"Do you want to order any more items? ";
               cin>>k;
           }while(k!=0);
           cout<<"\nYour Total Bill is \n";
           cout<<totalbill;
           cout<<"\nYour Order Will be delivered in "<<m<< "Minutes"<<endl;
           burst[n]=m;
           token[n]=n+1;
           n++;
           cout<<"\n\nDo you want to continue? ";
           cin>>x;
}
  while(x!=0);
  vector<pair<int,int> >vt;
for(int i=0;i<n;i++){
  vt.push_back({burst[i],token[i]});
}
sort(vt.begin(),vt.end());
for(int i=0;i<n;i++)
{
	burst[i]=vt[i].first;
	token[i]=vt[i].second;
}
int waiting[n];
waiting[0]=0;
for(int i=1;i<n;i++){
   waiting[i]=waiting[i-1]+burst[i-1];
}
cout<<"\t\t\t|-------------------------------------------------------|\n";
cout<<"\t\t\t|    FOOD ORDER SYSTEM IMPLEMENTATION USING SJF AND FCFS        |\n";
cout<<"\t\t\t|-------------------------------------------------------|\n\n";
cout<<"token number"<<"\t\t\t"<<"time taken to recieve food"<<"\t"<<"order time"<<endl;
cout<<"\t\t\t-----------------------------------------------------------------------------"<<endl;
for(int i=0;i<n;i++){
   cout<<token[i]<<"\t\t\t\t"<<waiting[i]<<"\t\t\t\t"<<burst[i]<<endl;
}

cout<<"\t\t\tTHANK YOU";
return 0;
}
