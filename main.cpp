/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

int main(){
    int Life = 30, Attack = 10, Goldcoins = 10, LifeLimit = 30, Dodge = 3;
    int a = 0, b = 0, c = 0, d = 0;
    cout << "On the 18th birthday of the princess, a grand birthday banquet was held, but it also disturbed the Devil. When the princess made a wish to blow the candles, an angry Devil appeared, disrupted the banquet and took the princess away, everyone was terrified. The old king promised that whoever can defeat the Devil and bring the princess back, he will marry the princess to him and bestowed the title of the bravest knight." << endl;
    cout << endl << "This is a game to save the princess, defeat the Devil, rescue the princess, and become the bravest knight. Good luck everyone!" << endl;
    
    for(int i=0; i<1; i--){
        cout << endl << "1. Purchase equipment and restore life." << endl;
        cout << "2. Fighting monsters area." << endl;
        cout << "3. Personal information." << endl;
        cout << "4. Exit the game." << endl << "Enter: ";
         cin >> a;
        
        if(a == 1){
            
            while(1){
                cout << endl << "Your information: (Life), (Attack), (Gold coins)" << endl;
                cout << "1. Arms, gold coins >= 10" << endl;
                cout << "2. Life, 10 gold coins to fill up" << endl;
                cout << "3. Life limit, gold coins >= 40" << endl;
                cout << "4. Dodge, gold coins >= 15" << endl;
                cout << "0. Exit." << endl << "Enetr：";
                 cin >> b;
                
                if(b == 1 && Goldcoins >= 10){
                  
                    while(1){
                        cout << endl << "1. Stone sword —— 10 gold coins + 5" << endl;
                        cout << "2. Iron sword —— 50 gold coins + 25" << endl;
                        cout << "3. Golden sword —— 200 gold coins + 100" << endl;
                        cout << "4. Diamond sword —— 1000 gold coins + 500" << endl;
                        cout << "0. Exit." << endl << "Enter：";
                         cin >> c;
        
                        if(c == 1 && Goldcoins >= 10){
                            Attack += 5;
                            Goldcoins -= 10;
                            cout << "Attack: " << Attack-5 << " + 5 = " << Attack << endl;
            
                        }else if(c == 2 && Goldcoins >= 50){
                            Attack += 25;
                            Goldcoins -= 50;
                            cout << "Attack: " << Attack-25 << " + 25 = " << Attack << endl;

                        }else if(c == 3 && Goldcoins >= 200){
                            Attack += 100;
                            Goldcoins -= 200;
                            cout << "Attack: " << Attack-100 << " + 100 = " << Attack << endl;
            
                        }else if(c == 4 && Goldcoins >= 1000){
                            Attack += 500;
                            Goldcoins -= 1000;
                            cout << "Attack: " << Attack-500 << " + 500 = " << Attack << endl;
            
                        }else if(c == 0){
                            break;
            
                        }else if(c > 4){
                            cout << "There is no such option." << endl;
            
                        }else{
                            cout << "Not enough gold coins." << endl << endl;
                        }
                    
                    }
                    
                }else if(b == 2 && Goldcoins >= 10){
                    Life = LifeLimit;
                    Goldcoins -= 10;
                    cout << "Life = " << LifeLimit << endl;
                    
                }else if(b == 3 && Goldcoins >= 40){
                  
                    while(1){
                        cout << endl << "1. Level 1 Life limit —— 40 gold coins + 10" << endl;
                        cout << "2. Level 2 Life limit —— 100 gold coins + 25" << endl;
                        cout << "3. Level 3 Life limit —— 400 gold coins + 100" << endl;
                        cout << "4. Level 4 Life limit —— 2000 gold coins + 500" << endl;
                        cout << "0. Exit." << endl << "Enter：";
                         cin >> c;
                        
                        if(c == 1){
                            LifeLimit += 10;
                            Life += 10;
                            Goldcoins -= 40;
                            cout <<"Life limit: " << LifeLimit-10 << " + 10 = " << LifeLimit << endl;
                            
                        }else if(c == 2 && Goldcoins >= 100){
                            LifeLimit += 25;
                            Life += 25;
                            Goldcoins -= 100;
                            cout << "Life limit: " << LifeLimit-25 << " + 25 = " << LifeLimit << endl;
                            
                        }else if(c == 3 && Goldcoins >= 400){
                            LifeLimit += 100;
                            Life += 100;
                            Goldcoins -= 400;
                            cout << "Life limit: " << LifeLimit-100 << " + 100 = " << LifeLimit << endl;
                            
                        }else if(c == 4 && Goldcoins >= 2000){
                            LifeLimit += 500;
                            Life += 500;
                            Goldcoins -= 2000;
                            cout << "Life limit: "<< LifeLimit-500 << " + 500 = " << LifeLimit << endl;
                            
                        }else if(c == 0){
                            break;
                            
                        }else{
                            cout << "Not enough gold coins." << endl << endl;
                        }
                        
                    }
                    
                }else if(b == 4 && Goldcoins >= 15){
                   
                    while(1){
                        cout << endl << "1. Livel 1 Dodge —— 15 gold coins + 1" << endl;
                        cout << "2. Livel 2 Dodge —— 150 gold coins + 10" << endl;
                        cout << "3. Livel 3 Dodge ——300 gold coins + 20" << endl;
                        cout << "4. Livel 4 Dodge ——1500 gold coins + 100" << endl;
                        cout << "0. Exit." <<  endl << "Enter: ";
                         cin >> c;
                        
                        if(c == 1){
                            Dodge += 1;
                            Goldcoins -= 15;
                            cout << "Avoidance: " << Dodge-1 << " + 1 = " << Dodge << endl;
                            
                        }else if(c == 2 && Goldcoins >= 100){
                            Dodge += 10;
                            Goldcoins -= 150;
                            cout << "Avoidance: "<< Dodge-10 <<" + 10 = " << Dodge << endl;
                            
                        }else if(c == 3 && Goldcoins >= 400){
                            Dodge += 20;
                            Goldcoins -= 300;
                            cout << "Avoidance: " << Dodge-20 << " + 20 = " << Dodge << endl;
                            
                        }else if(c == 4 && Goldcoins >= 2000){
                            Dodge += 100;
                            Goldcoins -= 1500;
                            cout << "Avoidance: "<< Dodge-100 << " + 100 = " << Dodge << endl;
                            
                        }else if(c == 0){
                            break;
                            
                        }else{
                            cout << "Not enough gold coins." << endl << endl;
                        }
                        
                    }
                    
                }else if(b == 0){
                    break;
                    
                }else{
                    cout << "Not enough gold coins." <<endl;
                }
                
            }
            
        }else if(a == 2){
          
            while(1){
                cout << endl << "1. Low-level Monster —— Life 20, Attack 10, Gold coins 50" << endl;
                cout << "2. Intermediate Monster —— Life 100, Attack 25, Gold coins 100" << endl;
                cout << "3. Advanced Monster —— Life 400, Attack 100, Gold coins 200" << endl;
                cout << "4. Ultimate Monster —— Life 1000, Attack 500, Gold coins 500" << endl;
                cout << "5. Devil —— Life 5000, Attack 1000, Gold coins 1000，and pass the game!" << endl;
                cout << "0. Exit." << endl << "Enter: ";
                 cin >> b;
                
                if(b == 1){
                    int Life1 = 20, Attack1 = 10;
                    int Dodge1 = Dodge;
                    cout << endl << "Low-level Monster —— Life 20, Attack 10, Gold coins 50" << endl << "Your attack power: " << Attack << " " << "Life: " << Life << endl << endl << "Start! You VS Low-level Monster" << endl;
                    
                    while(Life > 0){
                        cout << endl << "1. Attack 2. Dodge (" << Dodge1 << ") can make monster life -5" << endl << "Enter: ";
                         cin >> c;
                        
                        if(c == 1){
                            Life -= Attack1;
                            Life1 -= Attack;
                            cout << endl << "Your life：" << Life << endl;
                            cout << "Monster life: "<< Life1 << endl;
                            
                        }else if(c == 2){
                          
                            if(Dodge1 > 0){
                                cout << "Dodge success." << endl;
                                Dodge1 --;
                                Life1 -= 5;
                                cout << "Monster life: " << Life1+5 << " - 5 = " << Life1 << endl;
                                
                            }else if(Dodge1 == 0){
                                cout << "Dodge failure. Being attacked" << endl;
                                Life -= Attack1;
                                cout << endl << "Your life：" << Life << endl;
                                cout << "Monster life: " << Life1 << endl;
                            }
                            
                        }else{
                            cout << "There is no such option." << endl;
                            
                        }if(Life <= 0){
                            cout << "You are dead." << endl;
                            system("pause");
                            return 0;
                            
                        }else if(Life1 <= 0){
                            cout << "Monster is dead." << endl;
                            Goldcoins += 50;
                            cout << "Congratulations on getting 50 gold coins." << endl;
                            break;
                            system("pause");
                        }
                    }
                    
                }else if(b == 2){
                    cout << endl << "Intermediate Monster —— Life 100, Attack 25, Gold coins 100" << endl << "Your attack power: " << Attack << " " << "Life: " << Life << endl << endl << "Start! You VS Intermediate Monster" << endl;
                    int Life1 = 100, Attack1 = 25;
                    int Dodge1 = Dodge;
                    
                    while( Life1 > 0){
                        cout << endl << "1. Attack 2. Dodge (" << Dodge1 << ") can make monster life -5" << endl << "Enter: ";
                        cin >> c;
                        
                        if(c == 1){
                            Life -= Attack1;
                            Life1 -= Attack;
                            cout << endl << "Your life: " << Life << endl;
                            cout << "Monster life: " << Life1 << endl;
                            
                        }else if(c == 2){
                           
                            if(Dodge > 0){
                                cout << "Dodge success." << endl;
                                Dodge --;
                                Life1 -= 5;
                                cout << "Monster life: " << Life1+5 << " - 5 = " << Life1 << endl;
                                
                            }else if(Dodge == 0){
                                cout << "Dodge failure. Being attacked" << endl;
                                Life -= Attack1;
                                cout << endl << "Your life: " << Life << endl;
                                cout << "Monster life: " << Life1 << endl;
                            }
                            
                        }else{
                            cout << "There is no such option." << endl;
                            
                        }if(Life <= 0){
                            cout << "You are dead." << endl;
                            system("pause");
                            return 0;
                            
                        }else if(Life1 <= 0){
                            cout << "Monster is dead." << endl;
                            Goldcoins += 100;
                            cout << "Congratulations on getting 100 gold coins." << endl;
                            break;
                            system("pause");
                        }
                        
                    }
                
                }else if(b == 3){
                    int Life1 = 400, Attack1 = 100;
                    int Dodge1 = Dodge;
                    cout << endl << "Advanced Monster —— Life 400, Attack 10 , Gold coins 200" << endl << "Your attack power: " << Attack << " " << "Life: " << Life << endl << endl << "Start! You VS Advanced Monster" << endl;
                    
                    while(Life > 0){
                        cout << endl << "1. Attack 2. Dodge (" << Dodge1 << ") can make monster life -5" << endl << "Enter: ";
                         cin >> c;
                        
                        if(c == 1){
                            Life -= Attack1;
                            Life1 -= Attack;
                            cout << endl << "Your life：" << Life << endl;
                            cout << "Monster life: "<< Life1 << endl;
                            
                        }else if(c == 2){
                          
                            if(Dodge1 > 0){
                                cout << "Dodge success." << endl;
                                Dodge1 --;
                                Life1 -= 5;
                                cout << "Monster life: " << Life1+5 << " - 5 = " << Life1 << endl;
                                
                            }else if(Dodge1 == 0){
                                cout << "Dodge failure. Being attacked" << endl;
                                Life -= Attack1;
                                cout << endl << "Your life：" << Life << endl;
                                cout << "Monster life: " << Life1 << endl;
                            }
                            
                        }else{
                            cout << "There is no such option." << endl;
                            
                        }if(Life <= 0){
                            cout << "You are dead." << endl;
                            system("pause");
                            return 0;
                            
                        }else if(Life1 <= 0){
                            cout << "Monster is dead." << endl;
                            Goldcoins += 200;
                            cout << "Congratulations on getting 200 gold coins." << endl;
                            break;
                            system("pause");
                        }
                    }
                    
                }else if(b == 4){
                    cout << endl << "Ultimate Monster —— Life 1000, Attack 500, Gold coins 500" << endl << "Your attack power: " << Attack << " " << "Life: "<< Life << endl << endl << "Start! You VS Ultimate Monster" << endl;
                    int Life1 = 1000, Attack1 =500;
                    int Dodge1 = Dodge;
                   
                    while(Life1 > 0){
                        cout << endl << "1. Attack 2. Dodge (" << Dodge1 << ") can make monster life -5" << endl << "Enter: ";
                         cin >> c;
                        
                        if(c == 1){
                            Life -= Attack1;
                            Life1 -= Attack;
                            cout << endl << "Your life: " << Life << endl;
                            cout << "Monster life: " << Life1 << endl;
                            
                        }else if(c == 2){
                           
                            if(Dodge > 0){
                                cout << "Dodge success."<<endl;
                                Dodge --;
                                Life1 -= 5;
                                cout << "Monster Life: " << Life1+5 << " - 5 = " << Life1 << endl;
                                
                            }else if(Dodge == 0){
                                cout << "Dodge failure. Being attacked" << endl;
                                Life -= Attack1;
                                cout << endl <<  "Your life: " << Life << endl;
                                cout << "Monster life: " << Life1 << endl;
                            }
                            
                        }else{
                            cout << "There is no such option." << endl;
                            
                        }if(Life <= 0){
                            cout << "You are dead." << endl;
                            system("pause");
                            return 0;
                            
                        }else if(Life1 <= 0){
                            cout << "Monster is dead." << endl;
                            Goldcoins += 500;
                            cout << "Congratulations on getting 500 gold coins." << endl;
                            break;
                            system("pause");
                        }
                        
                    }
                    
                }else if(b == 5){
                    cout << endl << "Devil —— Life 5000, Attack 1000, Gold coins 1000，and pass the game!" << endl << "Your Attack: " << Attack << " " << "Life: " << Life << endl << endl << "Start! You VS Devil" << endl;
                    int Life1 = 5000, Attack1 = 1000;
                    int Dodge1 = Dodge;
                    
                    while(Life1 > 0){
                        cout << endl << "1. Attack 2. Dodge (" << Dodge1 << ") can make Devil life -5" << endl << "Enter: ";
                         cin >> c;
                        
                        if(c == 1){
                            Life -= Attack1;
                            Life1 -= Attack;
                            cout << endl << "Your life: " << Life << endl;
                            cout << "Devil life: " << Life1 << endl;
                        
                        }else if(c == 2){
                            if(Dodge > 0){
                                cout << "Dodge success." << endl;
                                Dodge --;
                                Life1 -= 5;
                                cout << "Devil life: " << Life1+5 << " - 5 = " << Life1 << endl;
                            
                            }else if(Dodge==0){
                                cout << "Dodge failure. Being attacked!" << endl;
                                Life -= Attack1;
                                cout << endl << "Your life: " << Life << endl;
                                cout << "Devil life: " << Life1 << endl;
                            }
                        
                        }else{
                            cout << "There is no such option." << endl;
                        
                        }if(Life <= 0){
                            cout << "You are dead."<< endl;
                            system("pause");
                            return 0;
                        
                        }else if(Life1 <= 0){
                            cout << "Devil is dead." << endl;
                            Goldcoins += 1000;
                            cout << "Congratulations on defeating the Devil and passing the game!" << endl;
                            system("pause");
                            return 0;
                        }
                    } 
                
                }else if(b == 0){
                    break;
                }
                
            }
            
        }else if(a == 3){
            cout << endl << "Your life: " << Life << endl;
            cout << "Your attack: " << Attack << endl;
            cout << "Your gold coins：" << Goldcoins << endl;
            cout << "Number of dodge：" << Dodge << endl;
            cout << "Life limit：" << LifeLimit << endl;
    
        }else if(a == 4){
            cout << "The game has quit." << endl;
            system("pause");
            return 0;
            
        }else{
            return 0;
        }
        
    }
    
}
