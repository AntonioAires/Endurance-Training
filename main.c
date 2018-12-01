#include <iostream>

class Train
{
public:
    int id;
    std::string name;
    int distance;
    int time;

    Train newTrain()
    {
        std::cout << "Nome do treino? ";
        std::cin >> name;
        std::cout << "Distancia do treino? ";
        std::cin >> distance;
        std::cout << "Duracao do treino? ";
        std::cin >> time;
    }

    void printTrain(int i)
    {
        std::cout << "ID: " << i << std::endl;
        std::cout << "Nome: " << name << std::endl;
        std::cout << "Distancia: " << distance << std::endl;
        std::cout << "Tempo: " << time << std::endl;
    }
};

int main()
{
    Train semana33[7];
    
    semana33[1] = { 1, "treino tolo", 45, 190 };
    semana33[1].printTrain(1);

    semana33[2].newTrain();
    semana33[2].printTrain(2);
}