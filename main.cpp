#include <iostream>
#include <ctime>
#include <string>

std::string generate_password()
{
    srand(time(NULL));
    std::string alphabet {("ABCDEFGHIJKLMNOPQRSTUVWXYZ")};
    std::string numbers {("0123456789")};
    std::string characters {("!@#$%^&")};
    std::string password {};
    int random_length {(8 + (rand() % 10))};

    for(int i {0}; i < random_length; i++)
    {
        int random_alphabet {(rand() % 26)};
        int random_numbers {(rand() % 10)};
        int random_characters {(rand() % 8)};

        int random_chooser {((rand() % 4))};
        switch(random_chooser)
        {
            case 0:
            password += alphabet[random_alphabet];
            break;
            case 1:
            password += std::tolower(alphabet[random_alphabet]);
            break;
            case 2:
            password += numbers[random_numbers];
            break;
            case 3:
            password += characters[random_characters];
            break;
        }
    }
    return password;
}
int main()
{
    std::cout << generate_password();
    return 0;
}