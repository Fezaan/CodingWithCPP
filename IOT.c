#include <reg51.h>

sbit sen1 = P1 ^ 0; // sensor for entry
sbit sen2 = P1 ^ 1; // sensor for exit
sbit rs = P1 ^ 2;
sbit rw = P1 ^ 3;
sbit en = P1 ^ 4;

void lcdCmd(unsigned char);                         // passing the argument from main program
void lcdData(unsigned char);                        // function to pass data
void delay();                                       // function to induce delay
void lcdDisplay(unsigned char *s, unsigned char r); // function to display data on LCD screen
void lcdConversion(unsigned char);                  // conversion function

void main()
{
    unsigned char x, y; // variables for entry and exit count
    lcdCmd(0x38);       // commands to the display
    delay();
    lcdCmd(0x01);
    delay();
    lcdCmd(0x10);
    delay();
    lcdCmd(0x0c);
    delay();
    lcdDisplay("WELCOME", 7);
    lcdCmd(0xc0);
    delay();
    lcdDisplay("OBJECT COUNTER", 14);
    delay();
    lcdCmd(0x01);
    delay();
    while (1) // maintaining an infinite loop
    {
        if (sen1 == 0)
        {
            lcdCmd(0x80);
            delay();
            lcdDisplay("ENTRY:", 6);
            lcdCmd(0x87);
            delay();
            x++;
            lcdConversion(x);
        }
        if (sen2 == 0)
        {
            lcdCmd(0xc0); // move the cursor to second line
            lcdDisplay("EXIT:", 5);
            lcdCmd(0xc6);
            delay();
            y++;
            lcdConversion(y);
            delay();
        }
    }

    void lcdCmd(unsigned char val)
    {
        P2 = val;
        rs = 0;
        rw = 0;
        en = 1;
        delay();
        en = 0;
    }

    void lcdData(unsigned char data)
    {
        P2 = data;
        rs = 1;
        rw = 0;
        en = 1;
        delay();
        en = 0;
    }

    void lcdDisplay(unsigned char *s, unsigned char r)
    {
        unsigned char w;
        for (w = 0; w < r; w++)
        {
            lcdData(s[w]); // read characters of string one by one
            delay();
        }
    }

    void lcdConversion(unsigned char num)
    { // function to convert data into decimal form
        // so that the user can understand
        unsigned char p, n;
        p = num / 10;
        n = num % 10;
        p = p + 0x30; // doing ascii conversion
        n = n + 0x30;
        lcdData(p);
        lcdData(n);
    }

    void delay()
    {
        unsigned int k, l;
        for (k = 0; k < 1000; k++)
            ;
        for (l = 0; l < 100; l++)
            ;
    }
}