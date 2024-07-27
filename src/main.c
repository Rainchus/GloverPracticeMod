void func_80145680(int);
void PrintChar(char*, char);
extern int textXPos;
extern int textYPos;

int perFrameHookC(void) {
    func_80145680(0); //restore from hook
    //Print a 'P' doesn't work for some reason?
    //textXPos = 0xDB;
    //textYPos = 0xA0;
    //PrintChar((char*)0x801EC908, 'P');
    return 1;
}