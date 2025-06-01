#include <stdio.h>
#include <stdlib.h>
int main()
{
    char shut;

    printf("Do you want to shut down the computer? (y/n): ");
    scanf(" %c", &shut);
    if (shut == 'y' || shut == 'Y') {
        printf("Shutting down...\n");
        system("C:\\WINDOWS\\System32\\shutdown /s"); /*to shut down your PC instantly use system("C:\\WINDOWS\\System32\\shutdown /s /t 0"); 
        and to set the timer to lets say 60 seconds use system("C:\\WINDOWS\\System32\\shutdown /s /t 60");*/
    } else {
        printf("Shutdown cancelled.\n");
    }
    
    return 0;
}
