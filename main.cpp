#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "enter id of your item  " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    int count;
    cout<<"How many item do you want to be listed"<<endl;
    cin>>count;
    dukan.initcounter();
    while(count>0){
    	dukan.setprice();
        count--;
    }

    dukan.displayprice();
    return 0;
}
