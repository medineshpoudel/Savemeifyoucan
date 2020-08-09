#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"
#include <cstdlib>
#include <ctime>
#include <sstream>


int main()
{
	sf::RenderWindow window(sf::VideoMode(2000, 1100), "Menu");
	window.setFramerateLimit(20);
	
	sf::Font font;
	
		
	
	sf::Font fontmain;

	if (!fontmain.loadFromFile("ICELAND.ttf"))
	{
		// handle error
	}

	sf::Text textmain;
	textmain.setFont(fontmain);
	textmain.setString("Save Me IF You Can!!!");
	textmain.setFillColor(sf::Color::Blue);
	textmain.setCharacterSize(150);
	textmain.setPosition(200, 50);

	sf::Texture texture;
	if (!texture.loadFromFile("background.jpg"))
	{

	}
	sf::Sprite sprite(texture);

	sprite.setTexture(texture);
	sprite.setOrigin(100, 200);

	Menu menu(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;

				case sf::Keyboard::Down:
					menu.MoveDown();
					break;

				case sf::Keyboard::Return:
					switch (menu.GetPressedItem())
				    {
						//human vs human window
					case 0:
					{
					

						
						
							sf::RenderWindow window(sf::VideoMode(1900, 1000), "HUman vs Human",sf::Style::Fullscreen);
							//sf::RenderWindow window;
							//window.create(sf::VideoMode(1900, 1000), "HUMAN VS HUMAN",sf::Style::Fullscreen);
							//window.setKeyRepeatEnabled(false);
							window.setFramerateLimit(20);
						
							if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
							{
								window.close();
							}
						//for bCKGROUND
						sf::Texture texture;
						if (!texture.loadFromFile("background.jpg"))
						{

						}
						sf::Sprite spritebackground(texture);

						spritebackground.setTexture(texture);
						spritebackground.setOrigin(100, 200);

						//for score 
						int score = 0;
						sf::Font font;
						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}
						std::ostringstream ssscore;
						ssscore << "Score:" << score;

						sf::Text textscore;
						textscore.setFont(font);
						textscore.setString(ssscore.str());
						textscore.setFillColor(sf::Color::Yellow);
						textscore.setCharacterSize(35);
						textscore.setPosition(340, 20);

						sf::Text textscore1;
						textscore1.setFont(font);
						textscore1.setString(ssscore.str());
						textscore1.setFillColor(sf::Color::Yellow);
						textscore1.setCharacterSize(35);
						textscore1.setPosition(1300, 20);



						//for the hangman first box ok
						sf::Vertex line[] =
						{
							sf::Vertex(sf::Vector2f(5, 15)),
							sf::Vertex(sf::Vector2f(320, 15))
						};
						sf::Vertex line0[] =
						{
							sf::Vertex(sf::Vector2f(5, 320)),
							sf::Vertex(sf::Vector2f(320, 320))
						};
						sf::Vertex line01[] =
						{
							sf::Vertex(sf::Vector2f(5, 15)),
							sf::Vertex(sf::Vector2f(5, 320))
						};
						sf::Vertex line02[] =
						{
							sf::Vertex(sf::Vector2f(320, 15)),
							sf::Vertex(sf::Vector2f(320, 320))
						};
						//for 2nd box
						sf::Vertex man2box1[] =
						{
							sf::Vertex(sf::Vector2f(1500, 15)),
							sf::Vertex(sf::Vector2f(1820, 15))
						};
						sf::Vertex man2box2[] =
						{
							sf::Vertex(sf::Vector2f(1500,320)),
							sf::Vertex(sf::Vector2f(1820, 320))
						};
						sf::Vertex man2box3[] =
						{
							sf::Vertex(sf::Vector2f(1500, 15)),
							sf::Vertex(sf::Vector2f(1500, 320))
						};
						sf::Vertex man2box4[] =
						{
							sf::Vertex(sf::Vector2f(1820, 15)),
							sf::Vertex(sf::Vector2f(1820, 320))
						};



						sf::RectangleShape line1(sf::Vector2f(150, 20));

						line1.setPosition(10, 280);
						sf::RectangleShape line2(sf::Vector2f(255, 20));
						line2.setPosition(85, 28);
						line2.rotate(90);

						sf::RectangleShape line3(sf::Vector2f(150, 20));
						line3.setPosition(85, 28);

						//straight hanman line passing through circle

						sf::RectangleShape line4(sf::Vector2f(180, 20));
						line4.setPosition(240, 28);
						line4.rotate(90);
						line4.setFillColor(sf::Color::Yellow);
						//for head of hangman
						sf::CircleShape circle(35);
						circle.setPosition(200, 60);
						sf::Texture texturecircle;
						if (!texturecircle.loadFromFile("sad.jpg"))
						{
							// error...
						}
						circle.setTexture(&texturecircle);

						//fro legs of hangman
						sf::RectangleShape line5(sf::Vector2f(65, 20));
						line5.setPosition(240, 200);
						line5.setFillColor(sf::Color::Yellow);

						line5.rotate(60);
						sf::RectangleShape line6(sf::Vector2f(75, 20));
						line6.setPosition(240, 200);
						line6.rotate(120);
						line6.setFillColor(sf::Color::Yellow);
						//for hands of hangman
						sf::RectangleShape line8(sf::Vector2f(75, 20));
						line8.setPosition(240, 150);
						line8.setFillColor(sf::Color::Yellow);
						line8.rotate(148);
						sf::RectangleShape line7(sf::Vector2f(65, 20));
						line7.setPosition(240, 140);
						line7.rotate(32);
						line7.setFillColor(sf::Color::Yellow);
						//for another hangman next side one 
						sf::RectangleShape line10(sf::Vector2f(150, 20));

						line10.setPosition(1510, 280);
						sf::RectangleShape line20(sf::Vector2f(255, 20));
						line20.setPosition(1585, 28);
						line20.rotate(90);
						sf::RectangleShape line30(sf::Vector2f(150, 20));
						line30.setPosition(1585, 28);
						sf::RectangleShape line40(sf::Vector2f(180, 20));
						line40.setPosition(1740, 28);
						line40.setFillColor(sf::Color::Yellow);
						line40.rotate(90);
						sf::CircleShape circle2(35);
						circle2.setPosition(1700, 60);
						sf::Texture texturecircle2;
						if (!texturecircle2.loadFromFile("sad.jpg"))
						{
							// error...
						}
						circle2.setTexture(&texturecircle2);
						//for legs of another hangman
						sf::RectangleShape line50(sf::Vector2f(75, 20));
						line50.setPosition(1740, 200);
						line50.rotate(120);
						line50.setFillColor(sf::Color::Yellow);
						sf::RectangleShape line60(sf::Vector2f(65, 20));
						line60.setPosition(1740, 200);
						line60.rotate(60);
						line60.setFillColor(sf::Color::Yellow);
						//for hands of another hangman
						sf::RectangleShape line80(sf::Vector2f(65, 20));
						line80.setPosition(1740, 140);
						line80.rotate(32);
						line80.setFillColor(sf::Color::Yellow);
						sf::RectangleShape line70(sf::Vector2f(75, 20));
						line70.setPosition(1740, 150);
						line70.rotate(148);
						line70.setFillColor(sf::Color::Yellow);

						//text for player health
						//sf::Font font;

						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}

						sf::Text text0;
						text0.setFont(font);
						text0.setString("Player 1 Life																						Player 2 Life");

						text0.setFillColor(sf::Color::White);
						text0.setCharacterSize(50);
						text0.setPosition(35, 325);

						sf::Texture texturehelp;
						if (!texturehelp.loadFromFile("img1.png"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritehelp1(texturehelp);
						spritehelp1.setPosition(1200, 900);

					

						sf::Texture texturehelp2;
						if (!texturehelp2.loadFromFile("img2.png"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritehelp2(texturehelp2);
						spritehelp2.setPosition(50, 900);

						

						

						//for scissor paper rock image displaying
						sf::Texture texture2;
						if (!texture2.loadFromFile("spr.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite sprite2(texture2);
						sprite2.setPosition(50, 400);

						sf::Texture texture3;
						if (!texture3.loadFromFile("spr.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite sprite3(texture3);
						sprite3.setPosition(1200, 400);

						//for rock
						sf::Texture texturerock;
						if (!texturerock.loadFromFile("rock.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spriterock2(texturerock);
						spriterock2.setPosition(1300, 400);

						sf::Sprite spriterock1(texturerock);
						spriterock1.setPosition(300, 400);

						//for scissors
						sf::Texture texturescissors;
						if (!texturescissors.loadFromFile("scissors.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritescissor2(texturescissors);
						spritescissor2.setPosition(1300, 400);

						sf::Sprite spritescissor1(texturescissors);
						spritescissor1.setPosition(300, 400);

						//for paper
						sf::Texture texturepaper;
						if (!texturepaper.loadFromFile("paper.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritepaper2(texturepaper);
						spritepaper2.setPosition(1300, 400);

						sf::Sprite spritepaper1(texturepaper);
						spritepaper1.setPosition(300, 400);

						int enterclear = 0;
						int round = 0;
						int codeval = 0;
						int roundTransition = 0;

						sf::Text text00;
						text00.setFont(font);
						text00.setString("Player 1 wins!!!");
						text00.setFillColor(sf::Color::Cyan);
						text00.setCharacterSize(50);
						text00.setPosition(800, 600);

						sf::Text text000;
						text000.setFont(font);
						text000.setString("Player 2 wins!!!");
						text000.setFillColor(sf::Color::Cyan);
						text000.setCharacterSize(50);
						text000.setPosition(800, 600);

						sf::Text textdraw;
						textdraw.setFont(font);
						textdraw.setString("Draw!!!");
						textdraw.setFillColor(sf::Color::Cyan);
						textdraw.setCharacterSize(50);
						textdraw.setPosition(800, 600);

						sf::Text exitgame;
						exitgame.setFont(font);
						exitgame.setString("Game Over..... Press space key to exit");
						exitgame.setFillColor(sf::Color::Cyan);
						exitgame.setCharacterSize(50);
						exitgame.setPosition(800, 600);


						sf::Text textexit;
						textexit.setFont(font);
						textexit.setString("Press Enter to Continue..");
						textexit.setFillColor(sf::Color::Cyan);
						textexit.setCharacterSize(35);
						textexit.setPosition(800, 750);

						

						while (window.isOpen() && round <= 8)
							
						{
							int enterpressed = 1;
							enterclear=0;
							
							codeval = 0; 
							sf::Event event;

							while (window.pollEvent(event))
							{
								
					

								if (event.type == sf::Event::KeyReleased) {

									if (event.key.code == sf::Keyboard::A) {
										
										codeval = 1;
									}
									else if (event.key.code == sf::Keyboard::S) {
										codeval = 2;
									}
									else if (event.key.code == sf::Keyboard::D) {
										codeval = 3;
									}
									else if (event.key.code == sf::Keyboard::Numpad1) {
										codeval = 4;
									}
									else if (event.key.code == sf::Keyboard::Numpad2) {
										codeval = 5;
									}
									else if (event.key.code == sf::Keyboard::Numpad3) {
										codeval = 6;
									}
									else if (event.key.code == sf::Keyboard::Enter) {
										codeval = 10;
										////enterpressed += 1;
										//if (enterpressed==3) std::cout << 5;
									}

									if (codeval != 10) round += 1; 
									
									break;

									
								}

								/*else if (event.type == sf::Event::KeyReleased) {
									if (event.key.code == sf::Event::Closed) {
										window.close();
									}
								}*/
							}
							

							//if (roundTransition != 1) {



							
								window.clear();
								window.draw(spritebackground);
								//for input of scissor paper rock
								/*
								if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::P))
								{
								window.draw(text12);
								}*/

								window.draw(textscore);
								window.draw(textscore1);

								window.draw(line1);
								window.draw(line2);
								window.draw(line3);
							//}


							//for terminating window


							if (!font.loadFromFile("arial.ttf"))
							{
								// handle error
							}





							/*

								sf::Event evt;

								while (window.pollEvent(evt))
								{
									if (evt.type == sf::Event::KeyReleased)
									{
										if (evt.key.code == sf::Keyboard::Key::A)
										{
											window.close();

										}
									}
								}
								*/

								//sf::Clock myClock;
							bool showCursor = false;

							int i;

							int a, s, d, a1, s1, d1, a2, s2, d2, a3, s3, d3, x, y, z, x1, x2, x3, y1, y2, y3, z1, z2, z3;



							if (codeval == 1)
							{

								a = 1;
								a1 = 10;
								a2 = 100;
								a3 = 1000;
								
							}
							else if (codeval == 2)
							{
								s = 2;
								s1 = 20;
								s2 = 200;
								s3 = 2000;
								
							}
							else if (codeval == 3)
							{
								d = 3;
								d1 = 30;
								d2 = 300;
								d3 = 3000;
							
							}
							else if (codeval == 4)
							{
								x = 4;
								x1 = 40;
								x2 = 400;
								x3 = 4000;
								roundTransition = 1;
							}
							else if (codeval == 5)
							{
								y = 5;
								y1 = 50;
								y2 = 500;
								y3 = 5000;
								roundTransition = 1;
							}
							else if (codeval == 6)
							{
								z = 6;
								z1 = 60;
								z2 = 600;
								z3 = 6000;
								roundTransition = 1;
							}

							
							//for rANDOM NUMBER
							/*{
							srand(time(NULL));
							x= rand() % 4;
							//x = 2;
							y = rand() % 4;
							z = rand() % 4;
							}*/


							if (a == 1 && y == 5)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								//Sprite3.setOrigin(400, 300);
								window.draw(spritescissor1);
								window.draw(spritepaper2);
								window.draw(text00);
								window.draw(textexit);


								score =enterpressed;
								
								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());

							}
							if (s == 2 && z == 6)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								window.draw(spritepaper1);
								window.draw(spriterock2);
								window.draw(text00);
								window.draw(textexit);


								score =enterpressed;
								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());
							}
							if (d == 3 && x == 4)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								window.draw(spriterock1);
								window.draw(spritescissor2);
								window.draw(text00);
								window.draw(textexit);


								score =enterpressed;
								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());

							}

							//sf::Time t3 = sf::seconds(10);


							if (a == 1 && x == 4)
							{

								window.draw(spritescissor1);
								window.draw(spritescissor2);
								window.draw(textdraw);
							}

							if (s == 2 && y == 5)
							{

								window.draw(spritepaper1);
								window.draw(spritepaper2);
								window.draw(textdraw);
							}

							if (d == 3 && z == 6)
							{
								window.draw(spriterock2);
								window.draw(spriterock1);
								window.draw(textdraw);
							}
							if (x == 4 && s == 2)
							{
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spritescissor2);
								window.draw(spritepaper1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());
							}
							if (y == 5 && d == 3)

							{
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spritepaper2);
								window.draw(spriterock1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());
							}
							if (z == 6 && a == 1)
							{
								//score = 1;
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spriterock2);
								window.draw(spritescissor1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());

							}

							//window.draw(textexit);


								//enter le naya windoe lyane delete this loop papradox.......

								//enter le naya windoe lyane delete this loop papradox.....ends here....


							showCursor = true;


							/*if (showCursor = true)
							{
							window.clear();
							}*/




							/*
							{


								if (a == 1 && y == 5 || s == 2 && z == 6 || d == 3 && x == 4)
								{
									window.draw(line40);

								}



								if (a1 == 10 && y1 == 50 || s1 == 20 && z1 == 60 || d1 == 30 && x1 == 40)
								{
									window.draw(circle2);

								}

								if (a2 == 100 && y2 == 500 || s2 == 200 && z2 == 600 || d2 == 300 && x2 == 400)
								{
									window.draw(line50);
									window.draw(line60);

								}

								if (a3 == 1000 && y3 == 5000 || s3 == 2000 && z3 == 6000 || d3 == 3000 && x3 == 4000)
								{
									window.draw(line80);
									window.draw(line70);
									window.draw(text00);
									showCursor = false;
									if (showCursor == false)
									score++;
									ssscore.str("");
									ssscore << "Score:" << score;
									textscore.setString(ssscore.str());
									showCursor = true;

								}



								if (x == 4 && s == 2 || y == 5 && d == 3 || z == 6 && a == 1)
								{
									window.draw(line4);
								}
								if (x1 == 40 && s1 == 20 || y1 == 50 && d1 == 30 || z1 == 60 && a1 == 10)
								{
									window.draw(circle);
								}
								if (x2 == 400 && s2 == 200 || y2 == 500 && d2 == 300 || z2 == 600 && a2 == 100)
								{
									window.draw(line5);
									window.draw(line6);
								}
								if (x3 == 4000 && s3 == 2000 || y3 == 5000 && d3 == 3000 || z3 == 6000 && a3 == 1000)
								{
									window.draw(line8);
									window.draw(line7);
									window.draw(text000);


									score++;
									ssscore.str("");
									ssscore << "Score:" << score;
									textscore1.setString(ssscore.str());

								}

							}
							*/


							/*

							if (roundTransition == 1) {
								if (codeval != 10) {
									std::cout << "Wait for enter" << std::endl;
									continue;
								}
								else {
									roundTransition = 0;

								}

							}

							*/


							if (codeval == 10) {
								a = 0;
								s = 0;
								d = 0;

								x = 0;
								y = 0;
								z = 0;
								
								//enterclear;
							}
							/*if (enterclear=3)
							{
								std::cout << "as";
							}*/

							














							/*else if (a == 1 && x == 0 || a == 2 && x == 1 || a == 0 && x == 2 || a == 1 && x == 2)
							{
								window.draw(line4);
							}*/








							//myTxt.setString("System Module:_");


							// left key is pressed: move our character


						//	window.draw(line4);
						//window.draw(circle);


						//another one
							window.draw(line10);
							window.draw(line20);
							window.draw(line30);
							//window.draw(line40);
							//window.draw(circle2);


							//window.draw(sprite);

							//window.draw(sprite2);
							//window.draw(sprite3);


							//for rectangle ouside 1srhangman
							window.draw(line, 2, sf::Lines);
							window.draw(line0, 2, sf::Lines);
							window.draw(line01, 2, sf::Lines);
							window.draw(line02, 2, sf::Lines);
							//for rectangle outside the 2nd human
							window.draw(man2box1, 2, sf::Lines);
							window.draw(man2box2, 2, sf::Lines);
							window.draw(man2box3, 2, sf::Lines);
							window.draw(man2box4, 2, sf::Lines);
							window.draw(text0);
							window.draw(spritehelp1);
							window.draw(spritehelp2);

						
							window.display();

						}
					}


					
						
						break;
					case 1:
					{
						sf::RenderWindow window(sf::VideoMode(1900, 1000), "HUman vs CPU", sf::Style::Fullscreen);
						//sf::RenderWindow window;
						//window.create(sf::VideoMode(1900, 1000), "HUMAN VS HUMAN",sf::Style::Fullscreen);
						//window.setKeyRepeatEnabled(false);
						window.setFramerateLimit(20);

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
						{
							window.close();
						}
						//for bCKGROUND
						sf::Texture texture;
						if (!texture.loadFromFile("background.jpg"))
						{

						}
						sf::Sprite spritebackground(texture);

						spritebackground.setTexture(texture);
						spritebackground.setOrigin(100, 200);

						//for score 
						int score = 0;
						
						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}
						std::ostringstream ssscore;
						ssscore << "Score:" << score;

						sf::Text textscore;
						textscore.setFont(font);
						textscore.setString(ssscore.str());
						textscore.setFillColor(sf::Color::Yellow);
						textscore.setCharacterSize(35);
						textscore.setPosition(340, 20);

						sf::Text textscore1;
						textscore1.setFont(font);
						textscore1.setString(ssscore.str());
						textscore1.setFillColor(sf::Color::Yellow);
						textscore1.setCharacterSize(35);
						textscore1.setPosition(1300, 20);



						//for the hangman first box ok
						sf::Vertex line[] =
						{
							sf::Vertex(sf::Vector2f(5, 15)),
							sf::Vertex(sf::Vector2f(320, 15))
						};
						sf::Vertex line0[] =
						{
							sf::Vertex(sf::Vector2f(5, 320)),
							sf::Vertex(sf::Vector2f(320, 320))
						};
						sf::Vertex line01[] =
						{
							sf::Vertex(sf::Vector2f(5, 15)),
							sf::Vertex(sf::Vector2f(5, 320))
						};
						sf::Vertex line02[] =
						{
							sf::Vertex(sf::Vector2f(320, 15)),
							sf::Vertex(sf::Vector2f(320, 320))
						};
						//for 2nd box
						sf::Vertex man2box1[] =
						{
							sf::Vertex(sf::Vector2f(1500, 15)),
							sf::Vertex(sf::Vector2f(1820, 15))
						};
						sf::Vertex man2box2[] =
						{
							sf::Vertex(sf::Vector2f(1500,320)),
							sf::Vertex(sf::Vector2f(1820, 320))
						};
						sf::Vertex man2box3[] =
						{
							sf::Vertex(sf::Vector2f(1500, 15)),
							sf::Vertex(sf::Vector2f(1500, 320))
						};
						sf::Vertex man2box4[] =
						{
							sf::Vertex(sf::Vector2f(1820, 15)),
							sf::Vertex(sf::Vector2f(1820, 320))
						};



						sf::RectangleShape line1(sf::Vector2f(150, 20));

						line1.setPosition(10, 280);
						sf::RectangleShape line2(sf::Vector2f(255, 20));
						line2.setPosition(85, 28);
						line2.rotate(90);

						sf::RectangleShape line3(sf::Vector2f(150, 20));
						line3.setPosition(85, 28);

						//straight hanman line passing through circle

						sf::RectangleShape line4(sf::Vector2f(180, 20));
						line4.setPosition(240, 28);
						line4.rotate(90);
						line4.setFillColor(sf::Color::Yellow);
						//for head of hangman
						sf::CircleShape circle(35);
						circle.setPosition(200, 60);
						sf::Texture texturecircle;
						if (!texturecircle.loadFromFile("sad.jpg"))
						{
							// error...
						}
						circle.setTexture(&texturecircle);

						//fro legs of hangman
						sf::RectangleShape line5(sf::Vector2f(65, 20));
						line5.setPosition(240, 200);
						line5.setFillColor(sf::Color::Yellow);

						line5.rotate(60);
						sf::RectangleShape line6(sf::Vector2f(75, 20));
						line6.setPosition(240, 200);
						line6.rotate(120);
						line6.setFillColor(sf::Color::Yellow);
						//for hands of hangman
						sf::RectangleShape line8(sf::Vector2f(75, 20));
						line8.setPosition(240, 150);
						line8.setFillColor(sf::Color::Yellow);
						line8.rotate(148);
						sf::RectangleShape line7(sf::Vector2f(65, 20));
						line7.setPosition(240, 140);
						line7.rotate(32);
						line7.setFillColor(sf::Color::Yellow);
						//for another hangman next side one 
						sf::RectangleShape line10(sf::Vector2f(150, 20));

						line10.setPosition(1510, 280);
						sf::RectangleShape line20(sf::Vector2f(255, 20));
						line20.setPosition(1585, 28);
						line20.rotate(90);
						sf::RectangleShape line30(sf::Vector2f(150, 20));
						line30.setPosition(1585, 28);
						sf::RectangleShape line40(sf::Vector2f(180, 20));
						line40.setPosition(1740, 28);
						line40.setFillColor(sf::Color::Yellow);
						line40.rotate(90);
						sf::CircleShape circle2(35);
						circle2.setPosition(1700, 60);
						sf::Texture texturecircle2;
						if (!texturecircle2.loadFromFile("sad.jpg"))
						{
							// error...
						}
						circle2.setTexture(&texturecircle2);
						//for legs of another hangman
						sf::RectangleShape line50(sf::Vector2f(75, 20));
						line50.setPosition(1740, 200);
						line50.rotate(120);
						line50.setFillColor(sf::Color::Yellow);
						sf::RectangleShape line60(sf::Vector2f(65, 20));
						line60.setPosition(1740, 200);
						line60.rotate(60);
						line60.setFillColor(sf::Color::Yellow);
						//for hands of another hangman
						sf::RectangleShape line80(sf::Vector2f(65, 20));
						line80.setPosition(1740, 140);
						line80.rotate(32);
						line80.setFillColor(sf::Color::Yellow);
						sf::RectangleShape line70(sf::Vector2f(75, 20));
						line70.setPosition(1740, 150);
						line70.rotate(148);
						line70.setFillColor(sf::Color::Yellow);

						//text for player health
						sf::Font font;

						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}

						sf::Text text0;
						text0.setFont(font);
						text0.setString("Player 1 Life																						Player 2 Life");

						text0.setFillColor(sf::Color::White);
						text0.setCharacterSize(50);
						text0.setPosition(35, 325);

						sf::Texture texturehelp;
						if (!texturehelp.loadFromFile("img1.png"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritehelp1(texturehelp);
						spritehelp1.setPosition(1200, 900);



						sf::Texture texturehelp2;
						if (!texturehelp2.loadFromFile("img2.png"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritehelp2(texturehelp2);
						spritehelp2.setPosition(50, 900);





						//for scissor paper rock image displaying
						sf::Texture texture2;
						if (!texture2.loadFromFile("spr.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite sprite2(texture2);
						sprite2.setPosition(50, 400);

						sf::Texture texture3;
						if (!texture3.loadFromFile("spr.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite sprite3(texture3);
						sprite3.setPosition(1200, 400);

						//for rock
						sf::Texture texturerock;
						if (!texturerock.loadFromFile("rock.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spriterock2(texturerock);
						spriterock2.setPosition(1300, 400);

						sf::Sprite spriterock1(texturerock);
						spriterock1.setPosition(300, 400);

						//for scissors
						sf::Texture texturescissors;
						if (!texturescissors.loadFromFile("scissors.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritescissor2(texturescissors);
						spritescissor2.setPosition(1300, 400);

						sf::Sprite spritescissor1(texturescissors);
						spritescissor1.setPosition(300, 400);

						//for paper
						sf::Texture texturepaper;
						if (!texturepaper.loadFromFile("paper.jpg"))
						{
							std::cout << "Error loading paddle texture :(" << std::endl;
						}

						sf::Sprite spritepaper2(texturepaper);
						spritepaper2.setPosition(1300, 400);

						sf::Sprite spritepaper1(texturepaper);
						spritepaper1.setPosition(300, 400);

						int enterclear = 0;
						int enterpressed = 1;
						int round = 0;
						int codeval = 0;
						int roundTransition = 0;
						int ab=1;
						
						sf::Text text00;
						text00.setFont(font);
						text00.setString("Player 1 wins!!!");
						text00.setFillColor(sf::Color::Cyan);
						text00.setCharacterSize(50);
						text00.setPosition(800, 600);

						sf::Text text000;
						text000.setFont(font);
						text000.setString("Player 2 wins!!!");
						text000.setFillColor(sf::Color::Cyan);
						text000.setCharacterSize(50);
						text000.setPosition(800, 600);

						sf::Text textdraw;
						textdraw.setFont(font);
						textdraw.setString("Draw!!!");
						textdraw.setFillColor(sf::Color::Cyan);
						textdraw.setCharacterSize(50);
						textdraw.setPosition(800, 600);

						sf::Text exitgame;
						exitgame.setFont(font);
						exitgame.setString("Game Over..... Press space key to exit");
						exitgame.setFillColor(sf::Color::Cyan);
						exitgame.setCharacterSize(50);
						exitgame.setPosition(800, 600);


						sf::Text textexit;
						textexit.setFont(font);
						textexit.setString("Press Enter to Continue..");
						textexit.setFillColor(sf::Color::Cyan);
						textexit.setCharacterSize(35);
						textexit.setPosition(800, 750);



						while (window.isOpen() && round <= 8)

						{

							enterclear = 0;
							int enterpressed = 1;
							codeval = 0;
							sf::Event event;

							while (window.pollEvent(event))
							{



								if (event.type == sf::Event::KeyReleased) {

									if (event.key.code == sf::Keyboard::A) {

										codeval = 1;
									}
									else if (event.key.code == sf::Keyboard::S) {
										codeval = 2;
									}
									else if (event.key.code == sf::Keyboard::D) {
										codeval = 3;
									}
									/*
									else if (event.key.code == sf::Keyboard::Numpad1) {
										codeval = 4;
									}
									else if (event.key.code == sf::Keyboard::Numpad2) {
										codeval = 5;
									}
									else if (event.key.code == sf::Keyboard::Numpad3) {
										codeval = 6;
										
									}*/
									else if (event.key.code == sf::Keyboard::Enter) {
										codeval = 10;
										////enterpressed += 1;
										//if (enterpressed==3) std::cout << 5;
									}

									if (codeval != 10) round += 1;

									break;


								}

								/*else if (event.type == sf::Event::KeyReleased) {
								if (event.key.code == sf::Event::Closed) {
								window.close();
								}
								}*/
							}


							//if (roundTransition != 1) {




							window.clear();
							window.draw(spritebackground);
							//for input of scissor paper rock
							/*
							if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::P))
							{
							window.draw(text12);
							}*/

							window.draw(textscore);
							window.draw(textscore1);

							window.draw(line1);
							window.draw(line2);
							window.draw(line3);
							//}


							//for terminating window


							if (!font.loadFromFile("arial.ttf"))
							{
								// handle error
							}





							/*

							sf::Event evt;

							while (window.pollEvent(evt))
							{
							if (evt.type == sf::Event::KeyReleased)
							{
							if (evt.key.code == sf::Keyboard::Key::A)
							{
							window.close();

							}
							}
							}
							*/

							//sf::Clock myClock;
							bool showCursor = false;

							int i;

							int a, s, d, a1, s1, d1, a2, s2, d2, a3, s3, d3, x, y, z, x1, x2, x3, y1, y2, y3, z1, z2, z3;



							if (codeval == 1)
							{

								a = 1;
								a1 = 10;
								a2 = 100;
								a3 = 1000;

							}
							else if (codeval == 2)
							{
								s = 2;
								s1 = 20;
								s2 = 200;
								s3 = 2000;

							}
							else if (codeval == 3)
							{
								d = 3;
								d1 = 30;
								d2 = 300;
								d3 = 3000;

							}
							/*
							else if (codeval == 4)
							{
								x = 4;
								x1 = 40;
								x2 = 400;
								x3 = 4000;
								roundTransition = 1;
							}
							else if (codeval == 5)
							{
								y = 5;
								y1 = 50;
								y2 = 500;
								y3 = 5000;
								roundTransition = 1;
							}
							else if (codeval == 6)
							{
								z = 6;
								z1 = 60;
								z2 = 600;
								z3 = 6000;
								roundTransition = 1;
							}*/


							//for rANDOM NUMBER
							
							{
								srand(time(NULL));
								{
									x = rand() % 4 + 1;
									
								}
							
							int ab = x;
							std::cout << x;

							//x = 2;
							
							//y = rand() % 4;
							//z = rand() % 4;
							}


							if (a == 1 && x== 2)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								//Sprite3.setOrigin(400, 300);
								window.draw(spritescissor1);
								window.draw(spritepaper2);
								window.draw(text00);
								window.draw(textexit);


								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());

							}
							if (s == 2 && x == 3)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								window.draw(spritepaper1);
								window.draw(spriterock2);
								window.draw(text00);
								window.draw(textexit);


								score = enterpressed;
								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());
							}
							if (d == 3 && x == 1)
							{
								//window.draw(text00);
								window.draw(line40);
								window.draw(circle2);
								window.draw(line50);
								window.draw(line60);
								window.draw(line80);
								window.draw(line70);
								window.draw(spriterock1);
								window.draw(spritescissor2);
								window.draw(text00);
								window.draw(textexit);


								score = enterpressed;
								ssscore.str("");
								ssscore << "Score:" << score;
								textscore.setString(ssscore.str());

							}

							//sf::Time t3 = sf::seconds(10);


							if (a == 1 && x == 1)
							{

								window.draw(spritescissor1);
								window.draw(spritescissor2);
								window.draw(textdraw);
							}

							if (s == 2 && x == 2)
							{

								window.draw(spritepaper1);
								window.draw(spritepaper2);
								window.draw(textdraw);
							}

							if (d == 3 && x == 3)
							{
								window.draw(spriterock2);
								window.draw(spriterock1);
								window.draw(textdraw);
							}
							/*
							if (x == 1 && s == 2)
							{
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spritescissor2);
								window.draw(spritepaper1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());
							}
							if (y == 2 && d == 3)

							{
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spritepaper2);
								window.draw(spriterock1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());
							}
							if (z == 3 && a == 1)
							{
								//score = 1;
								//window.draw(text000);
								window.draw(line4);
								window.draw(circle);
								window.draw(line5);
								window.draw(line6);
								window.draw(line8);

								window.draw(line7);
								window.draw(spriterock2);
								window.draw(spritescissor1);
								window.draw(text000);
								window.draw(textexit);

								score = enterpressed;

								ssscore.str("");
								ssscore << "Score:" << score;
								textscore1.setString(ssscore.str());

							}*/

							//window.draw(textexit);


							//enter le naya windoe lyane delete this loop papradox.......

							//enter le naya windoe lyane delete this loop papradox.....ends here....


							showCursor = true;


							/*if (showCursor = true)
							{
							window.clear();
							}*/




							/*
							{


							if (a == 1 && y == 5 || s == 2 && z == 6 || d == 3 && x == 4)
							{
							window.draw(line40);

							}



							if (a1 == 10 && y1 == 50 || s1 == 20 && z1 == 60 || d1 == 30 && x1 == 40)
							{
							window.draw(circle2);

							}

							if (a2 == 100 && y2 == 500 || s2 == 200 && z2 == 600 || d2 == 300 && x2 == 400)
							{
							window.draw(line50);
							window.draw(line60);

							}

							if (a3 == 1000 && y3 == 5000 || s3 == 2000 && z3 == 6000 || d3 == 3000 && x3 == 4000)
							{
							window.draw(line80);
							window.draw(line70);
							window.draw(text00);
							showCursor = false;
							if (showCursor == false)
							score++;
							ssscore.str("");
							ssscore << "Score:" << score;
							textscore.setString(ssscore.str());
							showCursor = true;

							}



							if (x == 4 && s == 2 || y == 5 && d == 3 || z == 6 && a == 1)
							{
							window.draw(line4);
							}
							if (x1 == 40 && s1 == 20 || y1 == 50 && d1 == 30 || z1 == 60 && a1 == 10)
							{
							window.draw(circle);
							}
							if (x2 == 400 && s2 == 200 || y2 == 500 && d2 == 300 || z2 == 600 && a2 == 100)
							{
							window.draw(line5);
							window.draw(line6);
							}
							if (x3 == 4000 && s3 == 2000 || y3 == 5000 && d3 == 3000 || z3 == 6000 && a3 == 1000)
							{
							window.draw(line8);
							window.draw(line7);
							window.draw(text000);


							score++;
							ssscore.str("");
							ssscore << "Score:" << score;
							textscore1.setString(ssscore.str());

							}

							}
							*/


							/*

							if (roundTransition == 1) {
							if (codeval != 10) {
							std::cout << "Wait for enter" << std::endl;
							continue;
							}
							else {
							roundTransition = 0;

							}

							}

							*/


							if (codeval == 10) {
								a = 0;
								s = 0;
								d = 0;

								

								//enterclear;
							}
							/*if (enterclear=3)
							{
							std::cout << "as";
							}*/
















							/*else if (a == 1 && x == 0 || a == 2 && x == 1 || a == 0 && x == 2 || a == 1 && x == 2)
							{
							window.draw(line4);
							}*/








							//myTxt.setString("System Module:_");


							// left key is pressed: move our character


							//	window.draw(line4);
							//window.draw(circle);


							//another one
							window.draw(line10);
							window.draw(line20);
							window.draw(line30);
							//window.draw(line40);
							//window.draw(circle2);


							//window.draw(sprite);

							//window.draw(sprite2);
							//window.draw(sprite3);


							//for rectangle ouside 1srhangman
							window.draw(line, 2, sf::Lines);
							window.draw(line0, 2, sf::Lines);
							window.draw(line01, 2, sf::Lines);
							window.draw(line02, 2, sf::Lines);
							//for rectangle outside the 2nd human
							window.draw(man2box1, 2, sf::Lines);
							window.draw(man2box2, 2, sf::Lines);
							window.draw(man2box3, 2, sf::Lines);
							window.draw(man2box4, 2, sf::Lines);
							window.draw(text0);
							window.draw(spritehelp1);
							window.draw(spritehelp2);


							window.display();

						}
					}




					break;
					

					case 2:
					{

						sf::RenderWindow window(sf::VideoMode(1500, 850), "Help" );

						sf::Font font;

						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}

						sf::Text text1;
						text1.setFont(font);
						text1.setString("How to Play the Game");
						text1.setFillColor(sf::Color::White);
						text1.setCharacterSize(80);
						text1.setPosition(400, 20);


						sf::Text text2;
						text2.setFont(font);
						text2.setString("The Game is Very simple. You can either play with Computer or With your Friends. Your mission is to save\n the man.Firstly you have to play scissor paper rock with friends or computer.\n when you loose a body part of your man appears and slowly after 6 more times he fully appears and \nis hanged and you loose the game. \nOur mission is to save the man from hanging.\n\nControls::::\n\nA------------------->Scissor\nS---------------->Paper\nD--------------->Rock\n\nNum Pad 1-------------->Scissor\nNum Pad 2------------->Paper\nNum Pad 3------------->Rock\n\n\n\nPress Enter to Exit.");
						text2.setFillColor(sf::Color::Red);
						text2.setCharacterSize(30);
						text2.setPosition(50, 160);



						while (window.isOpen())
						{
							sf::Event event;

							while (window.pollEvent(event))
							{
								switch (event.type)
								{
								case sf::Event::Closed:
									window.close();

									break;
								case sf::Event::KeyReleased:
									window.close();
									break;
								}
							}

							window.clear();
							window.draw(sprite);
							window.draw(text1);
							window.draw(text2);
							
							window.display();
						}
					}
					break;

					case 3:
					{

						sf::RenderWindow window(sf::VideoMode(1500, 850), "About Developers" );
						sf::Texture texture;
						if (!texture.loadFromFile("background.jpg"))
						{

						}
						sf::Sprite sprite(texture);

						sprite.setTexture(texture);
						sprite.setOrigin(100, 200);
						sf::Font font;

						if (!font.loadFromFile("arial.ttf"))
						{
							// handle error
						}

						sf::Text text1;
						text1.setFont(font);
						text1.setString("Developers");
						text1.setFillColor(sf::Color::White);
						text1.setCharacterSize(80);
						text1.setPosition(650, 20);


						sf::Text text2;
						text2.setFont(font);
						text2.setString("Ashish Pokhrel --Boltar-- (38)\n\n Dinesh Poudel (39)\n\n Prashant Bhatta (09) \n\nBishal K.C. (22)\n\n\n\n\nPress Enter to Exit.");
						text2.setFillColor(sf::Color::Red);
						text2.setCharacterSize(40);
						text2.setPosition(50, 160);



						while (window.isOpen())
						{
							sf::Event event;

							while (window.pollEvent(event))
							{
								switch (event.type)
								{
								case sf::Event::Closed:
									window.close();
									break;

								case sf::Event::KeyReleased:
									window.close();
									break;


								}
							}

							window.clear();
							window.draw(sprite);
							window.draw(text1);
							window.draw(text2);
							
							window.display();
						}

					}
						break;
						case 4:
						window.close();
						break;
					}

					break;
				}

				break;
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();
		window.draw(sprite);
		window.draw(textmain);
		


		menu.draw(window);

		window.display();
	}
}


