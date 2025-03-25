#include<iostream>
#include"process.h"
#include"show_result.h"
using std::cout,std::endl;

int main()
{
    cout<<"planning strart"<<endl;
    Process pro;
    pro.planProces();
    cout<<"planning end"<<endl;

    cout<<"show result: "<<endl;
    ShowResult show;
    show.drawResult();

    return 0;
}