#ifndef CONTACT_H
#define CONTACT_H
#include<stdio.h>
#include<string.h>

struct Contact{
    char name[50];
    char phone[15];
    char email[50];
};

struct AddressBook {
    struct Contact contacts[100];        //Nested structure
    int contactCount;
    int index_record[100];               //it is used in the editing and deletion of the data 
    int ir_size;                         //it stores the count of data stored in the index_record
};

void pull_file_data(struct AddressBook * , char *);
void add_contact(struct AddressBook *addressBook);
void search_contact(struct AddressBook *addressBook);
void edit_contact(struct AddressBook *addressBook);
void delete_contact(struct AddressBook *addressBook);
void list_contacts(struct AddressBook *addressBook);
void push_data_to_file(struct AddressBook * , char *);


int phone_unique(struct AddressBook *, char *);          //MOBILE UNIQUE FUNCTION PROTOTYPE
int email_unique(struct AddressBook *, char *);           //EMAIL UNIQUE OR NOT PROTO TYPE
int search_contact_by_name(struct AddressBook*,char*);   //SEARCH CONTACT BY NAME
int search_contact_by_mobile(struct AddressBook*,char*);  //SEARCH CONTACT BY MOBILE
int search_contact_by_email(struct AddressBook*,char*);   //SERACH CONTACT BY EMAIL

#endif