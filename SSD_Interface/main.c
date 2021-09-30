#include "SSD.h"
#include "util/delay.h"


int main(void)
{
	Ssd_init();
    while (1) 
    {
		for(int i = 0; i<10; i++)
		{
			Ssd_StateSet(SSD1_EN,numSet[i]);
			_delay_ms(1000);
		}
		
    }
}

