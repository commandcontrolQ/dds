#define ASCIIOFFSET 32
#define CHARWIDTH 10
#define CHAROFFSET 3
#define CHARSPRITES 4
typedef struct group {
	std::vector<group*> groups;
	std::vector<songdata> songs;
} group;
void m_setup();
void loadSongFrameGfx();
void loadSongFontGfx();
void printToBitmap(u8 gfx, std::string str);
void fillGroup(std::string dir, group* parent);
void menuLoop();
void renderMenu();