#include <stdio.h>
#include <cs50.h>

void trains_time(void);
void ticketing(void);
void distinct(void);
void ac(void);
void vip(void);
void verify(void);
void rerun(void);

// Simple Trains Tickets Booking System by Mohamed Mostafa

int main(void)
{
    int user_choice;

    printf("\t\t\t\t    _        _         _        _     |_| ");
    printf("\n\t\t\t\t __|_|______|_|_______|_|______| |____|_|\n");
    printf("\n\t\t\t\t|_______________________________________|\n");
    printf("\n\t\t\t\t|______________Valar Trains_____________|\n");
    printf("\n                                |         Made by Mohamed Mostafa       |\n");
    printf("\n\t\t\t\t|_______________________________________|\n");
    printf("\t\t\t-----------O---O---O---O---O---O---O---O---O---O-------------\n");
    printf("\n\n(1) Trains Time\n\n(2) Book A Ticket\n\n(3) Exit\n\n");

    do
    {
        user_choice = get_int("[!] Choose: ");
        if(user_choice == 1)
        {
            trains_time();
        }
        else if(user_choice == 2)
        {
            ticketing();
        }
        else if(user_choice == 3)
        {
            printf("\n[X] Valar Trains Program Has Been Terminated.\n\n");
            return 1;
        }
    }while(user_choice < 1 || user_choice > 3);

}

void rerun(void)
{
    char q1;
    do
    {
        q1 = get_char("\n[?] Do You Wish To Book Another Tickets? (Y = Continue / N = Exit): ");
        if(q1 == 'Y' || q1 == 'y')
        {
            ticketing();
        }
        else if(q1 == 'N' || q1 == 'n')
        {
            printf("\n[X] Valar Trains Program Has Been Terminated.\n\n");
        }
    }while(q1 != 'Y' && q1 != 'y' && q1 != 'N' && q1 != 'n');
}

void trains_time(void)
{
    printf("\n----------------------------------------------------------------------------------\n");
    printf("| Train No.\t\tClass\t\tDeparture\t\tArrival\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 1\t\t\tDistinct\t03:00\t\t\t06:45\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 2\t\t\tDistinct\t04:20\t\t\t07:45\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 3\t\t\tDistinct\t05:00\t\t\t09:50\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 4\t\t\tAir Conditioned\t06:00\t\t\t09:30\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 5\t\t\tDistinct\t06:20\t\t\t10:10\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 6\t\t\tV.I.P\t\t08:00\t\t\t10:30 \t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 7\t\t\tAir Conditioned\t08:10\t\t\t11:15\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 8\t\t\tAir Conditioned\t09:00\t\t\t11:50\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 9\t\t\tAir Conditioned\t10:00\t\t\t13:05\t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 10\t\t\tV.I.P\t\t11:15\t\t\t13:55\t\t |\n");
    printf("----------------------------------------------------------------------------------\n\n");
    rerun();
}



void ticketing(void)
{
    int user_choice;
    printf("\n\n---------------------------------------------------\n");
    printf("| [*] Valar Trains Booking Tickets System   \t  |\n");
    printf("---------------------------------------------------\n");
    printf("\n(1) Distinct Trains Tickets\n\n(2) Air Conditioned Trains Tickets\n\n(3) V.I.P Trains Tickets\n\n(4) Verify Tickets Validity\n ");

    do
    {
        user_choice = get_int("\n\n[!] Choose: ");
        if(user_choice == 1)
        {
            distinct();
        }
        else if(user_choice == 2)
        {
            ac();
        }
        else if(user_choice == 3)
        {
            vip();
        }
        else if(user_choice == 4)
        {
            verify();
        }
    }while(user_choice < 1 || user_choice > 4);

}

void distinct(void)
{
    int d_ticket_b;long credit = 258963258963;int ccv = 125;int payment;
    long credit_in;int ccv_in;long phone = 11112223330;int phone_2fa = 123456;long phone_in;int phone_2fa_in;
    int credit_balance = 500;int phone_balance = 500;
    printf("\n---------------------------------------\n");
    printf("| Distinct Trains Ticket Price: 5 L.E |\n");
    printf("---------------------------------------\n");
    printf("\n(1) Book A Ticket \n\n(0) Back To Menu\n\n");

    do
    {
        d_ticket_b = get_int("\n[!] Choose: ");
        printf("\n--------------------------------------------------------------------------------------------\n");

        if(d_ticket_b == 1)
        {
            printf("\n[*] Ticket Payment Center\n\n");
            printf("\n(1) Credit Card.\n\n(2) SIM Balance Payment.\n\n");

            do
            {
                payment = get_int("\nChoose Payment Method: ");
                if(payment == 1)
                {
                    credit_in = get_long("\n[!] Enter Credit Card Number: ");
                    ccv_in = get_int("\n[!] Enter Credit Card CCV Number: ");
                    if(credit_in == credit && ccv_in == ccv && credit_balance >= 5)
                    {
                        credit_balance = credit_balance - 5;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket.. Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 11112222, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Credit Card Balance: %i%s",credit_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n\n");

                    }
                    else if(credit_in != credit || ccv_in != ccv || credit_balance < 5)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Credit Card Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");
                    }
                }
                else if(payment == 2)
                {
                    phone_in = get_long("\n[!] Enter Phone Number: ");
                    phone_2fa_in = get_int("\n[!] Enter Payment 2FA Verfication Code: ");
                    if(phone_in == phone && phone_2fa_in == phone_2fa && phone_balance >= 5)
                    {
                        phone_balance = phone_balance - 5;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket, Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 11112222, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Phone SIM Balance: %i%s",phone_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n");

                    }
                    else if(phone_in != phone || phone_2fa_in != phone_2fa || phone_balance < 5)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Phone SIM Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");

                    }
                }
            }while(payment < 1 || payment > 2);
        }
        else if(d_ticket_b == 0)
        {
            ticketing();
        }
        rerun();
    }while(d_ticket_b < 0 || d_ticket_b > 1);
}

void ac(void)
{
    int ac_ticket_b;long credit = 258963258963;int ccv = 125;int payment;
    long credit_in;int ccv_in;long phone = 11112223330;int phone_2fa = 123456;long phone_in;int phone_2fa_in;
    int credit_balance = 500;int phone_balance = 500;
    printf("\n-----------------------------------------------\n");
    printf("| Air Conditioned Trains Ticket Price: 25 L.E |\n");
    printf("-----------------------------------------------\n");
    printf("\n(1) Book A Ticket \n\n(0) Back To Menu\n\n");

    do
    {
        ac_ticket_b = get_int("\n[!] Choose: ");
        printf("\n--------------------------------------------------------------------------------------------\n");

        if(ac_ticket_b == 1)
        {
            printf("\n[*] Ticket Payment Center\n\n");
            printf("\n(1) Credit Card.\n\n(2) SIM Balance Payment.\n\n");

            do
            {
                payment = get_int("\nChoose Payment Method: ");
                if(payment == 1)
                {
                    credit_in = get_long("\n[!] Enter Credit Card Number: ");
                    ccv_in = get_int("\n[!] Enter Credit Card CCV Number: ");
                    if(credit_in == credit && ccv_in == ccv && credit_balance >= 25)
                    {
                        credit_balance = credit_balance - 25;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket.. Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 22223333, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Credit Card Balance: %i%s",credit_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n\n");

                    }
                    else if(credit_in != credit || ccv_in != ccv || credit_balance < 25)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Credit Card Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");
                    }
                }
                else if(payment == 2)
                {
                    phone_in = get_long("\n[!] Enter Phone Number: ");
                    phone_2fa_in = get_int("\n[!] Enter Payment 2FA Verfication Code: ");
                    if(phone_in == phone && phone_2fa_in == phone_2fa && phone_balance >= 25)
                    {
                        phone_balance = phone_balance - 25;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket, Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 22223333, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Phone SIM Balance: %i%s",phone_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n");

                    }
                    else if(phone_in != phone || phone_2fa_in != phone_2fa || phone_balance < 25)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Phone SIM Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");
                    }
                }
            }while(payment < 1 || payment > 2);
        }
        else if(ac_ticket_b == 0)
        {
            ticketing();
        }
        rerun();
    }while(ac_ticket_b < 0 || ac_ticket_b > 1);
}

void vip(void)
{
    int vip_ticket_b;long credit = 258963258963;int ccv = 125;int payment;
    long credit_in;int ccv_in;long phone = 11112223330;int phone_2fa = 123456;long phone_in;int phone_2fa_in;
    int credit_balance = 500;int phone_balance = 500;
    printf("\n-------------------------------------------\n");
    printf("| V.I.P Trains Ticket Price: 50 L.E \t  |\n");
    printf("-------------------------------------------\n");
    printf("\n(1) Book A Ticket \n\n(0) Back To Menu\n\n");

    do
    {
        vip_ticket_b = get_int("\n[!] Choose: ");
        printf("\n--------------------------------------------------------------------------------------------\n");

        if(vip_ticket_b == 1)
        {
            printf("\n[*] Ticket Payment Center\n\n");
            printf("\n(1) Credit Card.\n\n(2) SIM Balance Payment.\n\n");

            do
            {
                payment = get_int("\nChoose Payment Method: ");
                if(payment == 1)
                {
                    credit_in = get_long("\n[!] Enter Credit Card Number: ");
                    ccv_in = get_int("\n[!] Enter Credit Card CCV Number: ");
                    if(credit_in == credit && ccv_in == ccv && credit_balance >= 50)
                    {
                        credit_balance = credit_balance - 50;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket.. Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 44445555, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Credit Card Balance: %i%s",credit_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n\n");

                    }
                    else if(credit_in != credit || ccv_in != ccv || credit_balance < 50)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Credit Card Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");
                    }
                }
                else if(payment == 2)
                {
                    phone_in = get_long("\n[!] Enter Phone Number: ");
                    phone_2fa_in = get_int("\n[!] Enter Payment 2FA Verfication Code: ");
                    if(phone_in == phone && phone_2fa_in == phone_2fa && phone_balance >= 50)
                    {
                        phone_balance = phone_balance - 50;
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("[*] Ticket Booked Successfully, Printing Ticket, Hang Tight It's Coming Out In a Sec.\n");
                        printf("\n[*] Your Ticket Serial Number Is 44445555, Valid Until 22/9/2022\n");
                        printf("\n[$] Your Phone SIM Balance: %i%s",phone_balance," L.E");
                        printf("\n--------------------------------------------------------------------------------------------\n");

                    }
                    else if(phone_in != phone || phone_2fa_in != phone_2fa || phone_balance < 50)
                    {
                        printf("\n--------------------------------------------------------------------------------------------\n");
                        printf("| [X] Ticket Booking Failed, Check Your Phone SIM Balance Or Information.\t\t   |\n");
                        printf("--------------------------------------------------------------------------------------------\n\n");
                    }
                }
            }while(payment < 1 || payment > 2);
        }
        else if(vip_ticket_b == 0)
        {
            ticketing();
        }
        rerun();
    }while(vip_ticket_b < 0 || vip_ticket_b > 1);
}

void verify(void)
{
    int serial1 = 11112222;int serial2 = 22223333;int serial3 = 44445555;int check;
    do
    {
        check = get_int("\n[!] Enter Ticket Serial Number: ");
        if(check == serial1 || check == serial2 || check == serial3 )
        {
            printf("\n[*] Valid Ticket.\n\n");
        }
        else
        {
            printf("\n[X] Invalid Ticket.\n\n");
        }
    }while(check != serial1 && check != serial2 && check != serial3);
    rerun();
}


