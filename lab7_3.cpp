//status = "ONE-NIGHT-STAND";
#include <iostream>
using namespace std;
int main(){
int age;
int height;
int money;
    cout << "Enter age:";
    cin >> age;
        if(age <= 20){
            cout << "Enter height:";
            cin >> height;
            if(height < 160){
                cout << "!!UNFRIEND!!";
            }else{
                if(height < 175){
                    cout << "!!FRIEND!!";
                }else{
                    cout << "Enter money:";
                    cin >> money;
                     if(money > 69000000){
                        cout << "!!MARRIED!!";
                    }else{
                        cout << "!!ONE-NIGHT-STAND!!";
                }
                }
            }
        }else{
            if(age < 30){
                cout << "Enter money:";
                cin >> money;
                if(money > 10000000){
                    cout << "!!BESTFRIEND!!";
                }else{
                    cout << "!!UNFRIEND!!";
                }
            }else{
                cout << "!!UNFRIEND!!";
            }
        }

}
