
#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

int main(void){
    char id[14];//문자열 선언

    scanf("%s",id);
    printf("%s?\?!",id); // '??!' 는 삼중자이므로 다른 문장부호로 치환되어버린다 따라서 중간에 역슬래시 추가


    return 0;
}


/*
#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    
    string id;
    cin >> id;
    
    id += "?\?!";
    cout << id;
 
    return 0;
}

*/