struct KBHit_key {
    int ascii;
    char character;
    bool alt;
    bool ctrl;
    bool shift;
};

bool init_mexKbhit(void);
struct KBHit_key mexKbhit(bool verbose = false);
void stop_mexKbhit(void);
