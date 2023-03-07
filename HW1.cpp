#include <iostream>
using namespace std;

int main() {
    int no_of_shares=1000;
    float paid_share=45.50,sold_share=56.90,sold_commission,total_paid;
    float bought_commission, total_sold,profit;
    total_paid=no_of_shares*(paid_share);
    bought_commission=total_paid*(0.02);
    total_sold=no_of_shares*(sold_share);
    sold_commission=total_sold*(0.02);
    profit=total_sold-bought_commission-sold_commission;
    cout<<"Amount of money joe paid: $"<<total_paid<<"\n";
    cout<<"Commission for broker: $"<<bought_commission<<"\n";
    cout<<"Amount joe sold stock: &"<<total_sold<<"\n";
    cout<<"commision paid to selling: $"<<sold_commission<<"\n";
    cout<<"profit: "<<profit;
    return 0;
}