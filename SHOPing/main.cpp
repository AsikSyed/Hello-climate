#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;


class product{
public:
//Formal shirt member.
 float Fs_code,Fsp,Fsp_rate,Fpf;
    int Fsn;

//Casual shirt member.
float Cs_code,Csp,Csp_rate,Cpf;
    int Csn;

////T shirt member.
float Ts_code,Tsp,Tsp_rate,Tpf;
    int Tsn;

//Gavading pant member.
float Gp_code,Gpp,Gpp_rate,Gpf;
    int Gpn;

//Jeans pant member.
float Jp_code,Jpp,Jpp_rate,Jpf;
    int Jpn;

//Short pant member.
float Sp_code,Spp,Spp_rate,Spf;
    int Spn;

//show Room rent & sellsman charge .
 float s_r,sel_mc,others;

 // Profit and new price.
 float pf,percent,F,C,T,G,J,S;

   void profile()
   {
                   cout<<"\t\tWellcome to our software "<<endl;
                   cout<< "\n\tplease set your product details"<<endl;
                   cout<<"\n\tInput your Shirt info "<<endl;

    // Formal shirt info .

    cout<<"\n\tFormal shirt"<<endl<<"Enter price rate : ";
    cin>>Fsp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Fsn;
    Fsp=Fsp_rate*Fsn;

  //  Casual shirt info .

    cout<<"\n\tCasual shirt"<<endl<<"Enter price rate : ";
    cin>>Csp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Csn;
    Csp=Csp_rate*Csn;

   // T-shirt info .

    cout<<" \n\tT-shirt "<<endl<<"Enter price rate : ";
    cin>>Tsp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Tsn;
    Tsp=Tsp_rate*Tsn;

                          cout<<"\t\tyour shirt stored successfully"<<endl;


                            cout<<"\n\tInput your pant info "<<endl;

   // Gavading pant info .

    cout<<" \n\tGavading pant "<<endl<<"Enter price rate : ";
    cin>>Gpp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Gpn;
    Gpp=Gpp_rate*Gpn;


   //   Jeans pant info .

    cout<<" \n\tJeans pant "<<endl<<"Enter price rate : ";
    cin>>Jpp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Jpn;
    Jpp=Jpp_rate*Jpn;


   //   short_pant info .

    cout<<" \n\tShort pant "<<endl<<"Enter price rate : ";
    cin>>Spp_rate;
    cout<<"\nEnter total Piece : ";
    cin>>Spn;
    Spp=Spp_rate*Spn;

    //show Room rent & sellsman charge .

    cout<<"\n\tEnter your showroom rent : "; cin>> s_r;
    cout<<"\n\tEnter your sellsman charge : "; cin>> sel_mc;
     others=(s_r+sel_mc)/2 ;


  double b_Total;
  b_Total=Fsp+Csp+Tsp+Gpp+Jpp+Spp+s_r+sel_mc;
  cout<<"\n\tYour total cost is : "<<b_Total;
  cout<<"\n\tYour shop product stored successfully  ";

  // Profit and new price setup .

  cout<<"\n\n\tPlease Enter How much ('%') profit You want to Earn : "; cin>>percent;
  pf=(percent/100);

  //Now new Price set up.

   // Set up Shirt Price

   Fs_code=(others/Fsn)+Fsp_rate+(pf*Fsp_rate);
   Cs_code=(others/Csn)+Csp_rate+(pf*Csp_rate);
   Ts_code=(others/Tsn)+Tsp_rate+(pf*Tsp_rate);

     F=Fs_code;
     C=Cs_code;
     T=Ts_code;
     //only profit of Shirt.
     Fpf=pf*Fsp_rate ;
     Cpf=pf*Csp_rate ;
     Tpf=pf*Tsp_rate ;


   // Set up Pant Price

   Gp_code=(others/Gpn)+Gpp_rate+(pf*Gpp_rate);
   Jp_code=(others/Jpn)+Jpp_rate+(pf*Jpp_rate);
   Sp_code=(others/Spn)+Spp_rate+(pf*Spp_rate);

      G=Gp_code;
      J=Jp_code;
      S=Sp_code;
      //only profit of Pant.
      Gpf=pf*Gpp_rate;
      Jpf=pf*Jpp_rate;
      Spf=pf*Spp_rate;

   cout<<"\n\tYour product sell Price set-up successfully .";
}



//~product(){
//cout<<" taka";
};


class keepsell :public product {

public:
    static double total,profit;
void recit()
    {
        double p,sell;
        int pis;
   cout<<"Enter item key & Press 0 to print recit .";
  while(p!=0){
        cout<<" \nEnter product key :";
    cin>>p;
  if(p==2015120011)       //Formal shirt info.

     {
         cout<<"\nEnter total piece : ";

           cin>>pis;
      if(pis<=Fsn) {

               sell=pis*F;
               cout<<"\nFormal shirt : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
               Fsn-=pis;
               total+=sell;
               profit+=(Fpf*pis);
                pis=0;    }

       else {
             cout<<" 'SORRY' This Item aren't available in the store as You want";
             cout<<"Total Formal Shirt has : "<<Fsn<<"\n\tThank You"<<endl; }
  }


  else if(p==2015120022)  //Casual shirt info.
  {
            cout<<"\nEnter total piece : ";

            cin>>pis;
       if(pis<=Csn) {

                 sell=pis*C;
                 cout<<"\nCasual shirt : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
                 Csn-=pis;
                 total+=sell;
               profit+=(Cpf*pis);
                  pis=0;  }

       else   {
               cout<<" 'SORRY' This Item aren't available in the store as You want";
               cout<<"Total Casual Shirt has : "<<Csn<<"\n\tThank You"<<endl;  }
  }


  else if(p==2015120033)  // T shirt info.
  {
            cout<<"\nEnter total piece : ";

            cin>>pis;
      if(pis<=Tsn) {

             sell=pis*T;
             cout<<"\nT shirt : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
             Tsn-=pis;
             total+=sell;
             profit+=(Tpf*pis);
              pis=0;   }

      else {
            cout<<" 'SORRY' This Item aren't available in the store as You want";
            cout<<"Total T Shirt has : "<<Tsn<<"\n\tThank You"<<endl;  }
  }


  else if(p==2015121010)  //Gavading pant info.
  {
             cout<<"\nEnter total piece : ";

             cin>>pis;
      if(pis<=Gpn) {

            sell=pis*G;
            cout<<"\nGavading pant : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
            Gpn-=pis;
            total+=sell;
            profit+=(Gpf*pis);
            pis=0;  }

      else  {
            cout<<" 'SORRY' This Item aren't available in the store as You want";
            cout<<"Total Gavading pant has : "<<Gpn<<"\n\tThank You"<<endl;  }
  }


  else if(p==2015122020) //Jeans pant info.
  {
            cout<<"\nEnter total piece : ";

            cin>>pis;
      if(pis<=Jpn) {

              sell=pis*J;
              cout<<"\njeans pant : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
              Jpn-=pis;
              total+=sell;
              profit+=(Jpf*pis);
              pis=0;  }

       else  {
            cout<<" 'SORRY' This Item aren't available in the store as You want";
            cout<<"Total Jeans pant has : "<<Jpn<<"\n\tThank You"<<endl;  }
  }


  else if(p==2015123030)  //Short pant info.
    {
              cout<<"\nEnter total piece : ";

              cin>>pis;
      if(pis<=Spn) {
           sell=pis*S;
            cout<<"\nShort pant : \t"<<pis<<" -piece- "<< " Price :"<<sell<<endl;
            Spn-=pis;
            total+=sell;
            profit+=(Spf*pis);
             pis=0; }
       else  {
            cout<<" 'SORRY' This Item aren't available in the store as You want";
            cout<<"Total short pant has : "<<Spn<<"\n\tThank You"<<endl;  }
    }


  else if(p==0)  //Recit show.
           { static float v,vat,Vtotal;
               v=total;
               vat=(v*0.05);
               cout<<"\n\t   Your Total Cost = "<<total;
               cout<<"\n\t               VAT = "<<vat;
               cout<<"\n\t----------------------------";
               Vtotal=v+vat;
               cout<<"\n\tTotal including VAT= "<<Vtotal<<"Taka\n";
               cout<<"\n\t ****** Thank You To Stay with Us ****** ";
               cout<<"\n\t    ***        See You Again.     ***\n ";

           }

  else cout<<"Invalid input\t please try again";
 }
    }

 void check_profit()
 {

     cout<<"\n\tYour current Profit is Now : "<<profit;

     cout<<"\n\n";
 }

 void check_balance()
 {
     cout<<"\n\t***You Have remain This products in the store *** ";
     cout<<"\n\t\t Formal shirt has  : "<<Fsn;
     cout<<"\n\t\t Casual shirt has  : "<<Csn;
     cout<<"\n\t\t      T shirt has  : "<<Tsn;
     cout<<"\n\t\tGavading pant has  : "<<Gpn;
     cout<<"\n\t\t   Jeans pant has  : "<<Jpn;
     cout<<"\n\t\t   Short pant has  : "<<Spn;
     cout<<"\n\n";
 }

};


double keepsell:: total;
double keepsell:: profit;







int main()
{
    keepsell ks;
     int x,y=0;


  while(x!=0)
  {
     cout<<"\n\tPress 1 for create product profile .";
  cout<<"\n\tPress 2 for sell product .";
  cout<<"\n\tPress 3 for check profit .";
  cout<<"\n\tPress 4 for check stored balance .";
  cout<<"\n\tPress 0 to exit .\n";

    cout<<"Please Enter Your choice :" ; cin>>x;

  if(x==1)
  {  if(y==0)
      {
       system("CLS");
       ks.profile();
       system("CLS");
       cout<<"congrats Your profile complete successfully .";
       system ("PAUSE");
        system("CLS");
      y+=1;
      }
      else
      {
         system("CLS");
          cout<<"\nYour profile already completed\n";
          cout<<"Please choose another option\n\tThank You \n";
          system ("PAUSE");
          system("CLS");
      }
  }

  else if(x==2)
  {
      if(y>0)
      {
          system("CLS");
          ks.recit();

          system ("PAUSE");
          system("CLS");
      }
      else {
        cout<<"Please complete Your product profile First ";
        cout<<"\n\t Thank You\n";
        system ("PAUSE");
        system("CLS");

      }
  }
  else if(x==3)
  {
      if(y>0)
      {
          system("CLS");
          ks.check_profit();

          system ("PAUSE");
          system("CLS");
      }
      else {
        cout<<"Please complete Your product profile First ";
        cout<<"\n\t Thank You\n";
        system ("PAUSE");
        system("CLS");

      }
  }
  else if(x==4)
  {
      if(y>0)
      {
          system("CLS");
          ks.check_balance();

          system ("PAUSE");
          system("CLS");
      }
      else {
        cout<<"Please complete Your product profile First ";
        cout<<"\n\t Thank You\n";
        system ("PAUSE");
        system("CLS");

      }
  }

  else if(x==0)
  {
      system("CLS");
      cout<<"\n\t\tYour programme shuting Down ... ";
  }
  else {

    cout<<"\n\tInvalid keyword Inputed.\tPlease try again. ";
    system ("PAUSE");
    system("CLS");
  }
  }
    //product p;
    //keepsell ks;
    //ks.recit();
    //ks.check_balance();
    //ks.check_profit();

 return 0;

};
