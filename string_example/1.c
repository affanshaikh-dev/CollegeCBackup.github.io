#include <stdio.h>

int main()
{
    char studentName[80];
    char HSCStream[80];
    int studentRoll; 
    int studentHSCMark;

    printf("Enter Student Name:- \n");
    scanf("%79s", studentName);

    printf("Enter Student HSC Stream:- \n");
    scanf("%79s", HSCStream);
    
    printf("Enter Student Roll:- \n");
    scanf("%d", &studentRoll);
    
    printf("Enter Student HSC Marks:- \n");
    scanf("%d", &studentHSCMark);

    printf("Student Name:- %s \n Student HSC Stream:- %s \n Student Roll:- %d \n Student HSC Mark:- %d", studentName, HSCStream, studentRoll, studentHSCMark);

    return 0;
}