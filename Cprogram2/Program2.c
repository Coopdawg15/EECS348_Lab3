/*
 * Program2.c
 *  Created on: Feb 14, 2023
 *      Author: c046k307
 */
#include <stdio.h>

int main() {
    int score;

    do {
        printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
        scanf("%d", &score);
        if (score < 2) {
            break;
        }

        printf("\nPossible combinations of scoring plays:\n\n");
        for (int td = 0; td * 6 <= score; td++)
        {
            for (int fg = 0; fg * 3 <= score - td * 6; fg++)
            {
                for (int safety = 0; safety * 2 <= score - td * 6 - fg * 3; safety++)
                {
                    for (int td_conversion = 0; td_conversion * 8 <= score - td * 6 - fg * 3 - safety * 2; td_conversion++)
                    {
                    	for (int td_fg = 0; td_fg * 7 <= score - td * 6 - fg * 3 - safety * 2 - td_conversion * 8; td_fg++)
                    	{
                    		if (td * 6 + fg * 3 + safety * 2 + td_conversion * 8 + td_fg * 7 == score) {
                    			printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_conversion, td_fg, td, fg, safety);
                    		}
                        }
                    }
                }
            }
        }
        printf("\n");
    } while (score >= 2);

    return 0;
}
