#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define max 100

int count = 10;
int _ID = 11;

typedef struct reservation{
    char name[max];
    char lastName[max];
    char tel[15];
    int age;
    int status;
    char date[11];
    int id;
}res;

res _res[max] =  {
    {"Ahmed", "Benali", "0612345678", 30, 4, "30-10-2024", 1},
    {"Fatima", "Zahra", "0623456789", 25, 4, "15-10-2024", 2},
    {"Youssef", "Idrissi", "0634567890", 22, 3, "10-10-2024", 3},
    {"Sara", "Lahlou", "0645678901", 28, 1, "03-10-2024", 4},
    {"Hassan", "Mouad", "0656789012", 35, 4, "07-10-2024", 5},
    {"Amina", "Bennani", "0667890123", 26, 1, "09-10-2024", 6},
    {"Omar", "Jamal", "0678901234", 31, 1, "24-10-2024", 7},
    {"Nadia", "Fahmi", "0689012345", 45, 3, "01-10-2024", 8},
    {"Khalid", "Amrani", "0690123456", 24, 4, "24-10-2024", 9},
    {"Leila", "Safi", "0701234567", 27, 2, "14-10-2024", 10}
};

void verifyDate(char phrase[11]){
    int day, month, year;
    printf("\nEnter Date Of Reservation (dd-mm-yyyy): ");
    if (scanf("%d-%d-%d", &day, &month, &year) != 3) {
        printf("\nError: Invalid date.\n");
        return;
    }

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("\nError: Invalid date.\n");
        return;
    }
    if ((month == 2 && day > 29) || (day == 29 && month == 2 && year % 4 != 0)) {
        printf("\nError: Invalid date.\n");
        return;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        printf("\nError: Invalid date.\n");
        return;
    }

    phrase[0] = (day / 10) + '0';        
    phrase[1] = (day % 10) + '0';        
    phrase[2] = '-';                      
    phrase[3] = (month / 10) + '0';      
    phrase[4] = (month % 10) + '0';      
    phrase[5] = '-';                      
    phrase[6] = (year / 1000) + '0';     
    phrase[7] = ((year / 100) % 10) + '0';
    phrase[8] = ((year / 10) % 10) + '0'; 
    phrase[9] = (year % 10) + '0';       
    phrase[10] = '\0';    
}
void delete(int id){
    bool found = false;
    for(int i = 0;i<max;i++){
        if(id==_res[i].id){
        for(int j = i;j<count;j++){
            strcpy(_res[j].name , _res[j+1].name);
            strcpy(_res[j].lastName , _res[j+1].lastName);
            strcpy(_res[j].tel , _res[j+1].tel);
            strcpy(_res[j].date , _res[j+1].date);
            _res[j].age = _res[j+1].age;
            _res[j].status = _res[j+1].status;
            _res[j].id = _res[j+1].id;
        }found = true;count--;printf("\nDelete Succesful!!!");}
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
                char ch;
                case 1:
                    printf("\nEnter First Name: ");
                    if (scanf("%49s", _res[i].name) == 1) {
                        ch = getchar();
                        if (ch == ' ' || ch != '\n') {
                            printf("Error: Only one word is allowed for the first name.\n");
                            while (ch != '\n' && ch != EOF) ch = getchar();
                            return;  
                        }
                    }
                    for (int j = 0; _res[i].name[j] != '\0'; i++) {
                        if (!isalpha(_res[i].name[j])) {
                            printf("\nError: Name can only be alphabetic characters.");
                            return;
                        }
                    }

                    break;
                case 2:
                    printf("\nEnter Last Name: ");
                    if (scanf("%49s", _res[i].lastName) == 1) {
                        ch = getchar();
                        if (ch == ' ' || ch != '\n') {
                            printf("Error: Only one word is allowed for the last name.\n");
                            while (ch != '\n' && ch != EOF) ch = getchar();
                            return;
                        }
                    }
                    for (int j = 0; _res[i].lastName[j] != '\0'; i++) {
                        if (!isalpha(_res[i].lastName[j])) {
                            printf("\nError: Name can only be alphabetic characters.");
                            return;
                        }
                    }
                    break;
                case 3:
                        printf("\nEnter Telephone Number : ");
                        if ( scanf(" %15s", _res[i].tel) == 1) {
                            ch = getchar();
                            if (ch == ' ' || ch != '\n') {
                                printf("Error: Only one Number is allowed for the Phone Number.\n");
                                while (ch != '\n' && ch != EOF) ch = getchar();
                                return;
                            }
                        }

                        if (!isdigit(_res[i].tel[0]) && _res[i].tel[0] != '+') {
                            printf("\nError: Phone number must numbers only");
                            return;
                        }
                        for (int j = 1; _res[i].tel[j] != '\0'; j++) {
                            if (!isdigit(_res[i].tel[j])) {
                                printf("\nError: Phone number must numbers only");
                                return;
                            }
                        }
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
                    verifyDate(_res[i].date);
                    break;
                case 7:
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
    char ch;

    printf("\nEnter First Name: ");
    if (scanf("%49s", _res[count].name) == 1) {
        ch = getchar();
        if (ch == ' ' || ch != '\n') {
            printf("Error: Only one word is allowed for the first name.\n");
            while (ch != '\n' && ch != EOF) ch = getchar();
            return;  
        }
    }
    for (int i = 0; _res[count].name[i] != '\0'; i++) {
        if (!isalpha(_res[count].name[i])) {
            printf("\nError: Name can only be alphabetic characters.");
            return;
        }
    }
    printf("\nEnter Last Name: ");
    if (scanf("%49s", _res[count].lastName) == 1) {
        ch = getchar();
        if (ch == ' ' || ch != '\n') {
            printf("Error: Only one word is allowed for the last name.\n");
            while (ch != '\n' && ch != EOF) ch = getchar();
            return;
        }
    }
    for (int i = 0; _res[count].lastName[i] != '\0'; i++) {
        if (!isalpha(_res[count].lastName[i])) {
            printf("\nError: Name can only be alphabetic characters.");
            return;
        }
    }
    printf("\nEnter Telephone Number : ");
    if ( scanf(" %15s", _res[count].tel) == 1) {
        ch = getchar();
        if (ch == ' ' || ch != '\n') {
            printf("Error: Only one Number is allowed for the Phone Number.\n");
            while (ch != '\n' && ch != EOF) ch = getchar();
            return;
        }
    }

    if (!isdigit(_res[count].tel[0]) && _res[count].tel[0] != '+') {
        printf("\nError: Phone number must numbers only");
        return;
    }
    for (int i = 1; _res[count].tel[i] != '\0'; i++) {
        if (!isdigit(_res[count].tel[i])) {
            printf("\nError: Phone number must numbers only");
            return;
        }
    }
    printf("\nEnter Age : ");
    if(scanf(" %d", &_res[count].age)!=1){
        printf("\ninvalid Age!!!! Enter Age : ");
        return;
    }
    if(_res[count].age<0 && _res[count].age>100){
            printf("\ninvalid Age!!!! Enter Age : ");
            return;
    }
    printf("\nEnter Status (1.valide, 2.reporte, 3.annule, 4.traite) : ");
    if(scanf(" %d", &_res[count].status)!=1){
            printf("\ninvalid Status!!!! Enter Status : ");
            return;
    }
    if(_res[count].status<1 && _res[count].status>4){
            printf("\ninvalid Status!!!! Enter Status : ");
            return;
    }

    verifyDate(_res[count].date);
               

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
        char phrase1[max];
        if (count > 0) {
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        printf("\n--------------------------------------------------------------------------------------------------------------");
        for(int i = 0; i < count; i++) {
            if(_res[i].status == 1){strcpy(phrase1,"validated");}
            else if(_res[i].status == 2){strcpy(phrase1,"postponed");}
            else if(_res[i].status == 3){strcpy(phrase1,"canceled");}
            else if(_res[i].status == 4){strcpy(phrase1,"processed");}

            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", _res[i].id, _res[i].name, _res[i].lastName, _res[i].tel, _res[i].age,
             phrase1, _res[i].date);
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
    for(int i=0;i<count;i++){
      for(int j=i+1;j<count;j++){
         if(strcmp(str[i].lastName,str[j].lastName)>0){
            s = str[i];
            str[i] = str[j];
            str[j] = s;
         }
      }
   }
        char phrase1[max];
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        printf("\n--------------------------------------------------------------------------------------------------------------");
        for(int i = 0; i < count; i++) {
            if(str[i].status == 1){strcpy(phrase1,"validated");}
            else if(str[i].status == 2){strcpy(phrase1,"postponed");}
            else if(str[i].status == 3){strcpy(phrase1,"canceled");}
            else if(str[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", str[i].id, str[i].name, str[i].lastName, str[i].tel, str[i].age,
             phrase1, str[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
        }

}
void sortbyDate(){

    res str[max];
    res s;
    
    for(int i = 0; i < max; i++) {
        str[i] = _res[i];
    }
    
    int day, month, year;
    int day_, month_, year_;
    
    bool isOlder = false;

    for(int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            
            char __day[3], __month[3], __year[5];
            
            strncpy(__day, str[j].date, 2);
            strncpy(__month, str[j].date + 3, 2);
            strncpy(__year, str[j].date + 6, 4);

            day_ = atoi(__day);
            month_ = atoi(__month);
            year_ = atoi(__year);

            char _day[3], _month[3], _year[5];
            strncpy(_day, str[i].date, 2);
            strncpy(_month, str[i].date + 3, 2);
            strncpy(_year, str[i].date + 6, 4);


            day = atoi(_day);
            month = atoi(_month);
            year = atoi(_year);

            
            if (year > year_) {
                isOlder = true;
            } else if (year == year_) {
                if (month > month_) {
                    isOlder = true;
                } else if (month == month_) {
                    if (day > day_) {
                        isOlder = true;
                    } else {
                        isOlder = false;
                    }
                } else {
                    isOlder = false;
                }
            } else {
                isOlder = false;
            }
            if (isOlder) {
                s = str[i];
                str[i] = str[j];
                str[j] = s;
            }
        }
    }
        char phrase1[max];
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        printf("\n--------------------------------------------------------------------------------------------------------------");
        for(int i = 0; i < count; i++) {
            if(str[i].status == 1){strcpy(phrase1,"validated");}
            else if(str[i].status == 2){strcpy(phrase1,"postponed");}
            else if(str[i].status == 3){strcpy(phrase1,"canceled");}
            else if(str[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", str[i].id, str[i].name, str[i].lastName, str[i].tel, str[i].age,
             phrase1, str[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
        }
}
void sortbyNamZA(){
    res str[max];
    res s;
    for(int i = 0;i<max;i++){
        str[i] = _res[i];
    }
    for(int i=0;i<count;i++){
      for(int j=i+1;j<count;j++){
         if(strcmp(str[i].lastName,str[j].lastName)<0){
            s = str[i];
            str[i] = str[j];
            str[j] = s;
         }
      }
   }
    
        char phrase1[max];
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        printf("\n--------------------------------------------------------------------------------------------------------------");
        for(int i = 0; i < count; i++) {
            if(str[i].status == 1){strcpy(phrase1,"validated");}
            else if(str[i].status == 2){strcpy(phrase1,"postponed");}
            else if(str[i].status == 3){strcpy(phrase1,"canceled");}
            else if(str[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", str[i].id, str[i].name, str[i].lastName, str[i].tel, str[i].age,
             phrase1, str[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
        }
}
void sortbyStatus(){
    res str[max];
    res s;
    int countx = 0;
    for(int i = 0;i<count;i++){
        if(_res[i].status == 1){
            str[countx] = _res[i];
            countx++;
        }
    }
    for(int i = 0;i<count;i++){
        if(_res[i].status == 2){
            str[countx] = _res[i];  
            countx++;
        }
    }for(int i = 0;i<count;i++){
        if(_res[i].status == 3){
            str[countx] = _res[i];
            countx++;
        }
    }for(int i = 0;i<count;i++){
        if(_res[i].status == 4){
            str[countx] = _res[i];
            countx++;
        }
    }
        char phrase1[max];
        printf("\n--------------------------------------------------------------------------------------------------------------");
        printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
        printf("\n--------------------------------------------------------------------------------------------------------------");
        for(int i = 0; i < count; i++) {
            if(str[i].status == 1){strcpy(phrase1,"validated");}
            else if(str[i].status == 2){strcpy(phrase1,"postponed");}
            else if(str[i].status == 3){strcpy(phrase1,"canceled");}
            else if(str[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", str[i].id, str[i].name, str[i].lastName, str[i].tel, str[i].age,
             phrase1, str[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
        }

}
void sort(){
    int choice;
    printf("\n1.Display with alphabtical order A-Z");
    printf("\n2.Display with alphabtical order Z-A");
    printf("\n3.Dislay by Date");
    printf("\n4.Display by Status");
    printf("\nEnter you Choice : ");
    while(scanf("%d",&choice)!=1){
        printf("\ninvalid choice!!! Please Renter : ");
        getchar();
    }
    switch(choice){
        case 1:
            sortbyNamAZ();
            break;
        case 2:
            sortbyNamZA();
            break;
        case 3:
            sortbyDate();
            break;
        case 4:
            sortbyStatus();
            break;
        default:
            printf("\nInvalid Choice!!!!!");
            break;
    }


}
void searchByName(){
    char ch;
    char phrase[max];
    printf("\nEnter Last Name: ");
    if (scanf("%49s", phrase) == 1) {
        ch = getchar();
        if (ch == ' ' || ch != '\n') {
            printf("Error: Only one word is allowed for the last name.\n");
            while (ch != '\n' && ch != EOF) ch = getchar();
            return;
        }
    }
    for (int i = 0; phrase[i] != '\0'; i++) {
        if (!isalpha(phrase[i])) {
            printf("\nError: Name can only be alphabetic characters.");
            return;
        }
    }
    for(int i = 0;i<count;i++){
        char phrase1[max];
        if(strcmp(_res[i].lastName, phrase)==0){
            if(_res[i].status == 1){strcpy(phrase1,"validated");}
            else if(_res[i].status == 2){strcpy(phrase1,"postponed");}
            else if(_res[i].status == 3){strcpy(phrase1,"canceled");}
            else if(_res[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", _res[i].id, _res[i].name, _res[i].lastName, _res[i].tel, _res[i].age,
             phrase1, _res[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
            
        }
    }
}
void searchByDate(){
    char phrase[max];
    verifyDate(phrase);
    for(int i = 0;i<count;i++){
        char phrase1[max];
        if(strcmp(_res[i].date, phrase)==0){
            if(_res[i].status == 1){strcpy(phrase1,"validated");}
            else if(_res[i].status == 2){strcpy(phrase1,"postponed");}
            else if(_res[i].status == 3){strcpy(phrase1,"canceled");}
            else if(_res[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", _res[i].id, _res[i].name, _res[i].lastName, _res[i].tel, _res[i].age,
             phrase1, _res[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
            
        }
    }
}
void searchByID(){
    char ch;
    int yu;
    printf("\nEnter ID refrence: ");
    while(scanf("%d",&yu)!=1){
        printf("\ninvalid choice!!! Please Renter : ");
        getchar();
    }
    for(int i = 0;i<count;i++){
        char phrase1[max];
        if(_res[i].id==yu){
            if(_res[i].status == 1){strcpy(phrase1,"validated");}
            else if(_res[i].status == 2){strcpy(phrase1,"postponed");}
            else if(_res[i].status == 3){strcpy(phrase1,"canceled");}
            else if(_res[i].status == 4){strcpy(phrase1,"processed");}
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|  ref'ID  |    First Name    |       Last Name      |       Tel N°:      |  Age  |  Status  |      DATE     |");
            printf("\n--------------------------------------------------------------------------------------------------------------");
            printf("\n|%-10d|%-18s|%-22s|%-20s|%-8d|%-10s|%-15s|", _res[i].id, _res[i].name, _res[i].lastName, _res[i].tel, _res[i].age,
             phrase1, _res[i].date);
            printf("\n-----------------------------------------------------------------------------------------------------------");
            
        }
    }
}
void search(){
    int choice;
    printf("\n1.Search by Refrence ID");
    printf("\n2.Search by Name");
    printf("\n3.Search by Date");
    printf("\nEnter you Choice : ");
    while(scanf("%d",&choice)!=1){
        printf("\ninvalid choice!!! Please Renter : ");
        getchar();
    }switch(choice){
        case 1:
            searchByID();
            break;
        case 2:
            searchByName();
            break;
        case 3:
            searchByDate();
            break;
    }
}
void stats(){
    int avgAge =0, teen=0, adult=0, old=0, vali=0, annul=0, trai=0, repo=0;
    for(int i = 0;i<count;i++){
        avgAge += _res[i].age;
        if(_res[i].age<=18){teen++;}
        if(_res[i].age>18&&_res[i].age<=35){adult++;}
        if(_res[i].age>35){old++;}
        if(_res[i].status == 1){vali++;}
        if(_res[i].status == 2){repo++;}
        if(_res[i].status == 3){annul++;}
        if(_res[i].status == 4){trai++;}
    }
    printf("\nAvg Age is : %d",avgAge/count);
    printf("\nTeenagers under 18 are : %d", teen);
    printf("\nAdults above 18 and under 35 are : %d", adult);
    printf("\nAdults above 35 : %d", old);
    
    printf("\nNumber of Validated Reservation: %d", vali);
    printf("\nNumber of PostPoned Reservation: %d", repo);
    printf("\nNumber of Canceled Reservation: %d", annul);
    printf("\nNumber of Processed Reservation: %d\n", trai);


}
int main(){
    
    int choice;
    while(choice!=7){
    printf("\n1.Add a Reservation. ");
    printf("\n2.Modify or Delete a reservation. ");
    printf("\n3.Display list of reservations. ");
    printf("\n4.Display With Sorting Format. ");
    printf("\n5.Search for a specific Reservation.");
    printf("\n6.Display Statistics.");
    printf("\n7.Quit the Application.");
    printf("\nEnter Your Choice : ");
    while(scanf("%d",&choice)!=1){
        printf("\ninvalid choice!!! Please Renter : ");
        getchar();
    }

    switch(choice){
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            sort();
            break;
        case 5:
            search();
            break;
        case 6:
            stats();
            break;
    }
    }
}