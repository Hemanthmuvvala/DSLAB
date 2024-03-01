#include<stdio.h>
#include<stdlib.h>
#define S 10;
#define A 9;
#define B 8;
#define C 7;
#define D 6;
#define E 5;
#define F 0;

int main(){
    float cgpa;
    char nss,chelab,englab,iplab,ews,ce,ip,bcme,mat,che;
    printf("make sure that all the grades u entered are capital\n");
    printf("enter your NSS grade:");
    scanf("%s",nss);
    printf("enter your chemistry lab grade:");
    scanf("%s",chelab);
    printf("enter your english lab grade:");
    scanf("%s",englab);
    printf("enter your IPLAB grade:");
    scanf("%s",iplab);
    printf("enter your EWS grade:");
    scanf("%s",ews);
    printf("enter your English grade:");
    scanf("%s",ce);
    printf("enter your ip grade:");
    scanf("%s",ip);
    printf("enter your bcme grade:");
    scanf("%s",bcme);
    printf("enter your maths grade:");
    scanf("%s",mat);
    printf("enter your chemistry grade:");
    scanf("%s",che);
    cgpa=(nss*0.5+chelab*1+englab*1+iplab*1.5+ews*1.5+ce*2+ip*3+bcme*3+mat*3+che*3)/(19.5);
    printf("YOU HAD GOT %d CGPA",cgpa);
    return 0;





}
