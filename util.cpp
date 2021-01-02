# include <iostream.h>
# include <conio.h>
int main()
{
clrscr();
int OCS;
cout <<”Hi ! There please give us input To process further\n 1.to download Ocs installation script \n 2.To run ocs installation script ”;
cin>>OCS;
switch(OCS)
{
case 1: cout<<”/n https://raw.githubusercontent.com/amitrikhari/pangps/main/installocs.sh”;
break;
case 2: cout<<”/n bash installocs.sh”;

default: cout<<”/n Sorry input ca'nt process now ”;
}
return 0;
}
