#include <iostream>
#include <SFML/Graphics.hpp>


using namespace std;

int main()
{
    //pollo 1
    sf::RenderWindow window(sf::VideoMode(250, 250), "POLLO 2");

    sf::CircleShape Cara(100.f);
    Cara.setFillColor(sf::Color::Green);

    sf::CircleShape OjoIzquierdo(30.f);
    OjoIzquierdo.setPosition(15.f, 50.f);
    OjoIzquierdo.setFillColor(sf::Color{ 0, 193, 252 });

    sf::CircleShape OjoNegroIzquierdo(20.f);
    OjoNegroIzquierdo.setPosition(25.f, 60.f);
    OjoNegroIzquierdo.setFillColor(sf::Color::Black);

    sf::CircleShape OjoDerecho(30.f);
    OjoDerecho.setPosition(107.f, 50.f);
    OjoDerecho.setFillColor(sf::Color{ 0, 193, 252 });

    sf::CircleShape OjoNegroDerecho(20.f);
    OjoNegroDerecho.setPosition(117.f, 60.f);
    OjoNegroDerecho.setFillColor(sf::Color::Black);

    sf::CircleShape Pataizq(13.f);
    Pataizq.setFillColor(sf::Color::Yellow);
    Pataizq.setPosition(150.f, 160.f);
    Pataizq.rotate(90.f);

    sf::CircleShape Pico(25.f);
    Pico.setRadius(25.f);
    Pico.setPointCount(3);
    Pico.setRotation(180.f);
    Pico.setPosition(120.f, 190.f);
    Pico.setFillColor(sf::Color::Yellow);
    Pico.scale(1.09f, 1.1f);

    sf::CircleShape Cres(12.f);
    Cres.scale(0.5f, 1.5f);
    Cres.rotate(35.f);
    Cres.setPosition(120.f, 10.f);
    Cres.setFillColor(sf::Color{ 161, 10, 10 });

    sf::CircleShape CresI(12.f);
    CresI.scale(0.5f, 1.5f);
    CresI.rotate(-35.f);
    CresI.setPosition(75.f, 15.f);
    CresI.setFillColor(sf::Color{ 161, 10, 10 });


    //POLLO 2
    sf::RenderWindow window2(sf::VideoMode(250, 250), "POLLO 2");

    sf::CircleShape Cara2(100.f);
    Cara2.setFillColor(sf::Color{ 252, 122, 0 });

    sf::CircleShape OjoIzquierdo2(30.f);
    OjoIzquierdo2.setPosition(15.f, 50.f);
    OjoIzquierdo2.setFillColor(sf::Color{ 0, 193, 252 });

    sf::CircleShape OjoNegroIzquierdo2(20.f);
    OjoNegroIzquierdo2.setPosition(25.f, 60.f);
    OjoNegroIzquierdo2.setFillColor(sf::Color::Black);

    sf::CircleShape OjoDerecho2(30.f);
    OjoDerecho2.setPosition(107.f, 50.f);
    OjoDerecho2.setFillColor(sf::Color{ 0, 193, 252 });

    sf::CircleShape OjoNegroDerecho2(20.f);
    OjoNegroDerecho2.setPosition(117.f, 60.f);
    OjoNegroDerecho2.setFillColor(sf::Color::Black);

    sf::CircleShape Pataizq2(13.f);
    Pataizq2.setFillColor(sf::Color::Yellow);
    Pataizq2.setPosition(200.f, 200.f);
    Pataizq2.rotate(90.f);

    sf::CircleShape Pico2(25.f);
    Pico2.setRadius(25.f);
    Pico2.setPointCount(3);
    Pico2.setRotation(180.f);
    Pico2.setPosition(120.f, 190.f);
    Pico2.setFillColor(sf::Color::Yellow);
    Pico2.scale(1.09f, 1.1f);

    sf::CircleShape Cres2(12.f);
    Cres2.scale(0.5f, 1.5f);
    Cres2.rotate(35.f);
    Cres2.setPosition(120.f, 10.f);
    Cres2.setFillColor(sf::Color{ 161, 10, 10 });

    sf::CircleShape CresI2(12.f);
    CresI2.scale(0.5f, 1.5f);
    CresI2.rotate(-35.f);
    CresI2.setPosition(75.f, 15.f);
    CresI2.setFillColor(sf::Color{ 161, 10, 10 });

    int opcion;
    bool repetir = true;

    do {
        system("cls");

        cout << "\n------------------Bienvenido------------------------\n" << endl;
        cout << "\nMenu de Opciones\n" << endl;
        cout << "1. Pollo 1" << endl;
        cout << "2. Pollo 2" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            while (window.isOpen())
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
              
                window.clear();
                window.draw(Cara);
                window.draw(OjoNegroDerecho);
                window.draw(OjoNegroIzquierdo);
                window.draw(Pico);
                window.draw(Cres);
                window.draw(CresI);
                window.draw(Pataizq2);
                window.display();
            }

            return 0;

            system("pause>nul"); // Pausa
            break;

        case 2:
            while (window.isOpen())
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
              
                window.clear();
                window.draw(Cara2);
                window.draw(OjoNegroDerecho2);
                window.draw(OjoNegroIzquierdo2);
                window.draw(Pico2);
                window.draw(Cres2);
                window.draw(CresI2);
                window.display();
            }
            return 0;
            system("pause>nul"); // Pausa
            break;
        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}