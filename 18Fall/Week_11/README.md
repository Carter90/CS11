# Week  Material for CS11 SI 

Presentations
[Session 18/19](https://drive.google.com/open?id=1DDquFnwj1QwAlxkAGmkuz6KKdPd2EpSFQJ6yR1PWT6A)  
[Ed Parrish's Graphics and Animation](http://www.edparrish.net/cs11/18f/lesson13.php)  

## Compiling the GUI
g++ -c GUI.cpp; g++ GUI.o -o myGUI -lsfml-graphics -lsfml-window -lsfml-system

## GUI Code
```C++
#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    const float SIZE = 400.0f;
    sf::RenderWindow win(sf::VideoMode(SIZE, SIZE), "Test");
    win.setVerticalSyncEnabled(true);
    const float RADIUS = 30.f;
    sf::CircleShape circ(RADIUS);
    circ.setFillColor(sf::Color::Green);
    float dx = 2.5f;
    float dy = 0.0f;
    
    for(int x=0;x<SIZE;x+=50) {
        for(int y=0;y<SIZE;y+=50) {      
            sf::RectangleShape rec(sf::Vector2f(50, 50));
            rec.setOutlineThickness(2);
            rec.setFillColor(sf::Color(100,100,100,100));
            rec.setPosition(x,y);
            win.draw(rec);
            win.display();
        } } //end fors
    
    while (win.isOpen())
    {
        // Process events
        sf::Event event;
        //win.clear(); // first step
    
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            // Escape key pressed
            if ((event.type == sf::Event::KeyPressed)
                && (event.key.code == sf::Keyboard::Escape))
            {
                win.close();
            }
        }
        
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sf::Vector2i pos = sf::Mouse::getPosition(win);
            cout << pos.x << " " << pos.y << "\n";
            
            if ( pos.x <= SIZE && pos.y <= SIZE ){
                sf::RectangleShape rec2(sf::Vector2f(50, 50));
                rec2.setOutlineThickness(2);
                rec2.setFillColor(sf::Color(200,0,0,245));
                int mult= 50.0;
                int x = ((pos.x + mult/2) / mult) * mult;
                int y = ((pos.y + mult/2) / mult) * mult;
                //rec2.setPosition(x,y);
                //win.draw(rec2);
                //win.display();
                //getFillColor()
            } 
            
        }
        sf::sleep(sf::milliseconds(100));
    }
return 0;
} 
```

```C++
#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int main() {
    sf::RenderWindow win(sf::VideoMode(600, 400), "Anim2");
    win.setVerticalSyncEnabled(true);
    const float RADIUS = 30.f;
    const float SPEED_X = 2.5f;
    const float SPEED_Y = 2.5f;
    sf::CircleShape circ(RADIUS);
    circ.setFillColor(sf::Color::Green);
    float dx = SPEED_X;
    float dy = SPEED_Y;

    while (win.isOpen()) {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
        }
        // Update
        sf::Vector2u size = win.getSize();
        sf::Vector2f pos = circ.getPosition();
        if (pos.x < 0)
        {
            dx = std::abs(dx);
        }
        else if (pos.x + RADIUS * 2 > size.x)
        {
            dx = -std::abs(dx);
        }
        if (pos.y < 0)
        {
            dy = std::abs(dy);
        }
        else if (pos.y + RADIUS * 2 > size.y)
        {
            dy = -std::abs(dy);
        }
        circ.move(dx, dy);
        // Render
        win.clear();
        win.draw(circ);
        win.display();
        sf::sleep(sf::milliseconds(10));
    }
    return 0;
}
```

