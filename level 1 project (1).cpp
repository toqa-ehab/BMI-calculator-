// BMI Calculator : Body Mass Index (BMI) is a guideline to track weight issues.
// It is a measurement of body fat based on weight.

    #include <iostream>
    #include <cmath>

    using namespace std;


    int age ( int x ) {
    return x;
    }

    double calculate (double weight , double height) {
    return (weight/pow(height,2));
    }

    int classifyperson ( double BMI ) {
        return BMI ;
    }

    string gymname ( string name ){
    return name;
    }

    string gymaddress (string address){
    return address;
    }

    string doctorsnames (string doc) {
    return doc;
    }

        int main (){

        cout<<"                                 Welcome to our BMI Calculator \n";
cout<<"                                -------------------------------\n";

        int x;
        cout<<"Enter your age :";
        cin>>x;
        if(x<18){
        cout<<"This BMI category is NOT for children!"<<endl;
    cout<<"Thanks for using our BMI Calculator !"<<endl<<"----------------------------------------"<<endl;

        exit(0);
    }


    double height;
    double weight;
    double BMI ;

    cout << "Enter your weight in kg: ";
    cin >> weight ;

    cout << "Enter your height in meters: ";
    cin >> height;

    BMI= calculate(weight,height);
        cout <<"----------------------------------------"<<endl<< "Result:"<< BMI << '\n';
    if (height == 0) {
        cout << "error(height can not be zero)" <<'\n';
    }

        if ( BMI <= 18.3){
        cout <<"You're underweight"<<endl<<"----------------------------------------"<<endl;
        }
        else if ( BMI >= 18.4 && BMI <= 23.4){
        cout <<"You're Normal"<<endl<<"----------------------------------------"<<endl;
        }
        else if ( BMI >= 23.5 && BMI <= 24.9){
        cout <<"You're Overweight"<<endl<<"----------------------------------------"<<endl;
        }
        else {
        cout <<"You're Obese"<<endl<<"----------------------------------------"<<endl;
        }

        string arr[4]={"underweight","normal","overweight","obese"};
        cout<<"Enter the  type of body you want to know info about :"<<endl;
        for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
        }
        string bmi;
        cin>>bmi;
        cout<<"\n";
        for(int i =0;i<4;i++){
        if(arr[i]==bmi){

        if(bmi == "underweight"){
        cout<<" It is important to eat a variety of foods that give you the nutrition you need .\n"<<
        " You should make sure you eat foods with enough energy to help you gain weight,\n"<<
         " protein to repair your body and build your muscles,and vitamins and \n minerals to keep your body cells functioning well."<<endl<<"----------------------------------------"<<endl;
        }
        else if(bmi == "normal"){
        cout<<"stay healthy. "<<endl<<"----------------------------------------"<<endl;
        }
        else if(bmi == "overweight"){
        cout <<"Overweight is a condition of excessive fat deposits."<<
        "You have to do exercises and focus on a balanced diet."<<endl<<"----------------------------------------"<<endl;
        }
        else if (bmi == "obese"){
        cout <<"People with obesity are more likely to develop a number of potentially serious health problems, \n"<<
        "including: Heart disease and strokes. Obesity makes you more likely to have high blood pressure and \n"
        <<"unhealthy cholesterol levels, \n"
        <<"which are risk factors for heart disease and strokes. Type 2 diabetes."<<endl<<"----------------------------------------"<<endl;
        }
        else{
        cout<<"enter valid answer"<<endl<<"----------------------------------------"<<endl;
        }
    }
    }
        cout<<"Do you need a gym in Cairo ? ";
        string ans;
        cin>>ans;
cout<<endl;
    if (ans== "yes" || ans== "Yes"||ans== "YES"){
    cout<< "Here are some recommendations :"<<endl<<endl;
    cout << gymname("world gym ") ;
    cout << gymaddress("in 6th of October ") <<endl;

    cout << gymname("Gold gym ");
    cout << gymaddress("in Maadi")<<endl;

    cout << gymname("Ufc gym ")  ;
    cout << gymaddress("in Zayed")<<endl;

    cout << gymname("Air gym ") ;
    cout << gymaddress("in Nasr city")<<endl;

    cout << gymname("Glow gym ");
    cout << gymaddress("in Haram St.") <<endl<<"----------------------------------------"<<endl;
    }


    cout <<"Do you need a doctor in Cairo ? ";
    string sol;
    cin>>sol;
cout<<endl;
    if ( sol== "yes" || sol== "YES" ||sol== "Yes"){
    cout<<"Here are some doctors you can keep contact with : "<<endl<<endl;
    cout<<"1.Dr. Sherif Hakky"<<endl;
    cout<<"2.Dr. Mahmoud Zakaria"<<endl;
    cout<<"3.Dr. osama khalil"<<endl<<endl;
    cout<<"Thanks for using our BMI Calculator !"<<endl<<"----------------------------------------"<<endl;

    }

    else
    cout<<"Thanks for using our BMI Calculator !"<<endl<<"----------------------------------------"<<endl;

    return 0 ;
    }
