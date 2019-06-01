#include <stdint.h>
#include <time.h>

enum CARD_STATE {
    CARD_STATE_NULL,
    CARD_STATE_DATALESS,
    CARD_STATE_ACTIVE
};

struct CardTimestampData {
    time_t time;
    uint32_t price;
    uint32_t amount;
};
struct Card {
    uint8_t state;
    char name[64];
    struct CardTimestampData data[365*20];  //20 years worth max
    unsigned int dataLength;
};

int x = sizeof(struct Card);  //1 GB

int main(){

    return 0;
}