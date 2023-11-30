//
//  main.c
//  13_P1
//
//  Created by ok sojoung on 2023/11/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int     ID;         // 학번
    char    name[10];   // 이름
    float  grade;      // 학점
};

int main(void){
    // instance 선언
    struct  student s1 = {1910729, "OK", 4.3};
    
    // 다른 값 변경
    s1.ID = 123456;
    s1.name[0] = 'c';
    s1.grade = 0.7;
    
    // 출력
    printf("ID : %i\n", s1.ID);
    printf("name: %s\n", s1.name);
    printf("grade: %f\n", s1.grade);
    
    strcpy(s1.name, "Bye");
    printf("name2 : %s\n", s1.name);
    return 0;
}
