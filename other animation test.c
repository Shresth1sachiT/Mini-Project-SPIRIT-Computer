#include <stdio.h>
#include <unistd.h> // For sleep function

void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear the screen
}

void drawFrame(int frame) {
    switch (frame) {
        case 1:
            printf("  *\n");
            printf(" *\n");
            printf("*\n");
            break;
        case 2:
            printf("  *\n");
            printf("\\|/\n");
            printf(" *\n");
            break;
        case 3:
            printf("   *\n");
            printf("  /|\\\n");
            printf("   *\n");
            break;
        case 4:
            printf("    *\n");
            printf("   \\|/\n");
            printf("    *\n");
            break;
        case 5:
            printf("     *\n");
            printf("    /|\\\n");
            printf("     *\n");
            break;
        case 6:
            printf("      *\n");
            printf("     \\|/\n");
            printf("      *\n");
            break;
        case 7:
            printf("       *\n");
            printf("      /|\\\n");
            printf("       *\n");
            break;
        case 8:
            printf("        *\n");
            printf("       \\|/\n");
            printf("        *\n");
            break;
        case 9:
            printf("         *\n");
            printf("        /|\\\n");
            printf("         *\n");
            break;
        case 10:
            printf("         *\n");
            printf("        \\|/\n");
            printf("         *\n");
            break;
        case 11:
            printf("          *\n");
            printf("         /|\\\n");
            printf("          *\n");
            break;
        case 12:
            printf("           *\n");
            printf("          \\|/\n");
            printf("           *\n");
            break;
        case 13:
            printf("            *\n");
            printf("           /|\\\n");
            printf("            *\n");
            break;
        case 14:
            printf("             *\n");
            printf("            \\|/\n");
            printf("             *\n");
            break;
        case 15:
            printf("              *\n");
            printf("             /|\\\n");
            printf("              *\n");
            break;
        case 16:
            printf("               *\n");
            printf("              \\|/\n");
            printf("               *\n");
            break;
        case 17:
            printf("                *\n");
            printf("               /|\\\n");
            printf("                *\n");
            break;
        case 18:
            printf("                 *\n");
            printf("                \\|/\n");
            printf("                 *\n");
            break;
        case 19:
            printf("                  *\n");
            printf("                 /|\\\n");
            printf("                  *\n");
            break;
        case 20:
            printf("                   *\n");
            printf("                  \\|/\n");
            printf("                   *\n");
            break;
        case 21:
            printf("                    *\n");
            printf("                   /|\\\n");
            printf("                    *\n");
            break;
        case 22:
            printf("                     *\n");
            printf("                    \\|/\n");
            printf("                     *\n");
            break;
        case 23:
            printf("                      *\n");
            printf("                     /|\\\n");
            printf("                      *\n");
            break;
        case 24:
            printf("                       *\n");
            printf("                      \\|/\n");
            printf("                       *\n");
            break;
        case 25:
            printf("                        *\n");
            printf("                       /|\\\n");
            printf("                        *\n");
            break;
        case 26:
            printf("                         *\n");
            printf("                        \\|/\n");
            printf("                         *\n");
            break;
        case 27:
            printf("                          *\n");
            printf("                         /|\\\n");
            printf("                          *\n");
            break;
        case 28:
            printf("                           *\n");
            printf("                          \\|/\n");
            printf("                           *\n");
            break;
        case 29:
            printf("                            *\n");
            printf("                           /|\\\n");
            printf("                            *\n");
            break;
        case 30:
            printf("                             *\n");
            printf("                            \\|/\n");
            printf("                             *\n");
            break;
        default:
            break;
    }
}

int main() {
    for (int frame = 1; frame <= 30; ++frame) {
        clearScreen();
        drawFrame(frame);
        usleep(50000); // 50,000 microseconds delay (adjust as needed)
    }

    return 0;
}

