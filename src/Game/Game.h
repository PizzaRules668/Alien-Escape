class Game : public sf::Drawable
{
public:
	Game();
	~Game();

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::Sprite sprite;
};