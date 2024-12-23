#include <iostream>
//#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
int ch;

class book
{
    char book_id[9];
    char book_name[20];
    char book_author_name[20];

public:
    void new_book() // Create new book function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** NEW  BOOK *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t\t ***** NEW  BOOK *****";
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }

        cout << "\n\n\n\n\n\t\t\t\t\t ***** NEW BOOK INSERTED SUCCESSFULLY *****";
    }

    void remove_book() // Remove created books function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** REMOVE  BOOK *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }

    void search_book() // Search book function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** SEARCH BOOK *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }

    void display_books() // Display books function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** DISPLAY BOOKS *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }

    void borrow_book() // Borrow book function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** BORROW BOOK *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }

    void return_book() // return book function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** RETURN BOOK *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }

    void display_borrow_books() // Display all borrow books function.
    {
        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** DISPLAY BORROW BOOKS *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. BACK.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\n\t\t Please Enter Book Id: ";
            cin >> book_id;
            cout << "\n\n\t\t Please Enter Book Name: ";
            cin >> book_name;
            cout << "\n\n\t\t Please Enter Book Author Name: ";
            cin >> book_author_name;
            break;
        case 2:
            return;
            break;

        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
            break;
        }
    }
}; // class book has end.

fstream f1;
book b;

void write_book() // file handaling function.
{
    char ch;
    f1.open("book.dot", ios::out | ios::app);
    do
    {
        system("cls");
        b.new_book();
        f1.write((char *)&b, sizeof(book));
        cout << "\n\n\t\t do you want to add more books...(y/n)?";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    f1.close();
}

void book_menu() // book menu function.
{
    do
    {

        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** BOOK MENU *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. ADD A NEW BOOK.";
        cout << "\n\n\t\t 2. REMOVE A BOOK.";
        cout << "\n\n\t\t 3. SEARCH A BOOK.";
        cout << "\n\n\t\t 4. DISPLAY ALL BOOKS.";
        cout << "\n\n\t\t 5. BORROW A BOOK.";
        cout << "\n\n\t\t 6. RETURN A BOOK.";
        cout << "\n\n\t\t 7. DISPLAY ALL BORROW BOOKS.";
        cout << "\n\n\t\t 8. BACK TO MAIN MENU.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            b.new_book();
            break;
        case 2:
            b.remove_book();
            break;
        case 3:
            b.search_book();
            break;
        case 4:
            b.display_books();
            break;
        case 5:
            b.borrow_book();
            break;
        case 6:
            b.return_book();
            break;
        case 7:
            b.display_borrow_books();
            break;
        case 8:
            return;
            break;
        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
        }
    } while (ch != 8);
}

int main() // main function.
{
    do
    {

        system("cls");
        cout << "\n\n\n\n\n\t\t\t\t\t ***** LIBRARY MANEGMENT SYSTEM *****";
        cout << "\n\n\t\t";
        cout << "\n\n\t\t 1. BOOKS MENU.";
        cout << "\n\n\t\t 2. EXIT.";
        cout << "\n\n\t\t please select your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            book_menu();
            break;
        case 2:
            exit(0);
            break;
        default:
            cout << "\n\n\n\n\n\t\t\t\t\t ***** INVALID CHOISE *****";
        }
        // getch();

    } while (ch != 2);
    return 0;
}
