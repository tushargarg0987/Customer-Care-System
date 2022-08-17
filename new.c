#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    printf("\n\t---------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t ABC CUSTOMER SERVICE \t\t\t\n");
    printf("\n\t---------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t WELCOME \t\t\t\n");
    firstre:
    printf("\n\tSelect any option : \n");
    printf("\t1 - To know about new products\n");
    printf("\t2 - To know discount going on\n");
    printf("\t3 - Claim Warrenty\n");
    printf("\t4 - Talk to Technical Executive\n");
    int s1,s2,s3;
    char query[100], comp[4],name[50],telnumber[15];
    printf("\n\t");
    scanf("%d",&s1);
    printf("\n");
    if(s1 ==1){
        FILE *fp; 
        char con[1000]; 
        fp = fopen("products.txt","r");
        while (fgets(con,1000, fp)!=NULL)
        printf("\t%s",con);
        fclose(fp);
    }
    else if(s1==2){
        FILE *fp; 
        char con[1000]; 
        fp = fopen("discounts.txt","r");
        while (fgets(con,1000, fp)!=NULL)
        printf("\t%s",con);
        fclose(fp);
    }
    else if(s1==3){
        secondre:
        printf("\n\tSelect your product type : \n");
        printf("\t1 - Smart Watch\n");
        printf("\t2 - TWS(Truely Wireless Stereo) Earphones\n");
        printf("\t3 - Wireless Earphones\n");
        printf("\t4 - Headphones\n");
        printf("\n\t");
        scanf("%d",&s2);
        printf("\n");
        if(s2==1){
            printf("\t1 - Display not working\n");
            printf("\t2 - Charger not working\n");
            printf("\t3 - Power button not working\n");
            printf("\t4 - Others\n");
        }
        else if(s2==2){
            printf("\t1 - One bud not working\n");
            printf("\t2 - Case not working\n");
            printf("\t3 - Bluetooth not connecting\n");
            printf("\t4 - Others\n");
        }
        else if(s2==3){
            printf("\t1 - One bud side working\n");
            printf("\t2 - Charger not working\n");
            printf("\t3 - Bluetooth not connecting\n");
            printf("\t4 - Others\n");
        }
        else if(s2==4){
            printf("\t1 - One bud side working\n");
            printf("\t2 - Charger not working\n");
            printf("\t3 - Bluetooth not connecting\n");
            printf("\t4 - Others\n");
        }
        else{
            printf("\tInvalid option\n");
            goto secondre;
        }
        thirdre:
        printf("\n\t");
        scanf("%d",&s3);
        printf("\n");
        if(s3 == 4){
            printf("Describe your problem: ");
            // scanf("%s",query);
            gets(query);
            gets(query);
            // fgets(query, 100, stdin);
        }
        // else if(s3>0 && s3<4){
        //     printf("Complaint registered successfully\n");
        // }
        else if(s3>4 || s3<1){
            printf("Invalid option! Choose again");
            goto thirdre;
        }
        
    }
    else if(s1==4){
        printf("Enter your number and we will call you back.\n");
        printf("Number : ");
        char num[11];
        scanf("%s",num);
        FILE *fp;
        fp =fopen("numbers.txt", "a");
        fprintf(fp,"%s\n", num);
        fclose(fp);
    }
    else{
        printf("\tInvalid option\n");
        goto firstre;
    }
    if(s1==3){
        printf("\tEnter your name : ");
        scanf("%s",name);
        printf("\n\tEnter your number : ");
        scanf("%s",telnumber);
        FILE *fp;
        fp =fopen("comp.txt", "a");
        fprintf(fp,"%s\n", name);
        fprintf(fp,"\t%s\n", telnumber);
        char st1[2],st2[2],st3[2];
        sprintf(st1, "%d", s1);
        sprintf(st2, "%d", s2);
        sprintf(st3, "%d", s3);
        fprintf(fp,"\t%s", st1);
        fprintf(fp,"%s", st2);
        fprintf(fp,"%s\n", st3);
        if(s3==4){
            fprintf(fp,"\t%s\n", query);
        }
        fclose(fp);
    }
    if(s1==3){
        printf("Complaint registered successfully\n");
    }
}
