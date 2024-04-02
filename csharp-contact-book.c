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
        //Display Contacts
        public void DisplayContacts()
        {
            Console.WriteLine("Contact List:");
            foreach (Contact contact in contacts)
            {
                Console.WriteLine($"Name: {contact.Name}");
                Console.WriteLine($"Phone Number: {contact.PhoneNumber}");
                Console.WriteLine($"Email: {contact.Email}");
                Console.WriteLine("--------------------");
            }
        }
    }
    //Main program class
    class Program
        {
        static void Main(string[] args)
        {
            //Define ContactBook
            ContactBook contactBook = new ContactBook();

            //Add sample contacts
            contactBook.AddContact("John Doe", "1234567890", "john@example.com");
            contactBook.AddContact("Jane Smith", "9876543210", "jane@example.com");

            //Display contacts
            contactBook.DisplayContacts();
        }
    }
}
