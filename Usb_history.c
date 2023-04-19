#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main() {
    printf("The given is history of attached pendrives to this system");
    system("powershell.exe -Command \"Get-ItemProperty -Path HKLM:\\SYSTEM\\CurrentControlSet\\Enum\\USBSTOR\\*\\* | Select FriendlyName\"");
    getch();
}

