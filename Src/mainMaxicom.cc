#include <iostream>
#include <string>

struct Person
{
    std::string name;
    std::string last_name;
    std::string media;
    int age;
    std::string career_interest;
};

const int kSizeList = 3;

void Register_Person(struct Person person[], int n);
void List_Registered_People(struct Person person[], int n);
void Delete_Registration(struct Person person[]);

int main()
{

    return 0;
}

void Register_Person(Person person[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Nombre: " << std::endl;
        std::cin >> person[i].name;
        std::cout << "Apellido: " << std::endl;
        std::cin >> person[i].last_name;
        std::cout << "Medio por el que se entero: " << std::endl;
        std::cin >> person[i].media;
        std::cout << "Edad: " << std::endl;
        std::cin >> person[i].age;
        std::cout << "Carrera de interes: ";
        std::cin >> person[i].career_interest;
    }
}

void List_Registered_People(Person person[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Usuario N°: " << i << std::endl;
        std::cout << person[i].name << std::endl;
        std::cout << person[i].last_name << std::endl;
        std::cout << person[i].media << std::endl;
        std::cout << person[i].age << std::endl;
        std::cout << person[i].career_interest << std::endl;
    }
}

void Delete_Registration(Person person[])
{
    int nUser = 0;
    std::cout << "N° de usuario a eliminar: ";
    std::cin>>nUser;
    person[nUser].name=nullptr;
    person[nUser].last_name=nullptr;
    person[nUser].media=nullptr;
    person[nUser].age=0;
    person[nUser].career_interest=nullptr;
}