#include <stdio.h>
int main()
{
    int ch;
     int ch2;
    printf("1)Play\n2)Settings\n3)About\n4)Exit\nEnter Your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Game is started....");
        break;
    case 2:
        printf("Settings are Opened....\n");
       
        printf("1)Keyboard\n2)MOuse\n3)Display\n4)Audio\nEnter Your Choice:");
        scanf("%d", &ch2);
        switch(ch2){
            case 1:
            printf("Keyboard Settings are Opened");
            break;
            case 2:
            printf("Mouse Settings are Opened");
            break;
            case 3:
            printf("Display Settings are Opened");
            break;
            case 4:
            printf("Audio Settings are Opened");
            break;
              default:
            printf("Invalid Choice...");

        }
        break;

    case 3:
        printf("About PAge is Opened....");
        break;

    case 4:
        printf("Game is Exiting....");
        break;

    default:
        printf("Invalid Choice...");
      
    }
}