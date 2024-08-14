// MADE IN VSCode by Marienutiu Marian Ilie on 14.08.2024

#include<stdio.h>
#include<string.h>

int nr; 

void text1(){
printf("\n"); 
printf("-/-/Vending machine/-/-");
printf("\n");
printf("\n List Of Goods:");
printf("\n");
printf("\n      1. Coca-Cola - 5$");
printf("\n      2. Sprite    - 3$");
printf("\n      3. Fuze Tea  - 4$");
printf("\n      4. Mint Tea  - 2$");
printf("\n");
}

void select(){
printf("\n Select a product: ");
scanf("%d",&nr);
if(nr<1 || nr>4)
{printf("\n Error, please try a valid number. (1-4) \n");
select();}
}

void choice(){
    char ch[6];
    char confirm1[6]="5";
    char confirm2[6]="3";
    char confirm3[6]="4";
    char confirm4[6]="2";
    char canc[7]="CANCEL";

    if (nr==1)
{
    printf("\n You chose Coca-Cola, please enter the correct ammount (5) or if you changed your mind type CANCEL.");
    printf("\n Input: ");
    scanf("%s",ch);

    int re= strcmp(confirm1, ch);
    int re2= strcmp(canc, ch);
        if(re==0)
        {
            printf("\n Thank you for the purchase. Have a nice day!");
        }
        else
        {
            if(re2==0)
            {
                main();
            }
            else
            {
                printf("\n Not a valid choice, please either enter the correct ammount (5) or type CANCEL.\n");
                choice();
            }
        }
}
    if(nr==2)
{
    printf("\n You chose Sprite, please enter the correct ammount (3) or if you changed your mind type CANCEL.");
    printf("\n Input: ");
    scanf("%s",ch);

    int re= strcmp(confirm2, ch);
    int re2= strcmp(canc, ch);
        if(re==0)
        {
            printf("\n Thank you for the purchase. Have a nice day!");
        }
        else
        {
            if(re2==0)
            {
                main();
            }
            else
            {
                printf("\n Not a valid choice, please either enter the correct ammount (3) or type CANCEL.\n");
                choice();
            }
        }
}

if(nr==3)
{
    printf("\n You chose Fuze Tea, please enter the correct ammount (4) or if you changed your mind type CANCEL.");
    printf("\n Input: ");
    scanf("%s",ch);

    int re= strcmp(confirm3, ch);
    int re2= strcmp(canc, ch);
        if(re==0)
        {
            printf("\n Thank you for the purchase. Have a nice day!");
        }
        else
        {
            if(re2==0)
            {
                main();
            }
            else
            {
                printf("\n Not a valid choice, please either enter the correct ammount (4) or type CANCEL.\n");
                choice();
            }
        }
}

if(nr==4)
{
    printf("\n You chose Mint Tea, please enter the correct ammount (2) or if you changed your mind type CANCEL.");
    printf("\n Input: ");
    scanf("%s",ch);

    int re= strcmp(confirm4, ch);
    int re2= strcmp(canc, ch);
        if(re==0)
        {
            printf("\n Thank you for the purchase. Have a nice day!");
        }
        else
        {
            if(re2==0)
            {
                main();
            }
            else
            {
                printf("\n Not a valid choice, please either enter the correct ammount (2) or type CANCEL.\n");
                choice();
            }
        }
}
}


int main(){
text1();
select();
choice();
return 0;
}