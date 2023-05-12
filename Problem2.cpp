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
    cout<<"\t\t\tOrder Number:"<<order_number<<endl;
    cout<<"\t\t\tOrder Location:"<<location<<endl;
    float dicprc=(price*discount)/100.0;
    double totalpay=price-dicprc+50;
    cout<<"\t\t\tTotal Payable Price:"<<totalpay<<endl;

}

};

int main()

{

   int order;
   string loc;
   float price;
   int discnt;
   cout<<"Enter Order Number:";
   cin>>order;
   cout<<"Enter Location:";
   cin>>loc;
   cout<<"Enter Discount Percentage:";
   cin>>discnt;
   cout<<"Enter Price:";
   cin>>price;
   system("cls");
      cout<<"_____________________________________________________________________________________"<<endl;
        cout<<"|                                ORDER DETAILS                                      |  "<<endl;
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";


   Order o1(order,price);
   o1.setdiscount(discnt);
   o1.setlocation(loc);
   o1.showOrderDetails();


    return 0;
}

