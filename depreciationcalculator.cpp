#include <iostream>
using namespace std;
class Depreciation{
    private:
    int buyinmnth;
    int currentmnth;
    int difmnth;
    int buyinprice,nodays;
    int dep;
    public:
    Depreciation()
    {
        cout<<"Enter the month in which you bought your Equipment:"<<endl;
        cout<<"WHERE:"<<endl<<"Jan=1\tFeb=2\tMar=3"<<endl<<"Apr=4\tMay=5\tJun=6"<<endl<<"Jul=7\tAug=8\tSep=9"<<endl<<"Oct=10\tNov=11\tDec=12"<<endl;
        cin>>buyinmnth;
        cout<<"Enter the current Month: "<<endl;
        cin>>currentmnth;
        cout<<"Enter the buying Price"<<endl;
        cin>>buyinprice;
        if(buyinmnth>currentmnth)
        {cout<<"ERROR! Buying month CANNOT be MORE than Current month"<<endl;}
        if(buyinmnth==currentmnth)
        {
            cout<<"Enter the number of days passed Since buying:"<<endl;
            cin>>nodays;
            dep=buyinprice-nodays*3;
        }
       if(currentmnth>buyinmnth){difmnth=currentmnth-buyinmnth;
       dep=buyinprice-(buyinprice/difmnth);};

    }
    void display()
    {
        cout<<"You can sell your Equipment at an approximate price of  "<<dep<<endl;
    }
};
int main()
{   Depreciation dep1;
    dep1.display();
    cout<<endl;
    return 0;
}
