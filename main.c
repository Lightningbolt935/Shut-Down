#include <stdio.h>
#include <stdlib.h>
int main()
{
    char shut;

    printf("Do you want to shut down the computer? (y/n): ");
    scanf(" %c", &shut);
    if (shut == 'y' || shut == 'Y') {
        printf("Shutting down...\n");
        system("C:\\WINDOWS\\System32\\shutdown /s");
    } else {
        printf("Shutdown cancelled.\n");
    }
    
    return 0;
}
