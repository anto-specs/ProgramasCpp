#include <iostream>

void printVolume(int volume){
    std::cout <<volume<< std::endl;
}

bool setVolume(int& volume, int newVolume){
    if(newVolume == volume or newVolume < 0 or newVolume > 100){
        return false;
    }
    else return true;
}

int main(){
    int volume = 0, newVolume;

    std::cout <<"Current volume: "; printVolume(volume);
    std::cout <<"Set a new volume: "; std::cin>> newVolume;

    if(setVolume(volume, newVolume)){
        volume = newVolume;
        std::cout <<"New volume: "; printVolume(volume);
    }
    else(std::cout <<"The volume didnt change or the number was incorrect (0-100)."<<std::endl);
}