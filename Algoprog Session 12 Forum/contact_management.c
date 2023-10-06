#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisikan struct untuk data Contact
struct Contact {
    char name[50];
    char phone[15];
    char office_phone[15];
    char email[50];
    char company[50];
    struct Contact* next;
};

// Fungsi untuk membuat kontak baru
struct Contact* createContact() {
    struct Contact* newContact = (struct Contact*)malloc(sizeof(struct Contact));
    if (newContact == NULL) {
        printf("Alokasi memori gagal.\n");
        exit(1);
    }
    newContact->next = NULL;
    return newContact;
}

// Fungsi untuk menambahkan kontak ke linked list
void addContact(struct Contact** head, struct Contact* newContact) {
    if (*head == NULL) {
        *head = newContact;
    } else {
        struct Contact* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newContact;
    }
}

// Fungsi untuk menampilkan semua kontak
void displayContacts(struct Contact* head) {
    struct Contact* current = head;
    while (current != NULL) {
        printf("Nama: %s\n", current->name);
        printf("No HP: %s\n", current->phone);
        printf("No Kantor: %s\n", current->office_phone);
        printf("Email: %s\n", current->email);
        printf("Perusahaan: %s\n", current->company);
        printf("\n");
        current = current->next;
    }
}

// Fungsi untuk menghapus semua kontak
void deleteContacts(struct Contact** head) {
    struct Contact* current = *head;
    while (current != NULL) {
        struct Contact* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

int main() {
    struct Contact* contactList = NULL;
    char choice;

    while (1) {
        printf("Menu:\n");
        printf("1. Tambah Kontak\n");
        printf("2. Tampilkan Kontak\n");
        printf("3. Hapus Semua Kontak\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1/2/3/4): ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                // Tambah Kontak
                {
                    struct Contact* newContact = createContact();
                    printf("Nama: ");
                    scanf("%s", newContact->name);
                    printf("No HP: ");
                    scanf("%s", newContact->phone);
                    printf("No Kantor: ");
                    scanf("%s", newContact->office_phone);
                    printf("Email: ");
                    scanf("%s", newContact->email);
                    printf("Perusahaan: ");
                    scanf("%s", newContact->company);

                    addContact(&contactList, newContact);
                    printf("Kontak telah ditambahkan.\n\n");
                }
                break;
            case '2':
                // Tampilkan Kontak
                if (contactList == NULL) {
                    printf("Daftar kontak kosong.\n\n");
                } else {
                    displayContacts(contactList);
                }
                break;
            case '3':
                // Hapus Semua Kontak
                if (contactList == NULL) {
                    printf("Daftar kontak kosong.\n\n");
                } else {
                    deleteContacts(&contactList);
                    printf("Semua kontak telah dihapus.\n\n");
                }
                break;
            case '4':
                // Keluar
                deleteContacts(&contactList);
                exit(0);
            default:
                printf("Pilihan tidak valid.\n\n");
        }
    }

    return 0;
}
