/*


users - view users
catalogue
issuance
serial
acquisition
Navigation menu

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
int main()
{
    int action;
    action=menu();
    execute_action(action);

        return 0;
}
void execute_action(int action) {
printf("you selected action %d",action);
}

int menu() //header/prototype
{
    int action;
    do {

        printf("\tCOUNTY LIBRARY\n");
        printf("welcome Mr. Musili\n");
        printf("what would you like to do?\n");
        printf("1. View Users\n");
        printf("2. Add New user\n");
        printf("3. Edit User\n");
        printf("4. Delete User\n");
        printf("5. Change Password\n");
        printf("6.Log Out\n");
        printf("7.Exit system\n");
        printf("selected action: ");
        scanf("%d" ,&action);
        if (action < 1 || action > 7) {
            sytem("cls");
            printf("Invalid action!!! Try again.\n");
        }
        }  while( action < 1 || action > 7);
        return action;
}

