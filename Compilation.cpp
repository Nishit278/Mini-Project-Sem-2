#include <bits/stdc++.h>

#define pi 3.14159265
using namespace std;

string randommove[3] = {"rock", "scissor", "paper"};




int addition(int a, int b);
int substraction(int a, int b);
int product(int a, int b);
float division(int a, int b);
int power(int x,int y);
float squareroot(int x);
float naturallog(int x);
float logbase10(int x);
float expfunc(int y);
float sine(float x);
float cosine(float x);
float tangent(float x);
float secant(float x);
float cosecant(float x);
float cotangent(float x);


class resort{
    int rno , charge = 2000 , amount , days, age;
    string name;

    int compute(){
        if(age<18){
            cout << "You can't rent a room!";
            return 0;
        }
        else{

            if(days*charge <= 12000)
                return(days*charge);
            else
            {
                return(1.05*days*charge);
            }
        }
        
    }
    public:

    int getinfo(){
        cin.ignore();
        cout << "Enter your name: ";
        getline(cin,name);
        cout << "\nEnter the number of days of stay: ";
        cin >> days;
        cout<< "\nEnter you age: ";
        cin>>age;
        srand(time(0));
        rno=rand()%200;  //generates random number between 0-200
        compute();
    return 0;

    }

    int displayinfo(){
        if(age<18){
            return 0;
        }else{
            cout << "Here are your details: "<<endl;
        cout << "Your name : " << name <<endl <<"Your age: " << age << endl 
             << "Your room no. : " << rno <<endl <<"Amount you have to pay: " << compute() ;
        }
       return 0; 
    }
};

class taxi {
   long long dist , mob_no , d_mob_no , car_no, q ;
    double fare = 12.0;
    string w,name, d_name[9] = {"Mukesh", "Suresh","Abdul","Ajey","Amir","Sumit","Vikas","Ranjan","Alexander"};
    
    int farecalc(){

        if(dist<=2){
            return(40);
        }else{
            return(40+16*(dist-2));
        }
    } 

    public:

    int getpassinfo(){
        cin.ignore();
        cout << "Enter you name: ";
        getline(cin,name);
        cout << "\nEnter your mobile number: ";
        cin >> mob_no;
        cout << "\nEnter the distance in kilo meters(Km): ";
        cin >> dist ;
         srand(time(0));
         q = rand()%10;
         w = d_name[q];

        farecalc();

    return 0;       

    }

    int displaydet(){
        
        system("cls");
        cout << "Your name: "<<name << "\nYour Mobile No.: "<<mob_no<<"\nDistance: "<<dist;
        cout << "\n\nYour ride is ";
        srand(time(0));
        int tym = 1 + rand()%5;
        cout << tym;
        if(tym==1)
            cout<<" min away\n";
        else
            cout<<" mins away\n"; 
        
        cout << "\nDriver's name: "<<w;
        cout << "\nDriver's number: ";
       
        srand(time(0));
	    for(int i = 1 ; i<= 3 ; i++){
		    cout<< 7 + rand()%3;
	    }
        for(int i = 1 ; i<= 7 ; i++){
            cout<< rand()%10;
        }

        cout<<"\nCar's number: DL";
        for(int i =1 ; i<=4 ; i++){
              cout<<rand()%5;
        }
        
        cout << "\nTaxi fare: "<<farecalc();
    return 0;
            
    }
};

int startOfYear(int year){
    int day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

int main(){
    int a, b , c ;
    int opt;
    resort r;
    taxi t;
    double temp,x;
	float divi;
	char ch;
    int win=0 , lost =0 , tie =0 ;
    int d;
    string computer_choise;
    string usermove ;
   

    cout<<" \t\t\t|MAIN MENU|\t\t\t\n\n";
    cout<<"\t1.UBER";//
    cout<<"\n\n\t2.TRIVAGO"<<endl;
    cout<<"\n\t3.CALCULATOR"<<endl;
    cout<<"\n\t4.ROCK PAPER & SCISSOR"<<endl;
    cout<<"\n\t5.CALENDER"<<endl;
    
    cin>>opt;
    switch(opt){

        case 1:     t.getpassinfo();
                    t.displaydet();
                break;

        case 2: 
                    r.getinfo();
                    r.displayinfo();
               
                break;

        case 3: do{
                    system("cls");
                    cout<<"   \t\t\t*|CALCULATOR|*\t\t\t\n\n\n";
                    cout<<"  1)+ \t\t"<<"\t\t\t\t\t6) x^y \n\n";
                    cout<<"  2)- \t\t"<<"\t\t\t\t\t7) sqrt(x) \n\n";
                    cout<<"  3)* \t\t"<<"\t\t\t\t\t8) ln(x) \n\n";
                    cout<<"  4)/ \t\t"<<"\t\t\t\t\t9) log10(x) \n\n";
                    cout<<"  5)e^x \t"<<"\t\t\t\t\t10) Trigo Functions\n\n";
                    cin >> opt ;
                    system("cls");

                    switch(opt)
                    {
                        case 1: cout<<"Enter the 2 Numbers: ";
                                cin >> a >> b;
                                temp=addition(a,b);
                                cout<<"The Sum of the 2 Numbers is :"<< temp;
                                break;

                        case 2: cout<<"Enter the 2 Numbers : "<<endl;
                                cin>>a>>b;
                                temp=substraction(a,b);
                                cout<<"The Difference of the 2 Numbers is : "<<temp<<endl;
                                break;

                        case 3: cout<<"Enter the 2 Numbers : "<<endl;
                                cin>>a>>b;
                                temp=product(a,b);
                                cout<<"The Product of the 2 Numbers is : "<< temp<<endl;
                                break;

                        case 4: cout<<"Enter the 2 Numbers : ";
                                cin>>a>>b;
                                temp=division(a,b);
                                cout<<"The Division of the 2 Numbers is : "<<temp<<endl;
                                break;
                        case 5: cout<<" Enter the Number : ";
                                cin>>a;
                                temp=expfunc(a);
                                cout<<"e ^ "<<a<<" = "<<temp<<endl;
                                break;
                
                        case 6 : cout<<"Enter the base number : "<<endl;
                                cin>>a;
                                cout<<"Enter the exponent number : "<<endl;
                                cin>>b;
                                temp=power(a,b);
                                cout<<a<<" race to the power "<<b<<" is : "<<temp<<endl;
                                break;

                        case 7: cout<<"Enter the number whose square root is to be calculated : ";
                                cin>>a;
                                temp=squareroot(a);
                                cout<<"The suqare root of the given number is : "<<temp<<endl;
                                break;

                        case 8: cout<<"Enter the number whose natural log is to be calculated : "<<endl;
                                cin>>a;
                                temp=naturallog(a);
                                cout<<"The natural log of the given number is : "<<temp<<endl;
                                break;

                        case 9:  cout<<"Enter the number whose log10 is to be calculated :  "<<endl;
                                cin>>a;
                                temp=logbase10(a);
                                cout<<"Log10 of the given number is : "<<temp<<endl;
                                break; 

                        case 10:  do
                                {
                                    system("cls");
                                    cout<<" \t\t\t*Select one operation from below* \n\n\n";
                                    cout<<"  1) sin(x)"<<"\t\t\t\t\t\t\t4) cosec(x)\n\n";
                                    cout<<"  2) cos(x)"<<"\t\t\t\t\t\t\t5) sec(x)\n\n";
                                    cout<<"  3) tan(x)"<<"\t\t\t\t\t\t\t6) cot(x)\n\n";
                                    cin>>a;
                                    switch(a)
                                    {
                                        case 1: cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=sine(x);
                                                cout<<"The Sine of "<<x<<" is : "<<temp<<endl;
                                                break;
                                        case 2: cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=cosine(x);
                                                cout<<"The Cosine of "<<x<<" is : "<<temp<<endl;
                                                break;

                                        case 3:	cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=tangent(x);
                                                cout<<"The Tan of "<<x<<" is : "<<temp<<endl;
                                                break;

                                        case 4: cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=cosecant(x);
                                                cout<<"The cosecant of "<<x<<" is : "<<temp<<endl;
                                                break;

                                        case 5:	cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=secant(x);
                                                cout<<"The secant of "<<x<<" is : "<<temp<<endl;
                                                break;

                                        case 6:	cout<<"Enter the Value (in degree) : ";
                                                cin>>x;
                                                temp=cotangent(x);
                                                cout<<"The Cot of "<<x<<" is : "<<temp<<endl;
                                                break;

                                        default :cout<<"*Invalid Option*";
                                                break;		
                                    }
                                    cout<<"\n\n\nDo you want to repeat the trignometric operation Y/N: ";
                                    cin>>ch;
                                }while ((ch == 'y')||( ch == 'Y'));

                                break;

                            
                        

                        default: cout<<"*Invalid Option*";
                                    break;
                                }
                                
                    cout<<"\n\n\nDo you want to repeat the mathematical operation Y/N: ";
                    cin>>ch;
                    }
                        while ((ch == 'y')||( ch == 'Y'));

                    break;

        case 4:    do{
                        srand(time(0));

                    cout<<"******Welcome to rock , paper and Scissor******  "<<endl;
                    cin.ignore();
                    
                    
                    
                    cout<<"Enter your move : "<<endl;
                    getline(cin , usermove);

                    cout<<"Your move : "<<usermove<<endl;
                    d= rand()%3;
                    computer_choise = randommove[d];
                    cout<<"Computer : "<<randommove[d]<<endl;
                    
                    if(usermove == "rock" && computer_choise == "rock") {
                        cout << "It was a tie!" << endl;
                        tie++;
                    } 
                    else if (usermove == "rock" && computer_choise == "paper") {
                        cout << "The computer won! Better luck next time!" << endl;
                        lost++;
                    } 
                    else if (usermove == "paper" && computer_choise == "paper") {
                        cout << "It was a tie!" << endl;
                        tie++;
                    } 
                    else if (usermove == "paper" && computer_choise == "scissor") {
                        cout << "The computer won! Better luck next time!" << endl;
                        lost++;
                    } 
                    else if (usermove == "scissor" && computer_choise == "scissor") {
                        cout << "It was a tie!" << endl;
                        tie++;
                    } 
                    else if (usermove == "scissor" && computer_choise == "rock") {
                        cout << "The computer won! Better luck next time!" << endl;
                        lost++;
                    } 
                    else {
                        cout << "Congrats! You won!" << endl;
                        win++;
                    }
                    cout<<"Wins : "<<win<<endl
                        <<"loses : "<<lost<<endl
                        <<"ties : "<<tie<<endl;

                        cout<<"DO YOU WANNA PLAY AGAIN (Y/N) "<<endl;
                        cin >> ch;
                        system("cls");
                       // cin.ignore();//used to clear the input buffer so that getline works again 
                }while(ch == 'Y' || ch == 'y');
                break;

        case 5:     {
                         int j,k;
                        int year , daysInMonth,weekday=0;
   
                        string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
                        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31}; 

                        if(year%400==0||(year%4==0 && year%100!=0)){
                            days[1]=29;
                        }

                        cout<<"Enter the year:"<<endl;
                        cin>>year;
                        int startingDay=startOfYear(year);


                        for(int i = 0 ; i < 12 ; i++){
                            daysInMonth=days[i];

                            cout<<"\n\n----------"<<months[i]<<"----------\n";
                            cout<<" \nSun Mon Tue Wed Thu Fri Sat "<<endl;
                            for(weekday=0;weekday<startingDay;weekday++){
                                cout<<"   ";
                            }
                            for(k=0;k<startingDay;k++){
                                cout<<" ";
                            }
                            
                            

                            for(j =1 ; j <= daysInMonth ; j++){
                                
                                if(j<10){
                                    cout<<"  "<<j<<" ";

                                }else{
                                    cout<<" "<<j<<" ";
                                }
                                if(++weekday>6){
                                    cout<<endl;
                                    weekday=0;
                                }
                                startingDay=weekday;
                                

                            }
                            
                            cout<<endl;


                        }
        }
                     break;

        default: cout<<"INVALID CHOICE!!";

    }
    return 0;
}


int addition(int a, int b)
{
	int sum = a + b;
	return sum;
}
int substraction(int a, int b)
{
	int sub;
	if(a>=b)
	    sub=a-b;
	else
		sub=b-a;
	return sub;
}

int product(int a, int b)
{
	int prod = a*b;
	return prod ;

}
float division (int a, int b)
{
	int divi;
	if(a>b)
	    divi=a/b;
	else
		divi=b/a;
	return divi;

}
int power(int x, int y)
{
	int ans=pow(x,y);

	return ans;
}
float squareroot(int x)
{
	float ans=sqrt(x);

	return ans;
}

float naturallog(int x)
{
	float ans=log(x);

	return ans;
}
float logbase10(int x)
{
	float ans=log10(x);

	return ans;
}

float expfunc(int y)
{
	float ans=exp(y);

	return ans;
}

float sine(float x)
{
	x*=(pi/180);
	float ans=sin(x);

	return ans;
}

float cosine(float x)
{
	x*=(pi/180);
	float ans=cos(x);

	return ans;
}

float tangent(float x)
{
	x*=(pi/180);
	float ans=tan(x);

	return ans;
}

float cosecant(float x)
{
	x*=(pi/180);
	float ans = (1/sin(x));

	return ans;
}

float secant(float x)
{
	x*=(pi/180);
	float ans= (1/cos(x));

	return ans;
}

float cotangent(float x)
{
	x*=(pi/180);
	float ans=(1/tan(x));

	return ans;
}