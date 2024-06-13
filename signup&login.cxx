#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char u_name[15],pwd[8],name[15],u[15],p[8],login_p[8],login_u[15];
    printf("Welcome to  my code\n\n");
    //signup
    printf("create your account\n\n");
    printf("Name = ");
    gets(name);
     printf("\nusername = @");
    scanf("%s",&u_name);
    printf("\nPassword : ");
    scanf("%s",&pwd);

   
    //login
    printf("Log In \n");
    printf("username = @");
    scanf("%s",&login_u);
    printf("Password = ");
    scanf("%s",&login_p[j]);
    
    //logic to match password and user name
      if(strcmp(login_u, u_name) == 0 && strcmp(login_p, pwd) == 0)
    //if(login_u[j]==u[j]&&login_p[j]==p[j])
    {
        printf("You are successfully loged in !!");
    }
    else{
        printf("Incorrect username or Password");
    }
        
   
}