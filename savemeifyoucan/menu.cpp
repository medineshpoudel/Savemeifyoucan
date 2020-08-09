#include "Menu.h"


Menu::Menu(float width, float height)
{


	

	if (!font.loadFromFile("arial.ttf"))
	{
		// handle error
	}


	


	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setCharacterSize(40);
	menu[0].setString("Human Vs Human");
	menu[0].setPosition(650,300);

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setCharacterSize(40);
	menu[1].setString("Human Vs CPU");
	menu[1].setPosition(650,400);

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setCharacterSize(40);
	menu[2].setString("Help");
	menu[2].setPosition(650,500);

	menu[3].setFont(font);
	menu[3].setFillColor(sf::Color::White);
	menu[3].setCharacterSize(40);
	menu[3].setString("About Developers");
	menu[3].setPosition(650,600);

	menu[4].setFont(font);
	menu[4].setFillColor(sf::Color::White);
	menu[4].setCharacterSize(40);
	menu[4].setString("Quit Game");
	menu[4].setPosition(650,700);

	

	selectedItemIndex = 0;
}


Menu::~Menu()
{
}

void Menu::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
		
	}
	
}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

