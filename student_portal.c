#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    char name[50];
    float percentage;
};
void stuip(struct student* s){
    printf ("Enter the id of the student: ");
    scanf ("%d", &s->id);
    printf ("\n");
    printf ("Enter the name of the student: ");
    scanf ("%s", &s->name);
    printf ("\n");
    printf ("Enter the percentage of the student: ");
    scanf ("%f", &s->percentage);
    printf ("\n");
}

void printstudent(struct student* s){
   printf("\nName:- %s, Id:- %d, Marks:- %f\n",s->name, s->id, s->percentage );
}

int main(){
    int maxnum;
    // printf ("Enter the number of maximum number of students: ");
    // scanf ("%d", &maxnum);
    FILE *ptr;
    ptr = fopen ("studnt.bin", "rb+");
    // struct student s;
    struct student s2;
    char buffer[50];
    // stuip(&s);
    // fwrite(&s, sizeof(struct student), 1 , ptr);
    // fseek(ptr , 0 , SEEK_SET);
    fread (&s2, sizeof(struct student), 1 , ptr);
    printstudent(&s2);
    // printf ("%s", buffer);
    fclose(ptr);

    return 0;

}