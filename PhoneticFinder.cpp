#include <iostream>
#include <string>
#include <algorithm>
#include "PhoneticFinder.hpp"


namespace phonetic {
 std::string find(std::string b, std::string a){
     std::string temp;
     bool ans = false;
     if(a=="")throw std::exception();
     for(int i=0;i < b.length(); i++){
         if(b.at(i)!=' '){
             temp+= b.at(i);
             continue;
         }
         ans = checkIfEqual(a, temp);
         if(ans) return temp;
         else temp = "";
     }
        ans = checkIfEqual(a, temp);
        if(ans) return temp;
        
       throw std::invalid_argument("the word not exist"); // if the word not exist!
	}
};



////////////////////////////////////////////




bool checkIfEqual(std::string text, std::string target){ /// check if the two words are equal.. ! 
    text =  UpperCase(text); 
    target =  UpperCase(target);
    // case 1:
     if(text.length() != target.length() ) return false; // to avoid subText error! 
    // case 2:
    bool ans = true;
    for(int i=0;i<text.length();i++){
        ans = checkChar(text.at(i), target.at(i)); //check if the chars are equal(example: d -- t or d -- d)
        if(!ans) return false;
    }
    return true;
}


std::string UpperCase(std::string text){ // convert from uppercase to lowercase !
std::for_each(text.begin(), text.end(), [](char & c){
	c = :: tolower(c);
});
    return text;
}

bool checkChar(char a, char b){ // v,w - b,f,p - g,j - c,k,q - s,z - d,t - o,u - i,y 
     if((a=='v' || a=='w') && (b=='v' || b=='w')) return true;
     if((a=='b' || a=='f') && (b=='b' || b=='f')) return true;
     if((a=='b' || a=='p') && (b=='b' || b=='p')) return true;
     if((a=='f' || a=='p') && (b=='f' || b=='p')) return true;
     if((a=='g' || a=='j') && (b=='g' || b=='j')) return true;
     if((a=='c' || a=='k') && (b=='c' || b=='k')) return true;
     if((a=='c' || a=='q') && (b=='c' || b=='q')) return true;
     if((a=='k' || a=='q') && (b=='k' || b=='q')) return true;
     if((a=='s' || a=='z') && (b=='s' || b=='z')) return true;
     if((a=='d' || a=='t') && (b=='d' || b=='t')) return true;
     if((a=='o' || a=='u') && (b=='o' || b=='u')) return true;
     if((a=='i' || a=='y') && (b=='i' || b=='y')) return true;
     if(a==b) return true;
    return false;
}


