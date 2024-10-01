/*
Di Fei Lin Lab 4
10/1/24

*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    double sugar;
    string name; 
    bool whileMaintain = true; //the starting true statement to start the while


    while(whileMaintain = true){//while loop that starts because of the statement above and is maintained when the user still wants to put in more fruits

        cout<<"Please input the fruit name and the number of grams of sugar that one cup of the fruit contains"<<endl;
        cout<<"In the format of the name of the fruit, a space, and the sugar amount"<<endl;
        cout<<"(Type stop when you are out of fruits)"<<endl;
        cin>>name>>sugar;//input statement for sugar and name

        if (name == "stop"){
            whileMaintain = false;
            cout<<"shoo"<<endl;
        }

        if (sugar<10){//low sugar fruit if statement 
            cout<<name<<" LOW SUGAR FRUIT"<<endl;
        }

        else if (10<=sugar&&sugar<=14){//medium sugar fruit if statement 
            cout<<name<<" MEDIUM SUGAR FRUIT"<<endl;
        }

        else{//else statement for greater than 14
            cout<<name<<" HIGH SUGAR FRUIT"<<endl;
        }
    }
    return 0;


}


/*
Please input the fruit name and the number of grams of sugar that one cup of the fruit contains
In the format of the name of the fruit, a space, and the sugar amount
(Type stop when you are out of fruits)
grapes 9 
grapes LOW SUGAR FRUIT
Please input the fruit name and the number of grams of sugar that one cup of the fruit contains
In the format of the name of the fruit, a space, and the sugar amount
(Type stop when you are out of fruits)
grapes 10
grapes MEDIUM SUGAR FRUIT
Please input the fruit name and the number of grams of sugar that one cup of the fruit contains
In the format of the name of the fruit, a space, and the sugar amount
(Type stop when you are out of fruits)
grapes 19
grapes HIGH SUGAR FRUIT
Please input the fruit name and the number of grams of sugar that one cup of the fruit contains
In the format of the name of the fruit, a space, and the sugar amount
(Type stop when you are out of fruits)
stop


*/