#include<iostream>
using namespace std;

void levelUp(int level) {
    level++;
    cout << "   [Inside function] Ghost Clone Level: " << level << endl;
}
int main(){

int playerLevel = 1;
    cout << "4. Before levelUp, Main Menu Level: " << playerLevel << endl;
    
    levelUp(playerLevel); // Level ki copy bhej raha hai
    
    cout << "   After levelUp, Main Menu Level still: " << playerLevel << " (No Change!)" << endl;

    return 0;
}
