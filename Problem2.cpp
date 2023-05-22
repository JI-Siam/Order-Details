#include<iostream>
using namespace std;

class Order{
private:
int order_number;
string location;
int discount;
float price;
public:
    Order(){
    }
Order(int a,int b){
order_number=a;
price=b;
}
void setdiscount(int a){
    discount=a;
}
int getdiscount(){
return discount;
}
void setlocation(string a){
    location=a;
}
string getlocation(){
return location;
}
void showOrderDetails(){
    cout<<"\t\t\tOrder Number       : "<<order_number<<endl;
    cout<<"\t\t\tOrder Location     : "<<location<<endl;
    cout<<"\t\t\tProduct Price      : "<<price<<endl;
    float dicprc=(price*discount)/100.0;
    double totalpay=price-dicprc+50;
    cout<<"\t\t\tDelivery Charge    : 50 Taka"<<endl;
    cout<<"\t\t\t<Congratulations You Got "<<discount<<"% Discount>"<<endl;
    cout<<"\t\t\tTotal Payable Price: "<<totalpay<<endl;

}

};

int main()

{
    int order[250];
   string loc[250];
   float price[250];
   int discnt[250];
    for(int i=1;i>0;i++){

   cout<<"Enter Order Number:";
   cin>>order[i];
   cout<<"Enter Location:";
   cin>>loc[i];
   cout<<"Enter Discount Percentage:";
   cin>>discnt[i];
   cout<<"Enter Price:";
   cin>>price[i];
   system("cls");
      cout<<"_____________________________________________________________________________________"<<endl;
        cout<<"|                                ORDER DETAILS                                      |  "<<endl;
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";


   Order o1(order[i],price[i]);
   o1.setdiscount(discnt[i]);
   o1.setlocation(loc[i]);
   o1.showOrderDetails();
   cout<<"\n\n\n\t\t\t";
    char flag;
   cout<<"To continue enter Y/y else press any key:";
   cin>>flag;
   if(flag=='Y'|| flag=='y'){
        system("cls");
    continue;
   }
   else{
    break;
   }
    }


    return 0;
}

