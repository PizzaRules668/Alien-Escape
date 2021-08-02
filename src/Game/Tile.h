class Tile : public sf::Drawable
{
public:
	Tile(std::string filePath, std::string name, int id);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	std::string name;
	int id;

	std::string filePath;
	sf::Texture tex;
	sf::Sprite sprite;
};