class Map : public sf::Drawable
{
public:
	Map();
	Map(int map[23][40]);

	~Map();

	void loadMap(int map[23][40]);
	void loadAssets();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
	int map[23][40];

	//       tile id, tile location
	std::map<int, sf::Vector2i> currentMap;
	// 		 tile id, tile sprite
	std::vector<sf::Sprite> tiles;
};