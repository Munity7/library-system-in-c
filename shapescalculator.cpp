#include <iostream>
using namespace std;
class Area
{
    private:
    int base;
    int height;
    int hypotenuse;
    public:
    int area;
    int perimeter;
    Area(int ba,int he,int hyp)
    {
        base=ba;
        he=height;
        hypotenuse=hyp;
    };
    Area()
    {
        int choice;
        int choice2;
        while(choice!='#'){
         cout<<"------------WELCOME-------------"<<endl;
        cout<<"Enter The shape you want to calculate:"<<endl;
        cout<<"1.Rectangle \t2.Square"<<endl<<"3.Circle \t4.Triangle"<<endl<<"5.Trapezium"<<endl;
        cin>>choice;
        if(choice==1)
        {cout<<"-----------You chose RECTANGLE-----------:"<<endl;
            cout<<"Choose between Area and Perimeter:"<<endl<<"1.AREA\t 2.PERIMETER"<<endl;
            cin>>choice2;
            if(choice2==1)
            {cout<<"------You chose AREA------:"<<endl;
                cout<<"Enter Length of rectangle:"<<endl;
                cin>>height;
                cout<<"Enter width of Rectangle:"<<endl;
                cin>>hypotenuse;
                area=height*hypotenuse;
                cout<<"Area of Rectangle="<<area<<"cm square"<<endl;}

        if(choice2==2){cout<<"-------You chose Perimeter-------:"<<endl;
                cout<<"Enter Length of rectangle:"<<endl;
                cin>>height;
                cout<<"Enter width of Rectangle:"<<endl;
                cin>>hypotenuse;
                perimeter=2*height+2*hypotenuse;
                cout<<"Perimeter="<<perimeter<<"cm"<<endl;}
                else cout<<"Enter a Valid Choice"<<endl;

                }

            if(choice==2)
            {

                cout<<"----------You chose SQUARE----------"<<endl;
            cout<<"Choose between Area and Perimeter:"<<endl<<"1.AREA\t 2.PERIMETER"<<endl;
            cin>>choice2;
            if(choice2==1)
            {cout<<"-----------You chose AREA---------:"<<endl;
                cout<<"Enter Length of Square"<<endl;
                cin>>height;
                area=height*height;
                cout<<"Area of SQUARE"<<area<<"cm square"<<endl;}
        if(choice2==2){cout<<"---------You chose Perimeter---------:"<<endl;
                cout<<"Enter Length of Square:"<<endl;
                cin>>height;
                perimeter=height*4;
                cout<<"Perimeter="<<perimeter<<"cm"<<endl;}

            else cout<<"Enter a Valid Choice"<<endl;
            }


    if(choice==3){
            cout<<"----------You chose CIRCLE-----------"<<endl;
            cout<<"Choose between Area and Perimeter:"<<endl<<"1.AREA\t 2.PERIMETER"<<endl;
            cin>>choice2;
            if(choice2==1)
                {cout<<"---------You chose AREA---------:"<<endl;
                cout<<"Enter RADIUS of circle: "<<endl;
                cin>>height;
                area=22/7*height*height;
                cout<<"Area of Circle="<<area<<"cm squares"<<endl;}

        if(choice2==2){cout<<"----------You chose Perimeter--------:"<<endl;
                cout<<"Enter DIAMETER of circle"<<endl;
                cin>>height;
                perimeter=22/7*height+height;
                cout<<"Perimeter  of circle="<<perimeter<<"cm square"<<endl;}

            else cout<<"Enter a Valid Choice"<<endl; }
             if(choice==4)
        {cout<<"-----------You chose TRIANGLE---------"<<endl;
            cout<<"Choose between Area and Perimeter:"<<endl<<"1.AREA\t 2.PERIMETER"<<endl;
            cin>>choice2;
            if(choice2==1)
            {cout<<"---------You chose AREA--------:"<<endl;
                cout<<"Enter Length of Triangle:"<<endl;
                cin>>height;
                cout<<"Enter base of Triangle:"<<endl;
                cin>>base;
                area=1/2*base*height;
                cout<<"Area of Triangel="<<area<<"cm squares"<<endl;}

        if(choice2==2){cout<<"---------You chose Perimeter----------:"<<endl;
                cout<<"Enter base of Triange:"<<endl;
                cin>>height;
                cout<<"Enter Side A of Triangle:"<<endl;
                cin>>hypotenuse;
                cout<<"Enter Side B of Triangle:"<<endl;
                cin>>base;
                perimeter=height+hypotenuse+base;
                cout<<"Perimeter of Square="<<perimeter<<"cm"<<endl;}

            else cout<<"Enter a Valid Choice"<<endl;}

             if(choice==5)
                {cout<<"----------You chose TRAPEZIUM-----------"<<endl;
                cout<<"You chose AREA:"<<endl;
                cout<<"Enter height of Trapezium:"<<endl;
                cin>>height;
                cout<<"Enter Side A of Trapezium:"<<endl;
                cin>>hypotenuse;
                cout<<"Enter Side B of Trapezium:"<<endl;
                cin>>base;
                area=1/2*height*hypotenuse+base;
                cout<<"Area of Trapezium="<<area<<"cm square"<<endl;}
                else cout<<"Enter a Valid Choice"<<endl;

            }}


};
int main()
{

    Area area1;
    return 0;
}
