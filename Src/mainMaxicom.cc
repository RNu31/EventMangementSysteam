#include <iostream>
#include <string>

struct Person
{
    std::string name;
    std::string lastName;
    std::string media;
    int age;
    std::string carreraInteres;
};

const int kSizeList = 3;

void registerPerson(struct Person person[], int n);
void listRegisteredPeople(struct Person person[], int n);
void deleteRegistration(struct Person person[]);

int main()
{

    return 0;
}

void registerPerson(Person person[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Nombre: " << std::endl;
        std::cin >> person[i].name;
        std::cout << "Apellido: " << std::endl;
        std::cin >> person[i].lastName;
        std::cout << "Medio por el que se entero: " << std::endl;
        std::cin >> person[i].media;
        std::cout << "Edad: " << std::endl;
        std::cin >> person[i].age;
        std::cout << "Carrera de interes: ";
        std::cin >> person[i].carreraInteres;
    }
}

void listRegisteredPeople(Person person[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Usuario N°: " << i << std::endl;
        std::cout << person[i].name << std::endl;
        std::cout << person[i].lastName << std::endl;
        std::cout << person[i].media << std::endl;
        std::cout << person[i].age << std::endl;
        std::cout << person[i].carreraInteres << std::endl;
    }
}

void deleteRegistration(Person person[])
{
    int nUser = 0;
    std::cout << "N° de usuario a eliminar: ";
    std::cin>>nUser;
    person[nUser].name=nullptr;
    person[nUser].lastName=nullptr;
    person[nUser].media=nullptr;
    person[nUser].age=0;
    person[nUser].carreraInteres=nullptr;
}