#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define max 100

int count = 0;
int _ID = 0;

typedef struct reservation{
    char name[max];
    char lastName[max];
    char tel[15];
    int age;
    int status;
    char date[10];
    int id;
}res;

res _res[max];

void delete(int id){
    bool found = false;
    for(int i = 0;i<max;i++){
        if(id==_res[i].id){
            strcpy(_res[i].name , _res[i+1].name);
            strcpy(_res[i].lastName , _res[i+1].lastName);
            strcpy(_res[i].tel , _res[i+1].tel);
            strcpy(_res[i].date , _res[i+1].date);
            _res[i].age = _res[i+1].age;
            _res[i].status = _res[i+1].status;
            found = true;
            printf("\nDelete Succesful!!!");
        }
    }if(!found){printf("\nNo reservation associated with This ID.");}
}
void modify(int id){
    int choice;
    bool found = false;
    for(int i = 0;i<max;i++){
        if(id==_res[i].id){
            while(choice!=7){
                printf("\n1.First Name \n2.Last Name \n3.Telephone Number\n4.Age\n5.Status\n6.Date\n7.Return to Main Menu\nEnter what value to modify : ");
                scanf("%d",&choice);
                switch (choice)
                {
                case 1:
                    printf("\nEnter First Name : ");
                    scanf(" %s", _res[i].name);
                    break;
                case 2:
                    printf("\nEnter Last  Name : ");
                    scanf(" %s", _res[i].lastName);
                    break;
                case 3:
                    printf("\nEnter Telephone Number : ");
                    scanf(" %15s", _res[i].tel);
                    break;
                case 4:
                    printf("\nEnter Age : ");
                    scanf(" %d", &_res[i].age);
                    break;
                case 5:
                    printf("\nEnter Status (1.validé, 2.reporté, 3.annulé, 4.traité) : ");
                    scanf(" %d", &_res[i].status);
                    break;
                case 6:
                    printf("\nEnter Date Of Reservation (dd-mm-yyyy) : ");
                    scanf(" %s", _res[count].date);
                    break;
                default:
                    printf("\nInvalid Choice!!!");
                    break;
                }
            }
            found = true;
            printf("\nModification Successful!!!");
        }
    }if(!found){printf("\nNo reservation associated with This ID.");}
}

void add(){
    printf("\nEnter First Name : ");
    scanf(" %s", _res[count].name);
    printf("\nEnter Last  Name : ");
    scanf(" %s", _res[count].lastName);
    printf("\nEnter Telephone Number : ");
    scanf(" %15s", _res[count].tel);
    printf("\nEnter Age : ");
    scanf(" %d", &_res[count].age);
    printf("\nEnter Status (1.validé, 2.reporté, 3.annulé, 4.traité) : ");
    scanf(" %d", &_res[count].status);
    printf("\nEnter Date Of Reservation (dd-mm-yyyy) : ");
    scanf(" %s", _res[count].date);
    _res[count].id = _ID;
    _ID++;
    count++;
}

void del(){
    int refID;
    int _ch;
    printf("\nEnter Refrence ID : ");
    scanf(" %d", &refID);
    printf("\nChoos what to do with the reservation (1.Modify 2.Delete) :");
    scanf(" %d", &_ch);
    if(_ch==1){modify(refID);}else if(_ch==2){delete(refID);}
}

void display(){
    for(int i =0;i<count;i++)
        if (count > 0) {
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        for(int i = 0; i < count; i++) {
            printf("\n|%-10d|%-18s|%-21s|%-20s|%-8d|%-10d|%-15s|", _res[i].id, _res[i].name, _res[i].lastName, _res[i].tel, _res[i].age, _res[i].status, _res[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
        }
    } else {
        printf("\n\tAucun Reservation!!!\n");
    }
}

void sortbyNamAZ(){
    res str[max];
    res s;
    for(int i = 0;i<max;i++){
        str[i] = _res[i];
    }
    for(int i=0;i<max;i++){
      for(int j=i+1;j<max;j++){
         if(strcmp(str[i].lastName,str[j].lastName)>0){
            strcpy(s.lastName,str[i].lastName);
            strcpy(str[i].lastName,str[j].lastName);
            strcpy(str[j].lastName,s.lastName);
         }
      }
   }
}

void sort(){
    int choice;
    printf("\n1.Display with alphabtical order A-Z");
    printf("\n2.Display with alphabtical order Z-A");
    printf("\n3.Dislay by Date");
    printf("\n4.Display by Status");
    scanf("%d", &choice);

}


int main(){

}