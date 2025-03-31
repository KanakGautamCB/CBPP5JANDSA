#include <iostream>
using namespace std;

class creditCard{
public:
    string bankName;
    int cardNumber;
    creditCard(string bn, int cn){
        bankName=bn;
        cardNumber=cn;
    }
    
    // creditCard(creditCard& cc){
    //     bankName=cc.bankName;
    //     cardNumber=cc.cardNumber;
    // }
};

class customer{
private:
    // const string name;
    string name;
    int age;
    char gender;
    int credits;
    creditCard card;

public:
    customer(string n, int a, char gender, int c, string bn, int cn)
    :name(n),age(a),credits(c),card(bn,cn){
        this->gender=gender;
       //cout<<this<<" "<<this->gender<<endl;
        //cout<<"constructor is called for "<<n<<endl;
    }

    customer(string n, int a, int c, string bn, int cn)
    :name(n),age(a),credits(c),card(bn,cn){
        gender='F';
        cout<<"constructor is called for "<<n<<endl;
    }

    customer(customer& c)
    :card(c.card){
        name=c.name;
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }

    string getName()const{
        return name;
    }

    int getAge()const{
        return age;
    }

    customer& setName(string n){
        name=n;
        return *this;
    }

    customer& setAge(int age){
        this->age=age;
        return *this;
    }

    int operator +(customer& c1){
        //cout<<credits<<" "<<c1.credits<<endl;
        return credits+c1.credits;
    }

    ~customer(){
        //cout<<"destructor is being called for "<<name<<endl;
    }

};



int main(){

    // customer c1("john",39,'M',1800,"SBI",9870);
    // cout<<c1.getName()<<endl;

    // customer c2("julie",41,'F',2000,"BOI",8769);

    // c2.setName("june");

    // cout<<c2.getName()<<endl;

    
    // const customer c2("julie",41,'F',2000,"BOI",8769);

    // cout<<c2.getAge();

    customer c1("john",39,'M',1800,"SBI",9870);
    // customer c2=c1;

    // int x=c1.operator+(c2);

    //cout<<x<<endl;

    c1.setName("julie").setAge(78);

    cout<<c1.getAge()<<endl;



    


   cout<<"at 100"<<endl;  
}