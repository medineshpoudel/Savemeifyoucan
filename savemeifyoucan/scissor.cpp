#include "scissor.h"



scissor::scissor()
{
}
void scissor::A()
sf::Font font;

if (!font.loadFromFile("arial.ttf"))
{
	// handle error
}

sf::Text text00;
text00.setFont(font);
text00.setString("Save Me IF You Can!!!");
text00.setFillColor(sf::Color::White);
text00.setCharacterSize(150);
text00.setPosition(200, 50);

window.draw(text00);


scissor::~scissor()
{
}
