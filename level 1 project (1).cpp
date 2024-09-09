// BMI Calculator : Body Mass Index (BMI) is a guideline to track weight issues.
// It is a measurement of body fat based on weight.

    #include <iostream>
    #include <cmath>

    using namespace std;


    // function to get age ( by Toqa Ehab )
    int age ( int x ) {
    return x;
    }


    // function to calculate BMI ( by Ahmed Hafez )
    double calculate (double weight , double height) {
    return (weight/pow(height,2));
    }


    // function to classify the person ( by Haydy Mobasher )
    int classifyperson ( double BMI ) {
        return BMI ;
    }


    // function to recommend gyms ( by Hassan Ibrahim )
    string gymname ( string name ){
    return name;
    }

    string gymaddress (string address){
    return address;
    }

     // doctors recommendations function ( by fatma Mohamed )
    string doctorsnames (string doc) {
    return doc;
    }

        int main (){

            int x;
        cout<<"Enter your age :";
        cin>>x;
        if(x<18){
        cout<<"this BMI category is NOT for children!"<<endl;
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


        // Array

        string arr[4]={"underweight","normal","overweight","obese"};
        cout<<"Enter the  type of body you want to know info about :"<<endl;
        for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
        }
        string bmi;
        cin>>bmi;
        for(int i =0;i<4;i++){
        if(arr[i]==bmi){

        if(bmi == "underweight"){
        cout<<"You have to keep contact with doctors"<<endl<<"----------------------------------------"<<endl;
        }
        else if(bmi == "normal"){
        cout<<"stay healthy "<<endl<<"----------------------------------------"<<endl;
        }
        else if(bmi == "overweight"){
        cout <<"You have to do execises and focus on a balanced diet"<<endl<<"----------------------------------------"<<endl;
        }
        else if (bmi == "obese"){
        cout <<"You have to keep contact with doctors , focus on reduced-calorie diet and exercise regularly"<<endl<<"----------------------------------------"<<endl;
        }
        else{
        cout<<"enter valid answer"<<endl<<"----------------------------------------"<<endl;
        }
    }
    }

        cout<<" Do you need a gym ? ";
        string ans;
        cin>>ans;

    if (ans== "yes"){
    cout<< "Here are some recommendations :"<<endl;
    cout << gymname("world gym ") ;
    cout << gymaddress("in october") <<endl;

    cout << gymname("Gold gym ");
    cout << gymaddress("in maadi")<<endl;

    cout << gymname("Ufc gym ")  ;
    cout << gymaddress("in zayed")<<endl;

    cout << gymname("Air gym ") ;
    cout << gymaddress("in nasr city")<<endl;

    cout << gymname("Glow gym ");
    cout << gymaddress("in haram") <<endl<<"----------------------------------------"<<endl;
    }
    else
    cout<< "Good luck"<<endl<<"----------------------------------------"<<endl;

    cout <<" Do you need a doctor ? ";
    string sol;
    cin>>sol;

    if ( sol== "yes" ){
    cout<<"Here are some doctors you can keep contact with : "<<endl;
    cout<<"1.Dr. Arthur Agatston"<<endl;
    cout<<"2.Dr. Shawn Bacon"<<endl;
    cout<<"3.Dr. Mark Hyman"<<endl;
    }

    else
    exit(0) ;

    return 0 ;
    }
