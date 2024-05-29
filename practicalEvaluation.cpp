#include<iostream>
using namespace std;

struct User{
	string uname;
	string pass;
	struct User *next;
};
struct User *first;
void newUser() {
    string name, pass;

    cout << "\nEnter the username: ";
    cin >> name;

    struct User* temp = first;
    while (temp != NULL) {
        if (name == temp->uname) {
            cout << "\nThis username already exists!";
            return;
        }
        temp = temp->next;
    }

    struct User* newUser = new User;
    newUser->uname = name;
    cout << "\nEnter the password: ";
    cin >> pass;
    newUser->pass = pass;
    newUser->next = NULL;

    if (first == NULL) {
        first = newUser;
    }
    else {
        temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newUser;
    }

    cout << "\nUser added successfully!";
}

void displayUsers() {
    struct User* temp = first;
    int i = 1;

    if (temp == NULL) {
        cout << "No users Found!!";
    }
    else {
        cout << "\nAll the usernames are: ";
        while (temp != NULL) {
            cout << "\nUser " << i << ": " << temp->uname;
            temp = temp->next;
            i++;
        }
    }
}
void modifyUser() {
    struct User* temp = first;
    string name, pass;

    if (temp == NULL) {
        cout << "\nNo users found";
    }
    else {
        displayUsers();
        cout << "\nEnter the username for which you want to change the password: ";
        cin >> name;
        bool userFound = false;

        while (temp != NULL) {
            if (temp->uname == name) {
                userFound = true;
                break;
            }
            temp = temp->next;
        }

        if (!userFound) {
            cout << "\nNo such user found!";
        }
        else {
            cout << "\nEnter the new password: ";
            cin >> pass;
            temp->pass = pass;
            cout << "\nPassword changed!";
        }
    }
}
int main()
{
	int ch;
	while(1)
	{
	cout<<"\nEnter your choice: ";
	cout<<"\n1-Enter new user:";
	cout<<"\n2-Display all the users:";
	cout<<"\n3-Change the password of the user:";
	cout<<"\n4-Exit\n";
	cin>>ch;	
	switch(ch)
	{
		case 1:{
			newUser();
			break;
		}
			
		case 2:{
			displayUsers();
			break;
		}
			
		case 3:{
			modifyUser();
			break;
		}
			
		case 4: {
			exit(0);
			break;
		}
		default: {
			cout<<"Invalid choice!";
			break;
		}
		
	}
	}	
}
