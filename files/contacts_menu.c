#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define FILENAME  "contacts.dat"

struct contact {
   char name[30];
   char email[50];
   char mobile[11];
};

void add_contact(FILE*);
void list_contacts(FILE*);
void search_contacts(FILE*);
void update_contact(FILE*);


void main()
{
int opt;
FILE  * fp;

    // Open file in r+b mode to read and write
    fp = fopen(FILENAME,"r+b");
    if (fp==NULL)
    {
       // if file is not found then create it
       fp = fopen(FILENAME,"w+b");
       if (fp == NULL)
       {
          printf("Sorry! File %s could not be created or opened!",FILENAME);
          exit(0);
       }
    }

    while(1)
    {
        printf("\n***** MENU ******\n");
        printf("1. Add Contact\n");
        printf("2. List Contacts\n");
        printf("3. Search Contacts\n");
        printf("4. Update Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice [1-5] :");
        scanf("%d",&opt);

        switch(opt)
        {
           case 1: add_contact(fp); break;
           case 2: list_contacts(fp); break;
           case 3: search_contacts(fp); break;
           case 4: update_contact(fp); break;
           case 5: fclose(fp); // close file
                   exit(0);   // terminate program
        } // switch
    } // while

} // main()


void add_contact(FILE * fp)
{
    struct contact c;

       fflush(stdin); // clear keyboard buffer
       printf("Enter name   : ");
       gets(c.name);
       printf("Enter email  : ");
       gets(c.email);
       printf("Enter mobile : ");
       gets(c.mobile);
       // go to end of the file
       fseek(fp,0,SEEK_END);
       // Write a record
       fwrite(&c,sizeof(c),1,fp);
       printf("\nContact Saved Successfully!\n");

       printf("\nPress a key to continue...\n");
       getch();
}

void list_contacts(FILE * fp)
{
    struct contact c;
    int count;

       // Go to the beginning of the file
       fseek(fp,0,SEEK_SET);

       printf("\nList of Contacts\n");
       printf("================\n");

       while(1)
       {
         count = fread(&c,sizeof(c),1,fp);
         if (count == 0) // EOF
            break;
         printf("%-20s %-30s %s\n", c.name,c.email,c.mobile);
       }

       printf("\nPress a key to continue...\n");
       getch();

}

void update_contact(FILE * fp)
{
    struct contact c;
    char name[30], email[5], mobile[11];
    int id,count;

       fflush(stdin);
       printf("Enter name : ");
       gets(name);

       fseek(fp,0,SEEK_SET); // move to the beginning of the file
       while(1)
       {
          count = fread(&c,sizeof(c),1,fp);
          if (count == 0) {
              printf("Sorry! Name not found!\n");
              break;
          }

          if (stricmp(name,c.name) == 0)  // contact found
          {
              // ask for new details
              printf("Enter email  [%s]: ", c.email);
              gets(email);

              if (strlen(email) > 0)
                  strcpy(c.email,email);

              printf("Enter mobile [%s]: ", c.mobile);
              gets(mobile);

              if (strlen(mobile) > 0)
                  strcpy(c.mobile, mobile);

              // update record
              // go back by one record
              fseek(fp,-1l * sizeof(struct contact), SEEK_CUR);
              fwrite(&c,sizeof(struct contact),1,fp);
              printf("Updated Contact!");
              break;
          }
       }

       printf("\nPress a key to continue...\n");
       getch();
}


void search_contacts(FILE * fp)
{
    struct contact c;
    char name[30], contact_name[30];
    int count;

       // Take string to search for
       fflush(stdin);
       printf("Enter name : ");
       gets(name);

       fseek(fp,0,SEEK_SET);  // Move to the beginning
       while(1)
       {
         count = fread(&c,sizeof(c),1,fp);
         if (count == 0)
            break;

         // if contact name contains given name
         // Convert both names to upper to do case insensitive search
         strcpy(contact_name,c.name);
         if(strstr( strupr(contact_name), strupr(name)) != NULL)
             printf("%-20s %-30s %s\n", c.name,c.email,c.mobile);
       }

       printf("\nPress a key to continue...\n");
       getch();
}
