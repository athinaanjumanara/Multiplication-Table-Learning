#include <iostream> #include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int menu;
    char again;
    
    do{
        cout << "WELCOME TO THE MULTIPLICATION TABLE LEARNING \n";
        cout <<"..............................................\n";
        cout << "Please Enter Your Choice:\n";
        cout << "step 1.(1-10) Multiplication Table\n";
        cout << "step 2.Specific Multiplication Table \n";
        cout << "step 3.Random Multiplication Questions\n \n";
        cout << "Enter your choice: ";
        cin >> menu;
        
    switch(menu) {
        case 1 :
                cout << " your selected Multiplication Learning Table \n\n";
                // use 'for' to printed out whole multiplication table as depicted in assignment sheet.
                for (int i=0; i <=10; i++)
                {
                    for (int j=0; j<=10; j++)
                    { //cout<<i << "*" << j << * <<i*j << endl;
                        if (i==0){
                            if (j==0)
                                cout << setw(4) << "*";
                            else
                                cout << setw(4) << j << " ";
                        }
                        else if (j==0)
                            cout << setw(4) << i << " ";
                        else
                            cout << setw(4) << i*j << " ";
                        }
                        cout << endl;
                }break;
            
        case 2:
                int n;
                
                cout << "Choose a specific number (1-10)\n";
                cin >> n;
                
                while ( 0 <= n > 10){
                    cout << "INVALID ENTRY!\n";
                    cout << "ENTER NUMBER BETWEEN 1-10\n";
                    cin >> n;
            }
                
                for (int i=1; i<=10; i++)
                {
                cout << n << " X " << i << " = " << i*n << endl;
                    }break;
            
           case 3:
                
                // declare num2 as the second number that will printed randomly.
                // declare num1 as the number that will printed randomly.
                // declare a as input for user's answer.
                // declare as total marks that has been collected by user (totalMark +=5 every correct).
                int a,num1 = 0, num2 ;
                float total = 0;
                        
                cout << "Please answer 5 questions below \n";
                cout << endl;
            
                for(int i=0; i<5; i++){
                
                    srand(time(0));
                    num1    = (rand() % 10) + 1;
                    num2 = (rand() % 10) + 1;
                    cout << setw(2) << "Q" << i+1 << ". " << num1 << " X " << num2 << " = " ;
                    cin>> a;
                    
                    if(a == num1*num2){
            
                        total +=5;
                        cout<< setw(2) << "Correct ! \n";
                    }else{
                        cout<< setw(2) << "Incorrect ! \n";
                    }
                }
                
                cout << setw(2) << "your total mark is: " << total << endl;
                cout << setw(2) << "and this is your score on percentage : " << (total/25) * 100 << "%";
                cout << endl;
                break;
        }
        cout << "Return to Menu? Yes/No ";
                cin >> again;
    
                system("cls");
    }while (again == 'Yes' || again == 'yes');
    cout << "Thank you" << endl;
    return 0;
}

