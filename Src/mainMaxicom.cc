#include <iostream>
#include <string>
#include <chrono>
#include <time.h>

void Main_Menu();

const int KMaxEvent = 100;


struct Event 
{
    std::string name;
    std::string start_date; //fecha de inicio
    std::string end_date;  //fecha de fin
    int maximun_capacity; // capacidad maxima
    int enrolled; //inscritos
};

int main()
{
  return 0;
}

Event events[KMaxEvent];
int total_events = 0;

void CreateEvent()
{
    if(total_events >= KMaxEvent){
        std::cout << "No se pueden crear mas eventos. " << std::endl;
        return;
    }
    Event event;
    std::cout << "Ingrese el nombre del evento: ";
    std::cin >> event.name;
    std::cout << "Ingrese la fecha de inicio del evento: ";
    std::cin >> event.start_date;
    std::cout << "Ingrese la fecha de fin del evento: ";
    std::cin >> event.end_date;
    std::cout << "Ingrese la capacidad maxima de personas del evento: ";
    std::cin >> event.maximun_capacity;
    std::cout << "Ingrese el nombre del evento: ";
    event.enrolled = 0;
    events[total_events++] = event;
    std::cout << "Evento creado exitosamente. " << std::endl;

}

void ListEvents()
{
for (int i = 0; i < total_events; i++)
    {
    std::cout << "Evento " << i + 1 << ": " << events[i].name << "Fecha de inicio: " << events[i].start_date
    << ", Fecha de Fin: " << events[i].end_date << ", Capacidad Maxima: " << events[i].maximun_capacity 
    << ", Inscritos: " << events[i].enrolled << std::endl;
    }
}

void DeleteEvent()
{
    int index;
    std::cout << "Ingrese el numero de eventos a eliminar: ";
    std::cin >> index;
    if (index < 1 || index > total_events) {
        std::cout << "Indice de eventos no valido." << std::endl;
        return;
    }
    for (int i = index - 1; i < total_events - 1; i++)
    {
        events[i] = events[i+1];
    }
    total_events--;
    std::cout << "Evento eliminado exitosamente." << std::endl;
}
  
void Main_Menu()
{
  std::cout<<"---------------------------------------------"<<std::endl;
  std::cout<<"|                    M E N U                 "<<std::endl;
  std::cout<<"---------------------------------------------"<<std::endl;
}
