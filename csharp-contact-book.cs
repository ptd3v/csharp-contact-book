//C# Contact Book

using System;
using System.Collections.Generic;

namespace ContactBook
{
    //Singular Contact Entry
    class Contact
    {
        public string Name { get; set; }
        public string Email { get; set; }
        public string Phone { get; set; }
    }

    //Multiple contact managements
    class ContactBook
        private List<Contact> contacts;
        public ContactBook()
        {
            contacts = new List<Contact>();
        }

        //Add a new contact to the contact book
        public void AddContact(Contact contact)
        {
            contacts.Add(contact);
        }
