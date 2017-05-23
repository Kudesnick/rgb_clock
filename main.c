#include "ws2812b.h"

#define NUM_LEDS (13*4+2)

RGB_t leds[NUM_LEDS];

int main()
{
    ws2812b_Init();

    while (1)
    {
        while (!ws2812b_IsReady()); // wait

        //
        // Fill leds buffer
        //

        ws2812b_SendRGB(leds, NUM_LEDS);
    }
}
