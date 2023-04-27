#include<iostream>
using namespace std;


class Increement{
private:
    float percentage;
    double convert,Basic,Totalamount,TotalIncreement;

public:
  void getAmount()
  {

   cout<<"Enter Basic Pay "<<endl;
   cin>>Basic;

   cout<<"Enter Percentage of Increement "<<endl;
   cin>>percentage;
  }

  void Convert()
  {

    convert=percentage/100;

  }

  void Work()
  {

    Totalamount=convert*Basic;

  }

  void Reward()
  {

    TotalIncreement=Totalamount+Basic;

  }

  void display()
  {

      cout<<"Your Incremental pay is: "<<TotalIncreement<<endl;

  }

};

int main()
{
    Increement objects;
    objects.getAmount();
    objects.Convert();
    objects.Work();
    objects.Reward();
    objects.display();

    return 0;
}
