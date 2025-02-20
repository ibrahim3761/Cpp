#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
void red ()
{
    printf("\033[1;31m");
}
void redu ()
{
    printf("\033[1;91m");
}
void cyan ()
{
    printf("\033[1;36m");
}
void magenta ()
{
    printf("\033[1;35m");
}
void green ()
{
    printf("\033[1;32m");
}
void yollow ()
{
    printf("\033[1;33m");
}
void blue()
{
    printf("\033[1;34m");
}
void reset ()
{
    printf("\033[0m");
}
void check_by_name(char name[])
{
    int il,jl,k,l,flag=0,cprt,pcounter=0,ig,lr;
    char Details[100],details[100];
    FILE *fclient,*ftimer;
    ftimer=fopen("billno.txt","r");
    fscanf(ftimer,"%d",&il);
    fclose(ftimer);
    fclient=fopen("customerdetails.txt","r");
    for(jl=1; jl<=il; jl++)
    {
        fscanf(fclient,"%[^\n]%*c",Details);
        strcpy(details,Details);
        for(k=2;; k++)
        {
            if(details[k]=='-' && details[k+1]=='-')
                break;
        }
        char cmpr[k];
        if(jl<10)
        {
            for(lr=0; lr<k-2; lr++)
            {
                cmpr[lr]=details[lr+2];
            }
        }
        else if(jl<100)
        {
            for(lr=0; lr<k-3; l++)
                cmpr[lr]=details[lr+3];
        }
        else if(jl<1000)
        {
            for(lr=0; lr<k-4; lr++)
                cmpr[lr]=details[lr+4];
        }
        if(strcmp(cmpr,name)==0)
        {
            green();
            printf("Bill no      ->");
            for(cprt=0;; cprt++)
            {
                if(details[cprt]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Name         ->");
            for(cprt=cprt+1;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Date         ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Time         ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Bill Paid    ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='\0')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
                pcounter++;
            }
            printf("TK \n\n");
            reset();
            flag=1;
            //break;
        }
    }
    fclose(fclient);
    if(flag==0)
    {
        redu();
        printf("Name Not Exist\n");
        reset();
    }
}
void reset_menu()
{
    {
        FILE *fout,*fprice;
        int Item_number,q,item_price[50];
        char item_name[100];
        printf("How Many foods you want to add?\n");
        fout=fopen("itemnumber.txt","w");
        scanf("%d",&Item_number);
        fprintf(fout,"%d\n",Item_number);
        fclose(fout);
        fout=fopen("data-input-maneger.txt","w");
        fprice=fopen("itemprice.txt","w");
        for(q=1; q<=Item_number; q++)
        {
            printf("%d : ",q);
            fflush(stdin);
            gets(item_name);
            fprintf(fout,"%s\n",item_name);
            cyan();
            printf("Price : ");
            scanf("%d",&item_price[q]);
            fprintf(fprice,"%d\n",item_price[q]);
            reset();
            if(q==Item_number)
            {
                break;
            }
        }
        fclose(fout);
        fclose(fprice);
    }
}
void  wrong(int x)
{
    red();
    printf("%d Not exist in list\n",x);
    reset();
}
void edit_item(int X)
{
    int x=X;
    FILE *fout,*fin,*fpricein,*fprice;
    int Item_number,q,item_price[50];
    char item_name[100];
    fout=fopen("itemnumber.txt","r");
    fscanf(fout,"%d\n",&Item_number);
    fclose(fout);
    if(x==0 || x>Item_number)
    {
        wrong(x);
    }
    fout=fopen("data-input-maneger.txt","r");
    fin=fopen("temporary-data.txt","w");
    fprice=fopen("itemprice.txt","r");
    fpricein=fopen("temporary-price.txt","w");
    for(q=1; q<=Item_number; q++)
    {
        if(q==x)
        {
            fscanf(fout,"%[^\n]%*c",item_name);
            fscanf(fprice,"%d\n",&item_price[q]);
            printf("%d : ",q);
            fflush(stdin);
            gets(item_name);
            fprintf(fin,"%s\n",item_name);
            cyan();
            printf("Price : ");
            scanf("%d",&item_price[q]);
            fprintf(fpricein,"%d\n",item_price[q]);
            reset();
        }
        else
        {
            fscanf(fout,"%[^\n]%*c",item_name);
            fprintf(fin,"%s\n",item_name);
            fscanf(fprice,"%d\n",&item_price[q]);
            fprintf(fpricein,"%d\n",item_price[q]);
        }
        if(q==Item_number)
        {
            break;
        }
    }
    fclose(fout);
    fclose(fin);
    fclose(fprice);
    fclose(fpricein);
    fout=fopen("data-input-maneger.txt","w");
    fin=fopen("temporary-data.txt","r");
    fprice=fopen("itemprice.txt","w");
    fpricein=fopen("temporary-price.txt","r");
    for(q=1; q<=Item_number; q++)
    {
        fscanf(fin,"%[^\n]%*c",item_name);
        fprintf(fout,"%s\n",item_name);
        fscanf(fpricein,"%d\n",&item_price[q]);
        fprintf(fprice,"%d\n",item_price[q]);
    }
    fclose(fout);
    fclose(fin);
    fclose(fprice);
    fclose(fpricein);
}
void edit_menu()
{
    FILE *fin,*finer,*fprice;
    int Item_number,q,slent,i,item_price[100];
    char item_name[50];
    char Item_name[50][50];
    fin=fopen("itemnumber.txt","r");
    fscanf(fin,"%d",&Item_number);
    printf("We have %d item now.\n\n",Item_number);
    printf("\tHere's the menu\n\n",Item_number);
    fclose(fin);
    finer=fopen("data-input-maneger.txt","r");
    fprice=fopen("itemprice.txt","r");
    for(q=1; q<=Item_number; q++)
    {
        cyan();
        printf("\t%d:=>  ",q);
        fscanf(finer,"%[^\n]%*c",item_name);
        printf("%s \t",item_name);
        slent=strlen(item_name);
        for(i=0; i<=slent; i++)
        {
            Item_name[q][i]=item_name[i];
        }
        printf("\tPrice : ");
        fscanf(fprice,"%d",&item_price[q]);
        printf("%d Tk\n",item_price[q]);
        reset();
    }
    fclose(finer);
    fclose(fprice);
    printf("Which Item you Want Edit=");
    int edit_number;
    scanf("%d",&edit_number);
    edit_item(edit_number);
}
void check_by_number(char Number[])
{
    int il,jl,k,l,flag=0,cprt,pcounter=0,ig,lr;
    char Details[100],details[100];
    FILE *fclient,*ftimer;
    ftimer=fopen("billno.txt","r");
    fscanf(ftimer,"%d",&il);
    fclose(ftimer);
    fclient=fopen("customerdetails.txt","r");
    for(jl=1; jl<=il; jl++)
    {
        fscanf(fclient,"%[^\n]%*c",Details);
        strcpy(details,Details);
        for(k=0;; k++)
        {
            if(details[k]=='-')
                break;
        }
        printf("\a");
        char cmpr[k];
        if(jl<10)
        {
            for(lr=0; lr<k; lr++)
            {
                cmpr[lr]=details[lr];
            }
        }
        else if(jl<100)
        {
            for(lr=0; lr<3; l++)
                cmpr[lr]=details[lr];
        }
        else if(jl<1000)
        {
            for(lr=0; lr<4; lr++)
                cmpr[lr]=details[lr];
        }
        if(strcmp(cmpr,Number)==0)
        {
            green();
            printf("Bill no      ->");
            for(cprt=0;; cprt++)
            {
                if(details[cprt]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Name         ->");
            for(cprt=cprt+1;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Date         ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Time         ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='-' && details[cprt+1]=='-')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
            }
            printf("\n");
            printf("Bill Paid    ->");
            for(cprt=cprt+2;; cprt++)
            {
                if(details[cprt]=='\0')
                {
                    break;
                }
                else
                {
                    printf("%c",details[cprt]);
                }
                pcounter++;
            }
            printf("TK \n");
            reset();
            flag=1;
            break;
        }
    }
    fclose(fclient);
    if(flag==0)
    {
        red();
        printf("Name Not Exist\n");
        reset();
    }
}
int Billno()
{
    int billno;
    FILE *Fayan;
    Fayan=fopen("billno.txt","r");
    fscanf(Fayan,"%d",&billno);
    fclose(Fayan);
    return billno;
}
void History()
{
    char S[20],details[100];
    int I,i,j,J,p=0;
    char Details[100][100];
    FILE *Fclear;
    printf("Please Put The Date(dd--mm--yyyy)\n");
    scanf("%s",&S);
    Fclear=fopen("billno.txt","r");
    fscanf(Fclear,"%d",&I);
    fclose(Fclear);
    Fclear=fopen("Daytk.txt","r");
    for(i=0; i<=I; i++)
    {
        fscanf(Fclear,"%s",Details[i]);
        J=strlen(Details[i]);
        for(j=0; j<12; j++)
        {
            details[j]=Details[i][j];
        }
        details[12]='\0';
        if(strcmp(details,S)==0)
        {
            printf("%s TK\n",Details[i]);
            p=1;
        }
    }
    if(p==0)
    {
        printf("Date Not found\n");
    }
    fclose(Fclear);
}
void Time_call()
{
    char time_stR[20];
    int i,j,flag=0;
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    j=11;
    for(i=0; i<9; i++)
    {
        time_stR[i]=time_str[j];
        j=j+1;
    }
    for(i=0; i<9; i++)
    {
        if(time_stR[i]=='1' && time_str[i+1]=='2')
        {
            time_stR[i]='0';
            time_stR[i+1]='0';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='3')
        {
            time_stR[i]='0';
            time_stR[i+1]='1';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='4')
        {
            time_stR[i]='0';
            time_stR[i+1]='2';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='5')
        {
            time_stR[i]='0';
            time_stR[i+1]='3';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='6')
        {
            time_stR[i]='0';
            time_stR[i+1]='4';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='7')
        {
            time_stR[i]='0';
            time_stR[i+1]='5';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='8')
        {
            time_stR[i]='0';
            time_stR[i+1]='6';
            flag=1;
        }
        else if(time_stR[i]=='1' && time_str[i+1]=='9')
        {
            time_stR[i]='0';
            time_stR[i+1]='7';
            flag=1;
        }
        else if(time_stR[i]=='2' && time_str[i+1]=='0')
        {
            time_stR[i]='0';
            time_stR[i+1]='8';
            flag=1;
        }
        else if(time_stR[i]=='2' && time_str[i+1]=='1')
        {
            time_stR[i]='0';
            time_stR[i+1]='9';
            flag=1;
        }
        else if(time_stR[i]=='2' && time_str[i+1]=='2')
        {
            time_stR[i]='1';
            time_stR[i+1]='0';
            flag=1;
        }
        else if(time_stR[i]=='2' && time_str[i+1]=='3')
        {
            time_stR[i]='1';
            time_stR[i+1]='1';
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    time_stR[8]='\0';
    printf("Bill Time :  %s ", time_stR);
    if(flag==1)
    {
        printf("PM\n");
    }
    else if(flag==0)
    {
        printf("AM\n");
    }
}
char Time_call_client()
{
    char time_stR[20];
    int i,j;
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    j=11;
    for(i=0; i<9; i++)
    {
        time_stR[i]=time_str[j];
        j=j+1;
    }
    time_stR[8]='\0';
    FILE *fclient;
    fclient=fopen("customerdetails.txt","a");
    fprintf(fclient,"%s--",time_stR);
    fclose(fclient);
}
void Some(int bill)
{
    char time_stR[20];
    int i,j,previos,previos_bill_no;
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    j=11;
    for(i=0; i<9; i++)
    {
        time_stR[i]=time_str[j];
        j=j+1;
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    time_stR[8]='\0';
    FILE *fDAY_TIK;
    fDAY_TIK=fopen("Daytk.txt","a");
    fprintf(fDAY_TIK,"%02d--",tm.tm_mday);
    fprintf(fDAY_TIK,"%02d--",tm.tm_mon + 1);
    fprintf(fDAY_TIK,"%02d--",tm.tm_year + 1900);
    fprintf(fDAY_TIK,"%s--",time_stR);
    fprintf(fDAY_TIK,"%d\n",bill);
    fclose(fDAY_TIK);
    fDAY_TIK=fopen("Total.txt","r");
    fscanf(fDAY_TIK,"%d",&previos);
    fclose(fDAY_TIK);
    fDAY_TIK=fopen("Total.txt","w");
    fprintf(fDAY_TIK,"%d\n",bill+previos);
    fclose(fDAY_TIK);
    fDAY_TIK=fopen("billno.txt","r");
    fscanf(fDAY_TIK,"%d",&previos_bill_no);
    fclose(fDAY_TIK);
    fDAY_TIK=fopen("billno.txt","w");
    fprintf(fDAY_TIK,"%d\n",previos_bill_no+1);
    fclose(fDAY_TIK);
}
void add_in_menu()
{
    {
        FILE *fout,*fprice;
        int Item_number,q,item_price[50],X;
        char item_name[100];
        printf("How Many foods you want to add?\n");
        fout=fopen("itemnumber.txt","r");
        fscanf(fout,"%d\n",&X);
        fclose(fout);
        fout=fopen("itemnumber.txt","w");
        scanf("%d",&Item_number);
        fprintf(fout,"%d\n",Item_number+X);
        fclose(fout);
        fout=fopen("data-input-maneger.txt","a");
        fprice=fopen("itemprice.txt","a");
        for(q=X+1; q<=Item_number+X; q++)
        {
            printf("%d : ",q);
            fflush(stdin);
            gets(item_name);
            fprintf(fout,"%s\n",item_name);
            cyan();
            printf("Price : ");
            scanf("%d",&item_price[q]);
            fprintf(fprice,"%d\n",item_price[q]);
            reset();
            if(q==Item_number)
            {
                break;
            }
        }
        fclose(fout);
        fclose(fprice);
    }
}
int main()
{
    int log_in,i,Passcode,p=0,maneger_choice,Item_number,q,password,u=0;
    int cchoice,bill=0,Time,w=0,tt,slent,previos,pxz;
    char item_name[100];
    char Item_name[100][50];
    int Odered_Item[100];
    int Quantity[100];
    char Customer_name[25],Date[12];
    int item_price[100];
    FILE *fin,*fout,*finer,*fpass,*fprice,*fdate,*fDAY_tiK;
    yollow();
    printf("\t\tHello Sir!\t\n\tWelcome To *** Canteen\n\n");
    reset();
    printf("What Do You Want to Do?\n\n");
    for(i=1;; i++)
    {
        magenta();
        printf("1.Manager log in\n2.Customer log in\n");
        reset();
        scanf("%d",&log_in);
        if(log_in==1)
        {
            printf("Please Provide The Passcode :");
            scanf("%d",&Passcode);
            fpass=fopen("password.txt","r");
            fscanf(fpass,"%d",&password);
            fclose(fpass);
            if(Passcode==password)
            {
                p=1;
                break;
            }
            else
            {
                red();
                printf("Wrong Code,Try again\n");
                reset();
            }
        }
        else if(log_in==2)
        {
            p=2;
            break;
        }
        else
        {
            printf("Please choice the corect one\n");
        }
    }
    if(p==1)
    {
        for(pxz=0;; pxz++)
        {
            printf("1.Menu Setting\n2.Change Password\n3.Check By search\n4.Check Date History\n");
            scanf("%d",&maneger_choice);
            if(maneger_choice==1)
            {
maneger_choice_1 :
                {
                    int xzy;
                    printf("1.Edit Menu\n2.Add in Menu\n3.Reset Menu\n");
                    scanf("%d",&xzy);
                    if(xzy==1)
                    {
                        edit_menu();
                    }
                    else if(xzy==2)
                    {
                        add_in_menu();
                    }
                    else if(xzy==3)
                    {
                        reset_menu();
                    }
                    else
                    {
                        red();
                        printf("Select correct\n");
                        reset();
                        goto maneger_choice_1;
                    }
                    break;
                }
            }
            else if(maneger_choice==2)
            {
                printf("Please Provide The previous Passcode : ");
                scanf("%d",&Passcode);
                fpass=fopen("password.txt","r");
                fscanf(fpass,"%d",&password);
                fclose(fpass);
                if(Passcode==password)
                {
                    printf("Set New passcode: ");
                    scanf("%d",&password);
                    fpass=fopen("password.txt","w");
                    fprintf(fpass,"%d",password);
                    fclose(fpass);
                    green();
                    printf("passcode changed!\nThank You.\n");
                    reset();
                }
                else
                {
                    red();
                    printf("You Can not change Password Due to providing Wrong password Thank You.\n");
                    reset();
                }
                break;
            }
            else if(maneger_choice==3)
            {
                magenta();
                printf("1.By Customer Name\n2.By Transection  Number\n");
                reset();
                while(1)
                {
                    int bid;
                    char name[50];
                    char Number[10];
                    scanf("%d",&bid);
                    if(bid==1)
                    {
                        red();
                        printf("Give Name with correct spelling =>");
                        reset();
                        fflush(stdin);
                        gets(name);
                        check_by_name(name);
                        break;
                    }
                    else if(bid==2)
                    {
                        red();
                        printf("Give Number =>");
                        reset();
                        fflush(stdin);
                        gets(Number);
                        check_by_number(Number);
                        break;
                    }
                    else
                    {
                        red();
                        printf("Please Select Coreect\n");
                        reset();
                    }
                }
                break;
            }
            else if(maneger_choice==4)
            {
                History();
                break;
            }
            else
            {
                redu();
                printf("Please choice the corect one\n");
                reset();
            }
        }
    }
    if(p==2)
    {
        printf("What's Your Name Sir!\n");
        fflush(stdin);
        gets(Customer_name);
        fin=fopen("itemnumber.txt","r");
        fscanf(fin,"%d",&Item_number);
        printf("We have %d item now.\n\n",Item_number);
        printf("\tHere's the menu\n\n",Item_number);
        fclose(fin);
        finer=fopen("data-input-maneger.txt","r");
        fprice=fopen("itemprice.txt","r");
        for(q=1; q<=Item_number; q++)
        {
            cyan();
            printf("\t%d:=>  ",q);
            fscanf(finer,"%[^\n]%*c",item_name);
            printf("%s \t",item_name);
            slent=strlen(item_name);
            for(i=0; i<=slent; i++)
            {
                Item_name[q][i]=item_name[i];
            }
            printf("\tPrice : ");
            fscanf(fprice,"%d",&item_price[q]);
            printf("%d Tk\n",item_price[q]);
            reset();
        }
        fclose(finer);
        fclose(fprice);
        printf("\nWhat would you like to order?\n");
        scanf("%d",&cchoice);
        int item_price[Item_number];
        fprice=fopen("itemprice.txt","r");
        for(i=0; i<Item_number; i++)
        {
            fscanf(fprice,"%d",&item_price[i]);
        }
        fclose(fprice);
        int abgf=0;
        for(i=1;; i++)
        {
            if(cchoice<=Item_number && cchoice!=0)
            {
                printf("How much?\n");
                scanf("%d",&Quantity[abgf]);
                abgf=abgf+1;
                bill=bill+(item_price[cchoice-1]*Quantity[abgf-1]);
                printf("Give Us Some Times,Thanks For Order.\n");
                printf("Anything else sir!\nIf No,");
                red();
                printf("press %d to see bill.\n",Item_number+1);
                reset();
                Odered_Item[w]=cchoice;
                w++;
                scanf("%d",&cchoice);
                if(cchoice==(Item_number+1))
                {
                    break;
                }
            }
            else
            {
                blue();
                printf("Sir,Please Select the corect one.\n");
                reset();
                scanf("%d",&cchoice);
                if(cchoice==(Item_number+1))
                {
                    break;
                }
            }
        }
        fdate=fopen("Date.txt","r");
        fscanf(fdate,"%[^\n]%*c",Date);
        fclose(fdate);
        redu();
        printf("\n\n\n");
        for(i=0; i<90; i++)
        {
            printf("-");
        }
        printf("\n");
        printf("------------------------------------------------------------------------------------------\n");
        cyan();
        printf("*** Canteen                                                      ");
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("Date      :  %02d--%02d--%d",tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900);
        printf("\n");
        printf("                                                                 ");
        Time_call();
        printf("\n");
        yollow();
        printf("Transactor No: %d\n",Billno()+1);
        printf("Customer Name: %s\n",Customer_name);
        printf("Odered Item  : %d\n\n",w);
        reset();
        blue();
        printf("SL    Item Name                    Quantity                    Price\t\tTotal\n\n");
        reset();
        blue();
        for(i=0; i<w; i++)
        {
            tt=Odered_Item[i];
            printf("%d :",i+1);
            for(int qwe=4; qwe<7; qwe++)
            {
                printf(" ");
            }
            printf("%s",Item_name[tt]);
            int Disign=strlen(Item_name[tt]);
            for(int qwe=Disign; qwe<29; qwe++)
            {
                printf(" ");
            }
            printf("%d",Quantity[i]);
            for(int qwe=1; qwe<28; qwe++)
            {
                printf(" ");
            }
            printf("%d TK\t\t",item_price[tt-1]);
            printf("%d TK\n",item_price[tt-1]*Quantity[i]);
        }
        reset();
        cyan();
        printf("\n\t\t\t\t\t\t   Your Total Payable Amount is %d Tk.\n\n",bill);
        reset();
        green();
        printf("                                Thanks for visiting us.                                   \n");
        redu();
        printf("------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------\n\n\n");
        reset();
        Some(bill);
        FILE *fclient;
        fclient=fopen("customerdetails.txt","a");
        fprintf(fclient,"%d-",Billno());
        fprintf(fclient,"%s--",Customer_name);
        fprintf(fclient,"%02d-%02d-%d--",tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900);
        fclose(fclient);
        Time_call_client();
        fclient=fopen("customerdetails.txt","a");
        fprintf(fclient,"%d\n",bill);
        fclose(fclient);

    }

}
