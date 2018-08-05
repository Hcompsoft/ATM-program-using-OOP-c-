#include <iostream>
#include <string>
using namespace std;

class ACC{
private:
    string name;
    double ACCNO;
public:
        string sirname;
        string fname;
        string sname;
        string course;
        int yob;
        string university;
        int contacts;
        string email;
        string faculty;
        string mail;
        int telno;
        string adress;
        int dateofbirth;
        //string pad;
public:
    void setName(string n){
        name = n;
    }
    void setsirname(string fn){
        sirname = fn;
    }
    void setFname(string fn){
        fname = fn;
    }
    void setsecname(string sn){
        sname = sn;
    }
    void setfaculty(string facl){
        faculty = facl;
    }
    void setcourse(string co){
        course = co;
    }
    void setyob(int y){
        yob = y;
    }
    void setuniversity(string uni){
        university = uni;
    }
    void setcontacts(int telno){
        contacts = telno;
    }
    void setemail(string mail){
        email = mail;
    }
    void setACCNO( double A){
        ACCNO =A;
    }

    //Getter Methods
    string getname( string name){
        return name;
    }
    string getsirname(){
        return sirname;
    }
     string getfname(){
        return fname;
    }
    string getsecname(){
        return sname;
    }
     string getfaculty(){
        return faculty;
    }
     string getcourse(){
        return course;
    }
     int getyob(){
        return yob;
    }
     string getuniversity(){
        return university;
    }
     int getcontacts(){
        return telno;
    }
     string getemail(){
        return mail;
    }


    double getACCNO(){
        return ACCNO;
    }
};
//SAVING ACCOUNT CLASS
class savingACC : public ACC{
public:
    double Deposit;
    double Balance;
   // string PhysicalAddress;
public:
      //constructors
    savingACC(){
        Balance = 500;
    }
    void setDeposit(double D){
        Deposit = D;
    }
    void setBalance(double B){
        Balance = B;
    }
    double getDeposit(){
        return Deposit;
    }
    double getSavedBalance();
     void userDetails();
    void Interest(int);// transaction charges
    void Withdrawl();
    void Deposit1();
    void Display();
    double savingBalance;
};

    // defining methods of a class outside the class
    void savingACC:: Interest(int money){
        float Sertax = 2;
        Balance = Balance - Sertax;
    }
    void savingACC ::Deposit1(){
            int money;
            cout << "Enter The Amount Of Money to Deposit:" << endl;
            cin >> money;
            Balance = Balance + money;
        }
    void savingACC::Withdrawl(){
        int money;
        cout << "Enter the amount of money to Withdraw :" << endl;
        cin >> money;

        if(Balance - money > 50 && Balance < 500){
                cout <<"We are imposing a penalty for low minimum balance" << endl;
                    int penalty = 50;
                    Balance = Balance - (money + penalty);
                    Interest(money);
                cout << "Transaction succeeded" << endl;
            }else if (Balance >= 500){
                Balance = Balance - money;
                Interest(money);
                cout << "Transaction succeeded" << endl;
            }else{
                cout << "Please try again" << endl;
            }
    }
      void savingACC :: Display(){
        cout << "Balance is :" << Balance << endl;
    }
    void savingACC :: userDetails(){
        cout << "Enter the following details to Create Account" << endl;
        cout << "First Name :" << endl;
        cin >> fname;
        cout << "Second Name :" << endl;
        cin >> sname;
        cout << "Faculty :" << endl;
        cin >> faculty;
        cout << "Course :" << endl;
        cin >> course;
        cout << " Year Of Study :" << endl;
        cin >> yob;
        cout << "University :" << endl;
        cin >> university;
        cout << "Contacts :" << endl;
        cin >>telno;
        cout << "Email Address :" << endl;
        cin >> email;
        cout << "\t";
        cout << "Your Address is also required" << endl;
        cin >> adress;
    }
    double savingACC ::getSavedBalance(){
        cout << "AMOUNT SAVED IS :" << Balance << "/=" << endl;
    }
class CurrentAcc : public ACC{
public:
    double Deposit;
    double Balance;
    string Dob;
public:
     //constructor
    CurrentAcc(){
        Balance = 500;
    }
    void setDeposit(double D){
        Deposit = D;
    }
    void setBalance(double B){
        Balance = B;
    }
     void setDob(string pa){
        Dob = pa;
    }
    double getDeposit(){
        return Deposit;
    }
    double getBalance(){
        return Balance;
    }
     string getDob(){
        return Dob;
    }
    void DepositCurrent();
    void WithdrawCurrent();
    void DisplayBalance();
    void CreateAccount();
    void DisplayCurrentAccCheckBook();
    void customerDetail();
};

void CurrentAcc ::customerDetail(){
     cout << "Enter the following details to Create Account" << endl;
        cout << "First Name :" << endl;
        cin >> fname;
        cout << "Second Name :" << endl;
        cin >> sname;
        cout << "Faculty :" << endl;
        cin >> faculty;
        cout << "Course :" << endl;
        cin >> course;
        cout << " Year Of Study :" << endl;
        cin >> yob;
        cout << "University :" << endl;
        cin >> university;
        cout << "Contacts :" << endl;
        cin >>telno;
        cout << "Email Address :" << endl;
        cin >> email;
        cout << "\t";
        cout << "Date of Birth" << endl;
        cin >> dateofbirth;
          cout << "1.DEPOSIT :" << endl;
                        cout << "2.WITHDRAW" << endl;
                        cout << "3.VIEW BALANCE" <<endl;
                        cout << "4.CHECK BOOK" << endl;
                        cout << "5. EXIT" << endl;
                        cout << "Enter the choice :" << endl;

}
void CurrentAcc :: DisplayBalance(){
        cout << "Your Outstanding Balance is : " << Balance << endl;
    }
    void  CurrentAcc :: DepositCurrent(){
        int money;
        cout << "Enter the amount of Money to deposit: " << endl;
        cin >> money;
        Balance = Balance + money;
    }
    void CurrentAcc :: WithdrawCurrent(){
        int moneywithdraw;
        cout << "Enter the Amount of money to withdraw :" << endl;
        cin >> moneywithdraw;
        if (moneywithdraw < Balance){
            cout << "You Don't Have Enough Money in Your Account." << endl;
            cout << "You Have to withdraw more than 500" << endl;
            DisplayBalance();
        }else if(moneywithdraw > Balance && Balance > 50){
            Balance = Balance - moneywithdraw;
             DisplayBalance();
                cout << "Transaction succeeded" << endl;
        }
    }
    void CurrentAcc :: DisplayCurrentAccCheckBook(){
        CurrentAcc Book;// Object to call Acc Book
        ACC mainCheckBookObject;
            string h;
            string birth;
            string s_name;
            string f_name;
            string sec_name;
            string fa_name;
            string co_name;
            string mail;
            string uni_name;
                double k;
                cout << "Account No: ";
                cin >> k;
                Book.setACCNO(k);
            cout << "Enter the SirName : " << endl;
            //Book.setName(h);
            cin >> s_name;
            mainCheckBookObject.setsirname(s_name);

             cout << "Enter the FirstName: " << endl;
            cin >> f_name;
            mainCheckBookObject.setFname(f_name);

             cout << "Enter the SecondName: " << endl;
            cin >> sec_name;
            mainCheckBookObject.setsecname(sec_name);
             ;
             cout << "Enter the  FacultyName: " << endl;
            cin >> fa_name;
            mainCheckBookObject.setfaculty(fa_name);

            cout << "Enter the CourseName: " << endl;
            cin >> co_name;
            mainCheckBookObject.setcourse(co_name);

            cout << "Enter the Year Of Birth: " << endl;
            int yr_birth;
            cin >> yr_birth;
            mainCheckBookObject.setyob(yr_birth);

            cout << "University Name: " << endl;
            cin >> uni_name;
            mainCheckBookObject.setuniversity(uni_name);

            cout << "Telephone NO: " << endl;
            int cont_num;
            cin >> cont_num;
            mainCheckBookObject.setcontacts(cont_num);

            cout << "EmailAddress" << endl;
            cin >> mail;
            mainCheckBookObject.setemail(mail);
                cout << "D.O.B :" << endl;
                cin >> birth;
                Book.setDob(birth);
                cout << "DATE OF BIRTH :" << Book.getDob() << endl << endl;
                cout << "ACCOUNT NUMBER :" << Book.getACCNO() << endl << endl;
                 cout << "SIRNAME :" << mainCheckBookObject.getsirname()<< endl << endl;
                 cout << "FIRST NAME :" << mainCheckBookObject.getfname() << endl << endl;
                cout << "SECOND NAME :" << mainCheckBookObject.getsecname() << endl << endl;
                cout << "FACULTY :" << mainCheckBookObject.getfaculty() << endl << endl;
                 cout << "COURSE :" << mainCheckBookObject.getcourse() << endl << endl;
                cout << "YEAR OF BIRTH " << mainCheckBookObject.getyob() << endl << endl;
                 cout << "UNIVERSITY : " << mainCheckBookObject.getuniversity() << endl << endl;
                cout << "CONTACTS :" << mainCheckBookObject.getcontacts() << endl << endl;
                  cout << "EMAIL ADDRESS :" << mainCheckBookObject.getemail() << endl << endl;
                //display balance;
                cout << "CURRENT BALANCE" << Balance << endl;
               // cout << "NEW BALANCE IS NOW AT" << Book.DisplayBalance() << endl;
    }
int main(){
    //login section
    cout << "Welcome to Assignment Banking PROGRAM" << endl;
    cout << "Enter the word 1234 to begin" << endl;
    int login;
    loginsection:
    cin >> login;
    if (login != 1234){
            cout << "INcorrect Try again" << endl;
            cout << "Retype 1234"  << endl;
            goto loginsection;
    }
    int accountnumber;
    int pin;
    accountlogin:
    cout << "Input  Your Account number...." << "\t" ;
     cin >> accountnumber;
    cout << "ENTER YOUR SECRET PIN" << "\t";
    cin >> pin;
     // Creating Objects of saving account
    savingACC savingObject;
//    savingACC.userDetails();
    cout << "Welcome to Assignment Banking PROGRAM" << "\t\t" << endl;
    int choice;
    cout << "Choose account to begin" << endl;
    cout << "1.SAVING ACCOUNT" << endl;
     cout << "2.CURRENT ACCOUNT" << endl;
     cin >> choice;
    switch (choice)
   {
        case 1:
            cout << "Welcome to SAVING ACCOUNT" << endl << endl;
             savingObject.userDetails();
            saving:
            cout << "Choose Transaction Option:" << endl << endl;
            cout << "1.DEPOSIT " << endl;
            cout << "2.WITHDRAW" << endl;
            cout << "3.SAVINGS BALANCE" << endl;
            cout << "4. EXIT" << endl;
            cout << "\t" << endl;
                        int number;
                        cin >> number;
                        switch(number){
                            case 1:

                                savingObject.Deposit1();
                                savingObject.Display();
                                cout << "Do you want to continue" << endl;
                                int answer_a;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_a;
                                if (answer_a = 1){
                                     goto saving;
                                }else if(answer_a !=1){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }

                                break;
                            case 2:
                                 //savingObject.userDetails();//details of the user
                                savingObject.Withdrawl();
                                savingObject.Display();
                                cout << "Do you want to continue" << endl;
                                int answer_b;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_b;
                                if (answer_b = 1){
                                     goto saving;
                                }else if(answer_b = 2){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }else if(answer_b != 1 || answer_b !=2){
                                    return false;
                                }
                                break;
                            case 3:
                                    savingObject.getSavedBalance();
                                    cout << "Do you want to continue" << endl;
                                    int answer_c;
                                    cout << "1.YES" << endl;
                                    cout << "2. No" << endl;
                                    cin >> answer_a;
                                    if (answer_c = 1){
                                         goto saving;
                                    }else if(answer_c !=1){
                                        cout << "Thank You For Staying Connected With Us" << endl;
                                        return false;
                                    }
                                break;
                            case 5:

                             break;//end of nest on switch
                }break;
                case 2:
                     cout << "Welcome to CURRENT ACCOUNT" << endl << endl;
                       CurrentAcc currentObject;
                       ACC mainClassObject;//object to Access user details
                        int current;
                        currentaccount:
                       // cout << "Welcome .Please enter your choice" << endl;
                        currentObject.customerDetail();
                        cin >> current;
                    switch(current){
                        case 1:
                           //  currentObject.userDetails();
                           //currentObject.CreateAccount();
                            currentObject.DepositCurrent();
                            cout << "Do you want to continue" << endl;
                                int answer_a;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_a;
                                if (answer_a = 1){
                                     goto currentaccount;
                                }else if(answer_a !=1){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }
                             currentObject.DisplayCurrentAccCheckBook();
                            break;
                        case 2:
                            currentObject.WithdrawCurrent();
                            currentObject.DisplayCurrentAccCheckBook();
                            cout << "Do you want to continue" << endl;
                                int answer_d;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_d;
                                if (answer_d = 1){
                                     goto currentaccount;
                                }else if(answer_d !=1){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }
                            break;
                        case 3:
                             currentObject.DisplayCurrentAccCheckBook();
                             currentObject.DisplayBalance();

                            cout << "Do you want to continue" << endl;
                                int answer_e;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_e;
                                if (answer_e = 1){
                                     goto currentaccount;
                                }else if(answer_e !=1){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }
                                break;
                        case 4:
                            //mainClassObject.CreateAccount();
                             currentObject.DisplayCurrentAccCheckBook();
                             cout << "Do you want to continue" << endl;
                                int answer_f;
                                cout << "1.YES" << endl;
                                cout << "2. No" << endl;
                                cin >> answer_f;
                                if (answer_f = 1){
                                     goto currentaccount;
                                }else if(answer_f !=1){
                                    cout << "Thank You For Staying Connected With Us" << endl;
                                    return false;
                                }
                            break;
                        }

 }

return 0;
}
